#ifndef THREADGAMEPAD1_H
#define THREADGAMEPAD1_H

#include "include.h"

class Drone;

class ThreadGamepad1 : public QThread, public ThreadGamepad {
    Q_OBJECT
protected:
    int gamepad1 = 1;
};

#endif // THREADGAMEPAD1_H
