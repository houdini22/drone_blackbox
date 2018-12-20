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

    QString radioSending = "false";
    QString motorsArmed = "false";
    QString throttleModeActive = "false";

    int leftX = 1500;
    int leftY = 1100;
    int rightX = 1100;
    int rightY = 1100;

    void send(QString buffer);

    QString createAxisBuffer(double leftX, double leftY, double rightX, double rightY);
    QString createAxisBuffer(int leftX, int leftY, int rightX, int rightY);

    int axisValueFromDouble(double value);
public slots:
    void setRadioSending(QString value);
    void setMotorsArmed(QString value);
    void setThrottleMode(QString value);
    void setRadioValues(double leftX, double leftY, double rightX, double rightY);
signals:
    void radioSendingChanged(QString value);
    void motorsArmedChanged(QString status);
    void radioValuesChanged(int leftX, int leftY, int rightX, int rightY);
    void throttleModeChanged(QString value);
    void recordingModeChanged(QString value);
    void playingModeChanged(QString value);
    void recordItemDown();
    void recordItemUp();
};

#endif // THREADARDUINOSEND_H
