#include "include.h"

SendingArduino::SendingArduino(Drone * drone, SendingRegistry * registry) : SendingInterface(drone, registry) {
    this->data = new SendingData;
    this->data->name = "arduino0";

    this->threadArduinoDetect = new ThreadArduinoDetect(this->registry);
    connect(this, SIGNAL(signalSendingDataChanged(SendingData*)), this->registry, SLOT(slotSendingDataChanged(SendingData*)));
    connect(this->threadArduinoDetect, SIGNAL(signalArduinoStatusChanged(int, QString)), this, SLOT(slotArduinoStatusChanged(int, QString)));
}

void SendingArduino::start() {
    this->threadArduinoDetect->start();
}

void SendingArduino::slotArduinoStatusChanged(int mode, QString deviceString) {
    this->data->mode = mode;
    this->data->deviceString = deviceString;

    emit signalSendingDataChanged(this->data);
}
