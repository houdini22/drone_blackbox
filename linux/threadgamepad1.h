#ifndef THREADGAMEPAD1_H
#define THREADGAMEPAD1_H

#include "include.h"

class ThreadGamepad1 : public ThreadGamepad {
public:
    explicit ThreadGamepad1();
protected:
    GAMEPAD_DEVICE gamepad1 = GAMEPAD_1;
};

#endif // THREADGAMEPAD1_H
