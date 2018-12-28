#ifndef STEERINGINTERFACE_H
#define STEERINGINTERFACE_H

#include "include.h"

class Drone;
class SteeringRegistry;

struct SteeringData {
    QString name = "";
    bool isConnected = false;
    int leftX = 0;
    int leftY = 0;
    int rightX = 0;
    int rightY = 0;
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
