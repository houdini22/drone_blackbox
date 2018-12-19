#include "QThread"
#include "include.h"

ThreadArduinoPing::ThreadArduinoPing(Drone * drone): QThread()
{
    this->drone = drone;
}

void ThreadArduinoPing::run() {
    while (1) {
        if (this->drone->isArduinoDetected() && this->drone->isArduinoConnected()) {
            SerialPort * arduino = this->drone->getArduino();
            try {
                arduino->Write("p");
            } catch (std::runtime_error) {
                emit arduinoReset();
            }
        }

        QThread::msleep(25);
    }
}
