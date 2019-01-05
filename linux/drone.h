#ifndef DRONE_H
#define DRONE_H

#include "include.h"
#include "mainwindow.h"

using namespace cv;

class MainWindow;
class ThreadCamera;
class SteeringGamepad0;
class SteeringGamepad1;

class Drone : public QObject
{
    Q_OBJECT
public:
    Drone(MainWindow * window);
    void start();
    void setHandPosition(HandPosition);
    HandPosition getHandPosition();
    Modes * getModes();
    void setModes(Modes * modes);
    SteeringGamepad0 * getGamepad0();
    SteeringGamepad1 * getGamepad1();
private slots:
    void setCameraFrame(MyMat);
    void slotSteeringDataChanged(SteeringData *);
    void slotSendingsDataChanged(QHash<QString,SendingData*> *);
signals:
    void signalModesChanged(Modes * modes);
    void cameraFrameChanged(MyMat);
    void handPositionChanged(HandPosition);
    void signalSteeringDataChanged(SteeringData *);
    void signalSendingsDataChanged(QHash<QString,SendingData*>*);
private:
    MainWindow * window;
    ThreadCamera * threadCamera;
    Modes * modes;
    HandPosition handPosition;
    SteeringRegistry * steeringRegistry;
    SendingRegistry * sendingRegistry;
    SteeringGamepad0 * gamepad0;
    SteeringGamepad1 * gamepad1;
    //SteeringLeapMotion * leapMotion0;
    void createStorage();
};

#endif // DRONE_H
