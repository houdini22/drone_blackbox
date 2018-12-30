#ifndef THREADGAMEPADUPDATE_H
#define THREADGAMEPADUPDATE_H

#include "include.h"

class Drone;

#define MIN_SEND_VALUE 1000
#define MAX_SEND_VALUE 2000
#define MIN_SEND_VALUE_FORCE 1000
#define MAX_SEND_VALUE_FORCE 2000
#define SEND_SCALE_RATIO 0.4

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
public slots:
    void slotSteeringDataChanged(SteeringData *);
signals:
    void signalButtonsChanged(ButtonsPressed buttons);
};

#endif // THREADGAMEPADUPDATE_H
