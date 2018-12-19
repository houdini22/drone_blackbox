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

    QString leftX = "";
    QString leftY = "";
    QString rightX = "";
    QString rightY = "";

    void send(QString buffer);

    QString createAxisBuffer(QString leftX, QString leftY, QString rightX, QString rightY);
    QString createAxisBuffer(double leftX, double leftY, double rightX, double rightY);

    QString axisValueFromDouble(double value);
public slots:
    void setRadioSending(QString value);
    void setMotorsArmed(QString value);
    void setThrottleMode(QString value);
    void setRadioValues(QString leftX, QString leftY, QString rightX, QString rightY);
    void setRadioValues(double leftX, double leftY, double rightX, double rightY);
signals:
    void radioSendingChanged(QString value);
    void motorsArmedChanged(QString status);
    void radioValuesChanged(QString leftX, QString leftY, QString rightX, QString rightY);
    void throttleModeChanged(QString value);
    void recordingModeChanged(QString value);
    void playingModeChanged(QString value);
    void recordItemDown();
    void recordItemUp();
};

#endif // THREADARDUINOSEND_H
