#ifndef THREADGAMEPAD_H
#define THREADGAMEPAD_H

#include "include.h"

class Drone;

class ThreadGamepad : public QThread
{
    Q_OBJECT
public:
    explicit ThreadGamepad();
    virtual void run();
protected:
    GAMEPAD_DEVICE gamepad = GAMEPAD_0;
private:
    void setGamepadIsConnected(bool value);
signals:
    void signalGamepadIsConnected(bool value);
};

#endif // THREADGAMEPAD_H
