#include "include.h"

SteeringGamepad::SteeringGamepad(Drone * drone, SteeringRegistry * registry) : SteeringInterface(drone, registry) {
    this->data = new SteeringData;
    this->data->name = "gamepad0";
}

void SteeringGamepad::start() {
    this->thread = new ThreadGamepad();
    this->thread->start();

    connect(this, SIGNAL(signalSteeringDataChanged(SteeringData*)), this->registry, SLOT(slotSteeringDataChanged(SteeringData*)));
    connect(this->thread, SIGNAL(signalGamepadIsConnected(bool)), this, SLOT(slotGamepadIsConnected(bool)));
}


void SteeringGamepad::slotGamepadIsConnected(bool value) {
    if (this->data->isConnected != value) {
        this->data->isConnected = value;
        emit signalSteeringDataChanged(this->data);
    }
}

