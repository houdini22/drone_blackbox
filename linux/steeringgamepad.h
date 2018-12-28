#ifndef STEERINGGAMEPAD_H
#define STEERINGGAMEPAD_H

#include "include.h"

class ThreadGamepad;

class SteeringGamepad : public QObject, public SteeringInterface {
    Q_OBJECT
public:
    SteeringGamepad(Drone * drone, SteeringRegistry * registry);
    void start() override;
private:
    ThreadGamepad * thread;
public slots:
    void slotGamepadIsConnected(bool);
signals:
    void signalSteeringDataChanged(SteeringData *);
};

#endif // STEERINGGAMEPAD_H
