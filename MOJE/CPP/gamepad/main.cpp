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
#include <future>
#include <map>
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

std::string forceLeftX = "0";
std::string forceLeftY = "0";
std::string forceRightX = "0";
std::string forceRightY = "0";


std::string arduinoDeviceStr = "";
bool arduinoDetected = false;
bool arduinoConnected = false;
bool arduinoReady = false;
bool gamepadConnected = false;
std::chrono::system_clock::time_point lastPing;
std::chrono::system_clock::time_point lastPingOk;
GAMEPAD_DEVICE pad0 = GAMEPAD_0;
std::map<std::string, std::string> modes;

#define MIN_SEND_VALUE 900
#define MAX_SEND_VALUE 2100
#define MIN_SEND_VALUE_FORCE 900
#define MAX_SEND_VALUE_FORCE 2100
#define SEND_SCALE_RATIO 1.0
#define MIDDLE_POINT_WIDTH 250.0

void printLine(std::string content, int line);

void setTimeOut(int milliseconds, std::function<void()> func) {
    std::async(std::launch::async, [=]() {
        std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
        func();
    });
};

void setValues(double _leftX, double _leftY, double _rightX, double _rightY) {
    _leftX *= SEND_SCALE_RATIO / 2.0;
    _leftY *= SEND_SCALE_RATIO;
    _rightX *= SEND_SCALE_RATIO / 2.0;
    _rightY *= SEND_SCALE_RATIO / 2.0;

    _leftX = (((double) MAX_SEND_VALUE + (double) MIN_SEND_VALUE) / 2.0) +
             (_leftX * MIDDLE_POINT_WIDTH);
    _leftY = std::max((double) MIN_SEND_VALUE, MIN_SEND_VALUE + (_leftY * 500.0));
    _rightX = (((double) MAX_SEND_VALUE + (double) MIN_SEND_VALUE) / 2.0) +
              (_rightX * MIDDLE_POINT_WIDTH);
    _rightY = (((double) MAX_SEND_VALUE + (double) MIN_SEND_VALUE) / 2.0) +
              (_rightY * MIDDLE_POINT_WIDTH);

    leftX = std::to_string((int) _leftX);
    leftY = std::to_string((int) _leftY);
    rightX = std::to_string((int) _rightX);
    rightY = std::to_string((int) _rightY);
}

void setValuesForce(double _leftX, double _leftY, double _rightX, double _rightY) {
    _leftX = (((double) MAX_SEND_VALUE_FORCE + (double) MIN_SEND_VALUE_FORCE) / 2.0) +
             (_leftX * ((double) MAX_SEND_VALUE_FORCE - (double) MIN_SEND_VALUE_FORCE) / 2.0);
    _leftY = (((double) MAX_SEND_VALUE_FORCE + (double) MIN_SEND_VALUE_FORCE) / 2.0) +
             (_leftY * ((double) MAX_SEND_VALUE_FORCE - (double) MIN_SEND_VALUE_FORCE) / 2.0);
    _rightX = (((double) MAX_SEND_VALUE_FORCE + (double) MIN_SEND_VALUE_FORCE) / 2.0) +
              (_rightX * ((double) MAX_SEND_VALUE_FORCE - (double) MIN_SEND_VALUE_FORCE) / 2.0);
    _rightY = (((double) MAX_SEND_VALUE_FORCE + (double) MIN_SEND_VALUE_FORCE) / 2.0) +
              (_rightY * ((double) MAX_SEND_VALUE_FORCE - (double) MIN_SEND_VALUE_FORCE) / 2.0);

    forceLeftX = std::to_string((int) _leftX);
    forceLeftY = std::to_string((int) _leftY);
    forceRightX = std::to_string((int) _rightX);
    forceRightY = std::to_string((int) _rightY);
}

static void gamepadUpdate() {
    GamepadUpdate();

    double _leftX = GamepadStickLength(pad0, STICK_LEFT) * cos(GamepadStickAngle(pad0, STICK_LEFT));
    double _leftY = GamepadStickLength(pad0, STICK_LEFT) * sin(GamepadStickAngle(pad0, STICK_LEFT));
    double _rightX = GamepadStickLength(pad0, STICK_RIGHT) * cos(GamepadStickAngle(pad0, STICK_RIGHT));
    double _rightY = GamepadStickLength(pad0, STICK_RIGHT) * sin(GamepadStickAngle(pad0, STICK_RIGHT));

    setValues(_leftX, _leftY, _rightX, _rightY);

    if (modes["lock_events"] == "false") {
        if (GamepadButtonDown(pad0, BUTTON_START)) {
            if (modes["arming_mode"] == "-1") {
                setValuesForce(1, -1, 0, 0);
                modes["lock_events"] = "true";
                modes["lock_input"] = "true";
                modes["arming_mode"] = "0";
                setTimeOut(1100, []() {
                    modes["lock_input"] = "false";
                    modes["lock_events"] = "false";
                    modes["arming_mode"] = "1";
                    setValuesForce(0, 0, 0, 0);
                });
            } else if (modes["arming_mode"] == "1") {
                setValuesForce(-1, -1, 0, 0);
                modes["lock_events"] = "true";
                modes["lock_input"] = "true";
                modes["arming_mode"] = "2";
                setTimeOut(1100, []() {
                    modes["lock_input"] = "false";
                    modes["lock_events"] = "false";
                    modes["arming_mode"] = "-1";
                    setValuesForce(0, 0, 0, 0);
                });
            }
        }
    }
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
            if (modes["lock_input"] == "false") {
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
            } else {
                std::string buffer = "";
                buffer.append("^");
                buffer.append(forceLeftX);
                buffer.append(" ");
                buffer.append(forceLeftY);
                buffer.append(" ");
                buffer.append(forceRightX);
                buffer.append(" ");
                buffer.append(forceRightY);
                buffer.append("$");

                arduino << buffer;
            }
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
            if (modes["lock_input"] == "false") {
                printLine("LX: " + leftX + " || LY: " + leftY + " || RX: " + rightX + " || RY: " + rightY, 4);
            } else {
                printLine("LX: " + forceLeftX + " || LY: " + forceLeftY + " || RX: " + forceRightX + " || RY: " +
                          forceRightY, 4);
            }
        }

        if (modes["arming_mode"] == "-1") {
            printLine("MOTORS not armed.", 5);
        } else if (modes["arming_mode"] == "0") {
            printLine("MOTORS arming in progress.", 5);
        } else if (modes["arming_mode"] == "1") {
            printLine("MOTORS armed.", 5);
        } else if (modes["arming_mode"] == "2") {
            printLine("MOTORS disarming in progress.", 5);
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
            if (ch == 'p') {
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
        if (arduinoConnected) {
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

    modes["lock_input"] = "false";
    modes["lock_events"] = "false";
    modes["arming_mode"] = "-1";

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
