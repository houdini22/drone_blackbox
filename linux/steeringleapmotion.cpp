#include "include.h"

/*
SteeringLeapMotion::SteeringLeapMotion(Drone * drone, SteeringRegistry * registry) : SteeringInterface(drone, registry) {
    this->data = new SteeringData;
    this->data->name = "leapmotion0";

    connect(this, SIGNAL(signalSteeringDataChanged(SteeringData*)), this->registry, SLOT(slotSteeringDataChanged(SteeringData*)));
}

void SteeringLeapMotion::start() {
    this->leapEventListener.setSteeringLeapMotion(this);
    this->leapController.addListener(this->leapEventListener);
}

void SteeringLeapMotion::setData(SteeringData *data) {
    this->data = data;
    emit signalSteeringDataChanged(this->data);
}
*/
