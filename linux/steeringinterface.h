#ifndef STEERINGINTERFACE_H
#define STEERINGINTERFACE_H

#include "include.h"

class Drone;
class SteeringRegistry;
struct ButtonsPressed;

struct SteeringData {
    QString name = "";
    bool isConnected = false;
    bool isEnabled = false;
    ButtonsPressed buttonsPressed;
};

class SteeringInterface {
public:
    SteeringInterface(Drone * drone, SteeringRegistry * registry);
    virtual void start();
    SteeringData * getData();
    void setData(SteeringData * data);
protected:
    SteeringRegistry * registry;
    Drone * drone;
    SteeringData * data;
signals:
    void signalSteeringDataChanged(SteeringData *);
};

#endif // STEERINGINTERFACE_H
