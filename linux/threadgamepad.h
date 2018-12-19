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
    QString gamepadIsConnected = "false";
public slots:
    void setGamePadIsConnected(QString value);
signals:
    void gamePadIsConnectedChanged(QString value);
};

#endif // THREADGAMEPAD_H
