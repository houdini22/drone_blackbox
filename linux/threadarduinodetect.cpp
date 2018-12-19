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

ThreadArduinoDetect::ThreadArduinoDetect(Drone * drone): QThread()
{
    this->drone = drone;
}

void ThreadArduinoDetect::run() {
    while (1) {
        if (!this->drone->isArduinoDetected()) {
            QString arduinoDeviceStr = detectDevice();

            if (arduinoDeviceStr.length() > 0) {
                this->setArduinoDeviceString(arduinoDeviceStr);
                this->setIsArduinoDetected("true");
            } else {
                this->setArduinoDeviceString("");
                this->setIsArduinoDetected("false");
            }
        }
        QThread::msleep(1000);
    }
}

void ThreadArduinoDetect::setArduinoDeviceString(QString value) {
    if (this->arduinoDeviceString.compare(value) != 0) {
        this->arduinoDeviceString = value;
        emit arduinoDeviceStringChanged(value);
    }
}

void ThreadArduinoDetect::setIsArduinoDetected(QString value) {
    if (this->arduinoDetected.compare(value) != 0) {
        this->arduinoDetected = value;
        emit isArduinoDetectedChanged(value);
    }
}
