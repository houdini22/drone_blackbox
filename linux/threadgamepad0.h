#ifndef THREADGAMEPAD0_H
#define THREADGAMEPAD0_H

#include "include.h"

class ThreadGamepad0 : public ThreadGamepad {
public:
    ThreadGamepad0();
protected:
    GAMEPAD_DEVICE gamepad = GAMEPAD_0;
};

#endif // THREADGAMEPAD1_H
