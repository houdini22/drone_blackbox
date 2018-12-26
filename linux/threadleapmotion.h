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
private slots:
    void handUpdated(QtLeapMotion::QtLeapHand *hand);
};

#endif // THREADLEAPMOTION_H
