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

            try {
                arduino->Open(SerialPort::BAUD_115200, SerialPort::CHAR_SIZE_8,
                              SerialPort::PARITY_NONE, SerialPort::STOP_BITS_1,
                              SerialPort::FLOW_CONTROL_NONE);
            } catch (SerialPort::OpenFailed ex) {
                continue;
            }

            while (!arduino->IsOpen()) {}

            QThread::msleep(2000);

            qDebug() << "opened";

            while (true) {
                arduino->Write("h");
                qDebug() << "write";

                SerialPort::DataBuffer buffer;
                try {
                    arduino->Read(buffer, 1, 500);
                } catch (SerialPort::ReadTimeout ex) {
                    continue;
                }

                if (buffer[0] == 'h') {
                    emit signalArduinoConnected(true, arduino);

                    break;
                }

                QThread::msleep(1000);
            }
        }

        QThread::msleep(1000);
    }
}

void ThreadArduinoConnect::slotSendingDataChanged(SendingData * sendingData) {
    if (sendingData->name.compare("arduino0") == 0) {
        this->sendingData = sendingData;
    }
}
