#include "include.h"

SteeringGamepad::SteeringGamepad(Drone * drone, SteeringRegistry * registry) : SteeringInterface(drone, registry) {
    this->data = new SteeringData;
    this->data->name = "gamepad0";

    this->threadConnect = new ThreadGamepad();
    this->threadGamepadUpdate = new ThreadGamepadUpdate(this->registry);

    connect(this, SIGNAL(signalSteeringDataChanged(SteeringData*)), this->registry, SLOT(slotSteeringDataChanged(SteeringData*)));
    connect(this->threadConnect, SIGNAL(signalGamepadIsConnected(bool)), this, SLOT(slotGamepadIsConnected(bool)));
    connect(this->threadGamepadUpdate, SIGNAL(signalButtonsChanged(ButtonsPressed)), this, SLOT(slotButtonsChanged(ButtonsPressed)));
}

void SteeringGamepad::start() {
    this->threadConnect->start();
    this->threadGamepadUpdate->start();
}

void SteeringGamepad::slotGamepadIsConnected(bool value) {
    if (this->data->isConnected != value) {
        this->data->isConnected = value;
        emit signalSteeringDataChanged(this->data);
    }
}

void SteeringGamepad::slotButtonsChanged(ButtonsPressed buttons) {
    this->data->leftX = buttons.leftX;
    this->data->leftY = buttons.leftY;
    this->data->rightX = buttons.rightX;
    this->data->rightY = buttons.rightY;

    emit signalSteeringDataChanged(this->data);
}
