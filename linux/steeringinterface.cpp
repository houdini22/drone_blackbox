#include "include.h"

SteeringInterface::SteeringInterface(Drone * drone, SteeringRegistry * registry) {
    this->drone = drone;
    this->registry = registry;
}

void SteeringInterface::start() {}

SteeringData * SteeringInterface::getData() {
    return this->data;
}

void SteeringInterface::setData(SteeringData * data) {
    emit signalSteeringDataChanged(this->data);
}
