#ifndef THREADARDUINOPING_H
#define THREADARDUINOPING_H

#include "include.h"

class Drone;

class ThreadArduinoPing : public QThread
{
    Q_OBJECT
public:
    explicit ThreadArduinoPing(Drone * drone);
    void run();
private:
    QString name;
    Drone * drone;
signals:
    void arduinoReset();
};

#endif // THREADARDUINOPING_H
