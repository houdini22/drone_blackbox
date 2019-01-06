#ifndef THREADGAMEPAD_H
#define THREADGAMEPAD_H

#include "include.h"

class ThreadGamepad : public QThread {
    Q_OBJECT
public:
    ThreadGamepad();
protected:
    GAMEPAD_DEVICE gamepad = GAMEPAD_0;
    void run() override;
signals:
    void signalGamepadIsConnected(bool value);
};

class ThreadGamepad0 : public ThreadGamepad {
public:
    ThreadGamepad0();
protected:
    GAMEPAD_DEVICE gamepad = GAMEPAD_0;
};

class ThreadGamepad1 : public ThreadGamepad {
public:
    explicit ThreadGamepad1();
protected:
    GAMEPAD_DEVICE gamepad1 = GAMEPAD_1;
};

#endif // THREADGAMEPAD_H
