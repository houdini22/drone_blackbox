#include "include.h"

ThreadGamepad::ThreadGamepad() : QThread()
{

}

void ThreadGamepad::run() {
    while (1) {
        if (!GamepadIsConnected(this->gamepad)) {
            emit signalGamepadIsConnected(false);
            GamepadInit();
        } else {
            emit signalGamepadIsConnected(true);
        }

        QThread::msleep(1000);
    }
}
