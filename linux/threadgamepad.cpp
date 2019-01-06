#include "include.h"

ThreadGamepad::ThreadGamepad() : QThread() {

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

ThreadGamepad0::ThreadGamepad0() : ThreadGamepad() {

}

ThreadGamepad1::ThreadGamepad1() : ThreadGamepad() {

}
