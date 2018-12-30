#ifndef DRONE_H
#define DRONE_H

#include "include.h"
#include "mainwindow.h"

using namespace cv;

class MainWindow;
class ThreadGamepad;
class ThreadArduinoDetect;
class ThreadArduinoConnect;
class ThreadArduinoPing;
class ThreadArduinoSend;
class ThreadGamepadUpdate;
class ThreadCamera;
class SteeringGamepad;
class Database;

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
    SteeringGamepad * getGamepad();
private slots:
    void setCameraFrame(MyMat);
    void slotSteeringsDataChanged(QHash<QString,SteeringData*> *);
    void slotSendingsDataChanged(QHash<QString,SendingData*> *);
signals:
    void signalModesChanged(Modes * modes);
    void cameraFrameChanged(MyMat);
    void handPositionChanged(HandPosition);
    void signalSteeringsDataChanged(QHash<QString,SteeringData*>*);
    void signalSendingsDataChanged(QHash<QString,SendingData*>*);
private:
    MainWindow * window;
    ThreadCamera * threadCamera;
    Modes * modes;
    Leap::Controller leapController;
    LeapEventListener leapEventListener;
    HandPosition handPosition;
    SteeringRegistry * steeringRegistry;
    SendingRegistry * sendingRegistry;
    SteeringGamepad * gamepad0;
};

#endif // DRONE_H
