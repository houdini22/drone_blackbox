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
    int arduinoMode = MODE_ARDUINO_DISCONNECTED;
    QString arduinoDeviceString = "";
public slots:
    void setArduinoMode(int value);
    void setArduinoDeviceString(QString value);
signals:
    void arduinoDeviceStringChanged(QString value);
    void arduinoModeChanged(int value);
};

#endif // THREADARDUINODETECT_H
