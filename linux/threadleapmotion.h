#ifndef THREADLEAPMOTION_H
#define THREADLEAPMOTION_H

#include "include.h"

class Drone;

class ThreadLeapMotion : public QThread
{
    Q_OBJECT
public:
    explicit ThreadLeapMotion(Drone * drone);
    void run();
private:
    QString name;
    Drone * drone;
};

#endif // THREADLEAPMOTION_H
