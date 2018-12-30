#include "QThread"
#include "include.h"

QString detectDevice()  {
    int i;
    QString deviceStr = "";

    for (i = 0; i < 16; i++) {
        int fd;
        QString tmpDeviceStr = "/dev/ttyACM";

        tmpDeviceStr.append(QString::number(i));
        fd = open(tmpDeviceStr.toStdString().c_str(), O_RDWR | O_NOCTTY);
        if (fd != -1) {
            close(fd);
            deviceStr = tmpDeviceStr;
            break;
        }
    }

    return deviceStr;
}

ThreadArduinoDetect::ThreadArduinoDetect(SendingRegistry * registry): QThread() {
    this->registry = registry;

    connect(this->registry, SIGNAL(signalSendingDataChanged(SendingData *)), this, SLOT(slotSendingDataChanged(SendingData *)));
}

void ThreadArduinoDetect::run() {
    while (1) {
        if (this->sendingData->mode == MODE_ARDUINO_DISCONNECTED) {
            QString arduinoDeviceStr = detectDevice();

            if (arduinoDeviceStr.length() > 0) {
                emit signalArduinoStatusChanged(MODE_ARDUINO_DETECTED, arduinoDeviceStr);
            } else {
                emit signalArduinoStatusChanged(MODE_ARDUINO_DISCONNECTED, "");
            }
        }

        QThread::msleep(1000);
    }
}

void ThreadArduinoDetect::slotSendingDataChanged(SendingData * sendingData) {
    if (sendingData->name.compare("arduino0") == 0) {
        this->sendingData = sendingData;
    }
}
