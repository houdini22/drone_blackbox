#include <iostream>
#include <ncurses.h>
#include <math.h>
#include <SerialStream.h>
#include <string>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/statvfs.h>
#include <thread>
#include <chrono>
#include "gamepad.h"

using namespace LibSerial;
using namespace std::chrono;

SerialStream arduino;

#define INTERVAL_ARDUINO_SEND 13
#define INTERVAL_PAD_UPDATE 13
#define INTERVAL_ARDUINO_PING 20
#define INTERVAL_PARSE_ARDUINO_RESPONSE 50
#define INTERVAL_ARDUINO_PINGOUT 50
#define INTERVAL_WINDOW_UPDATE 100
#define INTERVAL_ARDUINO_DETECT 500
#define INTERVAL_ARDUINO_CONNECT 500
#define INTERVAL_PAD_DETECT 500

std::string leftX = "0";
std::string leftY = "0";
std::string rightX = "0";
std::string rightY = "0";
std::string arduinoDeviceStr = "";
bool arduinoDetected = false;
bool arduinoConnected = false;
bool arduinoReady = false;
bool gamepadConnected = false;
std::chrono::system_clock::time_point lastPing;
std::chrono::system_clock::time_point lastPingOk;
GAMEPAD_DEVICE pad0 = GAMEPAD_0;

#define MIN_SEND_VALUE 1100
#define MAX_SEND_VALUE 1900
#define SEND_SCALE_RATIO 0.5

void printLine(std::string content, int line);

void setValues(double _leftX, double _leftY, double _rightX, double _rightY) {
    leftX = std::to_string((int) _leftX);
    leftY = std::to_string((int) _leftY);
    rightX = std::to_string((int) _rightX);
    rightY = std::to_string((int) _rightY);
}

static void gamepadUpdate() {
    GamepadUpdate();

    double _leftX = GamepadStickLength(pad0, STICK_LEFT) * cos(GamepadStickAngle(pad0, STICK_LEFT)) * SEND_SCALE_RATIO;
    double _leftY =
            GamepadStickLength(pad0, STICK_LEFT) * sin(GamepadStickAngle(pad0, STICK_LEFT)) * (SEND_SCALE_RATIO / 2.0);
    double _rightX =
            GamepadStickLength(pad0, STICK_RIGHT) * cos(GamepadStickAngle(pad0, STICK_RIGHT)) * SEND_SCALE_RATIO;
    double _rightY =
            GamepadStickLength(pad0, STICK_RIGHT) * sin(GamepadStickAngle(pad0, STICK_RIGHT)) * SEND_SCALE_RATIO;

    _leftX = (((double) MAX_SEND_VALUE + (double) MIN_SEND_VALUE) / 2.0) +
             (_leftX * ((double) MAX_SEND_VALUE - (double) MIN_SEND_VALUE) / 2.0);
    _leftY = std::max((double) MIN_SEND_VALUE, MIN_SEND_VALUE + (_leftY * (MAX_SEND_VALUE - MIN_SEND_VALUE)));
    _rightX = (((double) MAX_SEND_VALUE + (double) MIN_SEND_VALUE) / 2.0) +
              (_rightX * ((double) MAX_SEND_VALUE - (double) MIN_SEND_VALUE) / 2.0);
    _rightY = (((double) MAX_SEND_VALUE + (double) MIN_SEND_VALUE) / 2.0) +
              (_rightY * ((double) MAX_SEND_VALUE - (double) MIN_SEND_VALUE) / 2.0);

    setValues(_leftX, _leftY, _rightX, _rightY);
}

void threadGamepadUpdate() {
    while (true) {
        if (gamepadConnected) {
            gamepadUpdate();
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(INTERVAL_PAD_UPDATE));
    }
}

void threadArduinoSend() {
    while (true) {
        if (gamepadConnected && arduinoReady) {
            std::string buffer = "";
            buffer.append("^");
            buffer.append(leftX);
            buffer.append(" ");
            buffer.append(leftY);
            buffer.append(" ");
            buffer.append(rightX);
            buffer.append(" ");
            buffer.append(rightY);
            buffer.append("$");

            arduino << buffer;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(INTERVAL_ARDUINO_SEND));
    }
}

