#ifndef THREADARDUINODETECT_H
#define THREADARDUINODETECT_H

#include "include.h"

class Drone;

QString detectDevice();

class ThreadArduinoDetect : public QThread
{
    Q_OBJECT
public:
    explicit ThreadArduinoDetect(SendingRegistry * registry);
    void run();
private:
    QString name;
    Drone * drone;
    SendingData * sendingData;
    SendingRegistry * registry;
public slots:
    void slotSendingDataChanged(SendingData *);
signals:
    void signalArduinoStatusChanged(int value, QString deviceString);
};

#endif // THREADARDUINODETECT_H
