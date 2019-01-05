#ifndef THREADGAMEPAD1UPDATE_H
#define THREADGAMEPAD1UPDATE_H

#include "include.h"

class Drone;

class ThreadGamepad1Update : public ThreadGamepadUpdate {
public:
    ThreadGamepad1Update(SteeringRegistry * registry);
protected:
    int gamepad = 1;
};

#endif // THREADGAMEPA1DUPDATE_H
