#ifndef THREADGAMEPAD0UPDATE_H
#define THREADGAMEPAD0UPDATE_H

#include "include.h"

class Drone;

class ThreadGamepad0Update : public ThreadGamepadUpdate {
public:
    ThreadGamepad0Update(SteeringRegistry * registry);
protected:
    int gamepad = 0;
};

#endif // THREADGAMEPA0DUPDATE_H
