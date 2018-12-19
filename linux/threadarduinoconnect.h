#ifndef THREADARDUINOCONNECT_H
#define THREADARDUINOCONNECT_H

#include "include.h"

class Drone;

class ThreadArduinoConnect : public QThread
{
    Q_OBJECT
public:
    explicit ThreadArduinoConnect(Drone * drone);
    void run();
private:
    QString name;
    Drone * drone;
    QString arduinoIsConnected = "false";
signals:
    void arduinoIsConnectedChanged(QString value, SerialPort * arduino);
};

#endif // THREADARDUINOCONNECT_H
