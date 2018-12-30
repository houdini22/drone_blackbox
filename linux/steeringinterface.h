#ifndef STEERINGINTERFACE_H
#define STEERINGINTERFACE_H

#include "include.h"

class Drone;
class SteeringRegistry;
struct ButtonsPressed;

struct SteeringData {
    QString name = "";
    bool isConnected = false;
    ButtonsPressed * buttonsPressed;
};

class SteeringInterface {
public:
    SteeringInterface(Drone * drone, SteeringRegistry * registry);
    virtual void start();
    SteeringData * getData();
protected:
    SteeringRegistry * registry;
    Drone * drone;
    SteeringData * data;
};

#endif // STEERINGINTERFACE_H
