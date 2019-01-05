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

#endif // THREADGAMEPAD_H