std::string detectArduino() {
    int i;
    std::string deviceStr = "";

    for (i = 0; i < 16; i++) {
        int fd;
        std::string tmpDeviceStr = "/dev/ttyACM";

        tmpDeviceStr.append(std::to_string(i));
        fd = open(tmpDeviceStr.c_str(), O_RDWR | O_NOCTTY);
        if (fd != -1) {
            close(fd);
            deviceStr = tmpDeviceStr;
            break;
        }
    }

    return deviceStr;
}

void threadArduinoDetect() {
    while (true) {
        if (!arduinoDetected) {
            arduinoDeviceStr = detectArduino();
            if (arduinoDeviceStr.length() > 0) {
                arduinoDetected = true;
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(INTERVAL_ARDUINO_DETECT));
    }
}

void threadWindowUpdate() {
    while (true) {
        if (!arduinoDetected) {
            printLine("Cannot detect arduino.", 0);
        } else {
            printLine("Arduino found: " + arduinoDeviceStr, 0);
        }

        if (!arduinoConnected) {
            printLine("Arduino NOT connected.", 1);
        } else {
            printLine("Arduino connection estabilished.", 1);
        }

        if (!arduinoReady) {
            printLine("Waiting for arduino...", 2);
        } else {
            printLine("Arduino READY.", 2);
        }

        if (!gamepadConnected) {
            printLine("Waiting for gamepad...", 3);
            printLine("LX: none || LY: none || RX: none || RY: none", 4);
        } else {
            printLine("Gamepad0 connected.", 3);
            printLine("LX: " + leftX + " || LY: " + leftY + " || RX: " + rightX + " || RY: " + rightY, 4);
        }

        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(INTERVAL_WINDOW_UPDATE));
    }
}

void threadArduinoConnect() {
    while (true) {
        if (arduinoDetected && !arduinoConnected) {
            arduino.Open(arduinoDeviceStr.c_str());
            arduino.SetBaudRate(SerialStreamBuf::BAUD_115200);
            arduino.SetCharSize(SerialStreamBuf::CHAR_SIZE_8);
            arduinoConnected = true;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(INTERVAL_ARDUINO_CONNECT));
    }
}

void threadGamepadDetect() {
    while (true) {
        if (!GamepadIsConnected(pad0)) {
            GamepadInit();
            gamepadConnected = false;
        } else {
            gamepadConnected = true;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(INTERVAL_PAD_DETECT));
    }
}

void threadArduinoParseResponse() {
    while (true) {
        if (arduinoConnected) {
            char ch;
            arduino >> ch;
            if (ch == 'r') {
                arduinoReady = true;
                lastPingOk = std::chrono::system_clock::now();
            } else if (ch == 'p') {
                lastPingOk = std::chrono::system_clock::now();
                arduinoReady = true;
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(INTERVAL_PARSE_ARDUINO_RESPONSE));
    }
}

void threadArduinoPingout() {
    while (true) {
        if (arduinoReady) {
            auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(
                    std::chrono::system_clock::now() - lastPingOk);

            if (elapsed > std::chrono::milliseconds(250)) {
                arduinoConnected = false;
                arduinoDetected = false;
                arduinoReady = false;
                arduinoDeviceStr = "";
                arduino.Close();
                continue;
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(INTERVAL_ARDUINO_PINGOUT));
    }
}

void threadArduinoPing() {
    while (true) {
        if (arduinoReady) {
            arduino << "p";
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(INTERVAL_ARDUINO_PING));
    }
}

void printLine(std::string content, int line) {
    move(line, 0);
    clrtoeol();
    printw(content.c_str());
}

int main() {
    int ch;

    // init output window
    initscr();
    cbreak();
    noecho();
    timeout(1);

    std::thread threadObjDetectArduino(threadArduinoDetect);
    std::thread threadObjConnectArduino(threadArduinoConnect);
    std::thread threadObjArduinoParseResponse(threadArduinoParseResponse);
    std::thread threadObjArduinoPing(threadArduinoPing);
    std::thread threadObjDetectGamepad(threadGamepadDetect);
    std::thread threadObjUpdateWindow(threadWindowUpdate);
    std::thread threadObjGamepadUpdate(threadGamepadUpdate);
    std::thread threadObjGamespadSend(threadArduinoSend);
    std::thread threadObjArduinoPingOut(threadArduinoPingout);

    while ((ch = getch()) != 'q') {
        sleep(1);
    }

    arduino.Close();

    endwin();

    return 0;
}
