#include "QThread"
#include "include.h"

ThreadArduinoConnect::ThreadArduinoConnect(SendingRegistry * registry): QThread() {
    this->registry = registry;

    connect(this->registry, SIGNAL(signalSendingDataChanged(SendingData *)), this, SLOT(slotSendingDataChanged(SendingData *)));
}

void ThreadArduinoConnect::run() {
    while (1) {
        if (this->sendingData->mode == MODE_ARDUINO_DETECTED) {
            SerialPort * arduino = new SerialPort(this->sendingData->deviceString.toStdString());

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

            emit signalArduinoConnected(true, arduino);
        }

        QThread::msleep(1000);
    }
}

void ThreadArduinoConnect::slotSendingDataChanged(SendingData * sendingData) {
    if (sendingData->name.compare("arduino0") == 0) {
        this->sendingData = sendingData;
    }
}
