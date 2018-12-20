#include "QThread"
#include "include.h"

ThreadGamepad::ThreadGamepad(Drone * drone): QThread()
{
    this->drone = drone;
}

void ThreadGamepad::run() {
    while (1) {
        if (!GamepadIsConnected(GAMEPAD_0)) {
            this->setGamePadIsConnected(false);
            GamepadInit();
        } else {
            this->setGamePadIsConnected(true);
        }

        QThread::msleep(1000);
    }
}

void ThreadGamepad::setGamePadIsConnected(bool value) {
    if (this->gamepadIsConnected != value) {
        this->gamepadIsConnected = value;
        emit gamePadIsConnectedChanged(value);
    }
}
