#ifndef THREADGAMEPAD0_H
#define THREADGAMEPAD0_H

#include "include.h"

class Drone;

class ThreadGamepad0 : public ThreadGamepad, public QThread {
    Q_OBJECT
protected:
    int gamepad = 0;
};

#endif // THREADGAMEPAD1_H
