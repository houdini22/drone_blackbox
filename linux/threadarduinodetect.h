#ifndef THREADARDUINODETECT_H
#define THREADARDUINODETECT_H

#include "include.h"

class Drone;

QString detectDevice();

class ThreadArduinoDetect : public QThread
{
    Q_OBJECT
public:
    explicit ThreadArduinoDetect(Drone * drone);
    void run();
private:
    QString name;
    Drone * drone;
    QString arduinoDetected = "false";
    QString arduinoDeviceString = "";
public slots:
    void setIsArduinoDetected(QString value);
    void setArduinoDeviceString(QString value);
signals:
    void isArduinoDetectedChanged(QString value);
    void arduinoDeviceStringChanged(QString value);
};

#endif // THREADARDUINODETECT_H
