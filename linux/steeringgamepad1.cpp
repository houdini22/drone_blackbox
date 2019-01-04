#include "include.h"

SteeringGamepad1::SteeringGamepad1(Drone * drone, SteeringRegistry * registry) : SteeringInterface(drone, registry) {
    this->data = new SteeringData;
    this->data->name = "gamepad1";

    this->threadConnect = new ThreadGamepad1();
    this->threadGamepadUpdate = new ThreadGamepad1Update(this->registry);

    connect(this, SIGNAL(signalSteeringDataChanged(SteeringData*)), this->registry, SLOT(slotSteeringDataChanged(SteeringData*)));
    connect(this->threadConnect, SIGNAL(signalGamepadIsConnected(bool)), this, SLOT(slotGamepadIsConnected(bool)));
    connect(this->threadGamepadUpdate, SIGNAL(signalButtonsChanged(ButtonsPressed)), this, SLOT(slotButtonsChanged(ButtonsPressed)));
}

void SteeringGamepad1::start() {
    this->threadConnect->start();
    this->threadGamepadUpdate->start();
}

void SteeringGamepad1::slotGamepadIsConnected(bool value) {
    if (this->data->isConnected != value) {
        this->data->isConnected = value;
        emit signalSteeringDataChanged(this->data);
    }
}

void SteeringGamepad1::slotButtonsChanged(ButtonsPressed buttons) {
    this->data->buttonsPressed = buttons;
    emit signalSteeringDataChanged(this->data);
}
