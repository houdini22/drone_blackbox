#ifndef THREADARDUINOSEND_H
#define THREADARDUINOSEND_H

#include "include.h"

class Drone;

class ThreadArduinoSend : public QThread
{
    Q_OBJECT
public:
    explicit ThreadArduinoSend(Drone * drone);
    void run();
private:
    QString name;
    Drone * drone;

    bool radioSending = false;
    bool motorsArmed = false;
    bool throttleModeActive = false;

    int leftX = 1500;
    int leftY = 1100;
    int rightX = 1100;
    int rightY = 1100;

    void send(QString buffer);

    QString createAxisBuffer(double leftX, double leftY, double rightX, double rightY);
    QString createAxisBuffer(int leftX, int leftY, int rightX, int rightY);

    int axisValueFromDouble(double value);

    void setRadioSending(bool value);
    void setMotorsArmed(bool value);
    void setThrottleMode(bool value);
    void setRadioValues(double leftX, double leftY, double rightX, double rightY);
signals:
    void radioSendingChanged(bool value);
    void motorsArmedChanged(bool status);
    void radioValuesChanged(int leftX, int leftY, int rightX, int rightY);
    void throttleModeChanged(bool value);
    void recordingModeChanged(bool value);
    void playingModeChanged(bool value);
    void recordItemDown();
    void recordItemUp();
};

#endif // THREADARDUINOSEND_H
