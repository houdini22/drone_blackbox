#ifndef THREADGAMEPADUPDATE_H
#define THREADGAMEPADUPDATE_H

#include "include.h"

class Drone;

class ThreadGamepadUpdate : public QThread
{
    Q_OBJECT
public:
    explicit ThreadGamepadUpdate(SteeringRegistry * registry);
    void run();
private:
    QString name;
    Drone * drone;
    SteeringRegistry * registry;
    SteeringData * steeringData;
    GAMEPAD_DEVICE gamepad = GAMEPAD_0;
public slots:
    void slotSteeringDataChanged(SteeringData *);
signals:
    void signalButtonsChanged(ButtonsPressed buttons);
};

#endif // THREADGAMEPADUPDATE_H
