#ifndef DRONEMANAGER_H
#define DRONEMANAGER_H

#include "include.h"
#include "mainwindow.h"

class MainWindow;
class ThreadGamepad;
class ThreadArduinoDetect;
class ThreadArduinoConnect;
class ThreadArduinoPing;
class ThreadArduinoSend;
class ThreadGamepadUpdate;

class DroneManager
{
public:
    Drone(MainWindow * window);

    void start();

    Observer * getObserver();

    bool isArduinoDetected();
    bool isArduinoConnected();
    bool isGamePadConnected();

    QString getArduinoDeviceStr();

    QString getLeftX();
    QString getLeftY();
    QString getRightX();
    QString getRightY();
    QString getStartPressed();
    QString getRadioSending();
    QString getArmTriggered();
    QString getForceLeftX();
    QString getForceLeftY();
    QString getForceRightX();
    QString getForceRightY();

    void setArduino(SerialPort * arduino);

    void setForceLeftX(QString value);
    void setForceLeftY(QString value);
    void setForceRightX(QString value);
    void setForceRightY(QString value);

    SerialPort * getArduino();

private:
    MainWindow * window;

    Observer * observer;

    ThreadGamepad * threadGamepad;
    ThreadArduinoDetect * threadArduinoDetect;
    ThreadArduinoConnect * threadArduinoConnect;
    ThreadArduinoPing * threadArduinoPing;
    ThreadArduinoSend * threadArduinoSend;
    ThreadGamepadUpdate * threadGamepadUpdate;

    bool gamepadConnected = false;
    bool arduinoDetected = false;
    bool arduinoConnected = false;

    QString arduinoDeviceStr = "";

    QString leftX = "";
    QString leftY = "";
    QString rightX = "";
    QString rightY = "";
    QString forceLeftX = "";
    QString forceLeftY = "";
    QString forceRightX = "";
    QString forceRightY = "";
    QString startPressed = "";
    QString radioSending = "off";
    QString armTriggered = "off";

    void registerEvents();

    SerialPort *arduino = NULL;
};

#endif // DRONEMANAGER_H
