#include "include.h"

SendingArduino::SendingArduino(Drone * drone, SendingRegistry * registry) : SendingInterface(drone, registry) {
    this->data = new SendingData;
    this->data->name = "arduino0";

    connect(this, SIGNAL(signalSendingDataChanged(SendingData*)), this->registry, SLOT(slotSendingDataChanged(SendingData*)));

    this->threadArduinoDetect = new ThreadArduinoDetect(this->registry);
    connect(this->threadArduinoDetect, SIGNAL(signalArduinoStatusChanged(int, QString)), this, SLOT(slotArduinoStatusChanged(int, QString)));

    this->threadArduinoConnect = new ThreadArduinoConnect(this->registry);
    connect(this->threadArduinoConnect, SIGNAL(signalArduinoConnected(bool, SerialPort *)), this, SLOT(slotArduinoConnected(bool, SerialPort *)));

    this->threadArduinoPing = new ThreadArduinoPing(this->registry);
    connect(this->threadArduinoPing, SIGNAL(signalArduinoReset()), this, SLOT(slotArduinoReset()));

    this->threadArduinoSend = new ThreadArduinoSend(this->drone, this->registry);
}

void SendingArduino::start() {
    this->threadArduinoDetect->start();
    this->threadArduinoConnect->start();
    this->threadArduinoPing->start();
    this->threadArduinoSend->start();
}

void SendingArduino::slotArduinoStatusChanged(int mode, QString deviceString) {
    this->data->mode = mode;
    this->data->deviceString = deviceString;

    emit signalSendingDataChanged(this->data);
}

void SendingArduino::slotArduinoConnected(bool isConnected, SerialPort * arduino) {
    if (isConnected) {
        this->data->mode = MODE_ARDUINO_CONNECTED;
        this->data->service = arduino;
    }

    emit signalSendingDataChanged(this->data);
}

void SendingArduino::slotArduinoReset() {
    this->data->mode = MODE_ARDUINO_DISCONNECTED;
    this->data->deviceString = "";
    this->data->service->Close();
    delete this->data->service;
    this->data->service = NULL;

    emit signalSendingDataChanged(this->data);
}
