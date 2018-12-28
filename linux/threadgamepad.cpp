#include "QThread"
#include "include.h"

ThreadGamepad::ThreadGamepad(): QThread()
{

}

void ThreadGamepad::run() {
    while (1) {
        if (!GamepadIsConnected(GAMEPAD_0)) {
            this->setGamepadIsConnected(false);
            GamepadInit();
        } else {
            this->setGamepadIsConnected(true);
        }

        QThread::msleep(1000);
    }
}

void ThreadGamepad::setGamepadIsConnected(bool value) {
    emit signalGamepadIsConnected(value);
}
