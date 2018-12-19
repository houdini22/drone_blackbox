#include "QThread"
#include "include.h"

ThreadArduinoConnect::ThreadArduinoConnect(Drone * drone): QThread()
{
    this->drone = drone;
}

void ThreadArduinoConnect::run() {
    while (1) {
        if (this->drone->isArduinoDetected() && !this->drone->isArduinoConnected()) {

            SerialPort * arduino = new SerialPort(this->drone->getArduinoDeviceStr().toStdString());
            arduino->Open(SerialPort::BAUD_115200, SerialPort::CHAR_SIZE_8,
                          SerialPort::PARITY_NONE, SerialPort::STOP_BITS_1,
                          SerialPort::FLOW_CONTROL_NONE);

            while (!arduino->IsOpen()) {}

            QThread::msleep(10000);

            while (true) {
                arduino->Write("h");

                SerialPort::DataBuffer buffer;
                arduino->Read(buffer, 1, 0);

                if (buffer[0] == 'h') {
                    break;
                }
            }

            emit arduinoIsConnectedChanged("true", arduino);
        }
        QThread::msleep(1000);
    }
}
