#include "QThread"
#include "include.h"

ThreadGamepad::ThreadGamepad(Drone * drone): QThread()
{
    this->drone = drone;
}

void ThreadGamepad::run() {
    while (1) {
        if (!GamepadIsConnected(GAMEPAD_0)) {
            this->setGamePadIsConnected("false");
            GamepadInit();
        } else {
            this->setGamePadIsConnected("true");
        }

        QThread::msleep(1000);
    }
}

void ThreadGamepad::setGamePadIsConnected(QString value) {
    if (this->gamepadIsConnected.compare(value) != 0) {
        this->gamepadIsConnected = value;
        emit gamePadIsConnectedChanged(value);
    }
}
