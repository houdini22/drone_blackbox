#ifndef THREADGAMEPADUPDATE_H
#define THREADGAMEPADUPDATE_H

#include "include.h"

class Drone;

#define MIN_SEND_VALUE 1000
#define MAX_SEND_VALUE 2000
#define MIN_SEND_VALUE_FORCE 1000
#define MAX_SEND_VALUE_FORCE 2000
#define SEND_SCALE_RATIO 0.1

class ThreadGamepadUpdate : public QThread
{
    Q_OBJECT
public:
    explicit ThreadGamepadUpdate(Drone * drone);
    void run();
private:
    QString name;
    Drone * drone;
public slots:
    void setButtons(ButtonsPressed buttons);
signals:
    void buttonsChanged(ButtonsPressed buttons);
};

#endif // THREADGAMEPADUPDATE_H
