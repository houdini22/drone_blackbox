#ifndef THREADGAMEPAD_H
#define THREADGAMEPAD_H

#include "include.h"

class Drone;

class ThreadGamepad : public QThread
{
    Q_OBJECT
public:
    explicit ThreadGamepad(Drone * drone);
    void run();
private:
    QString name;
    Drone * drone;
    bool gamepadIsConnected = false;
public slots:
    void setGamePadIsConnected(bool value);
signals:
    void gamePadIsConnectedChanged(bool value);
};

#endif // THREADGAMEPAD_H
