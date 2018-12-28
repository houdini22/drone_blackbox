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
class Database;

class Drone : public QObject
{
    Q_OBJECT
public:
    Drone(MainWindow * window);
    void start();
    bool isArduinoConnected();
    QString getArduinoDeviceStr();
    void setArduino(SerialPort * arduino);
    SerialPort * getArduino();
    ButtonsPressed getButtons();
    Database * getDatabase();
    bool getCanStartRecording();
    void setHandPosition(HandPosition);
    HandPosition getHandPosition();
private slots:
    void slotGamepadIsConnected(bool value);
    void setButtons(ButtonsPressed buttons);
    void setArduinoMode(int value);
    void setArduinoIsConnected(bool value, SerialPort * arduino);
    void setArduinoDeviceString(QString value);
    void setRadioSending(bool value);
    void arduinoReset();
    void setRadioValues(int, int, int, int);
    void setMotorsArmed(bool value);
    void setThrottleMode(bool value);
    void setRecordingMode(bool value);
    void setRecordFiles(RecordsList list);
    void setCanStartRecording(QString active);
    void setPlayingMode(bool isActive);
    void setCameraFrame(MyMat);
    void slotSteeringsDataChanged(QHash<QString,SteeringData*> *);
    void slotSendingsDataChanged(QHash<QString,SendingData*> *);
signals:
    void signalGamepadIsConnected(bool value);
    void gamePadValuesChanged(ButtonsPressed buttons);
    void arduinoStatusChanged(QString value);
    void modeChanged(Modes modes);
    void radioValuesChanged(int leftX, int leftY, int rightX, int rightY);
    void recordFilesChanged(RecordsList list);
    void startRecording(QString name);
    void cameraFrameChanged(MyMat);
    void handPositionChanged(HandPosition);
    void signalSteeringsDataChanged(QHash<QString,SteeringData*>*);
    void signalSendingsDataChanged(QHash<QString,SendingData*>*);
private:
    MainWindow * window;
    ThreadCamera * threadCamera;
    bool arduinoMode = MODE_ARDUINO_DISCONNECTED;
    bool arduinoIsConnected = false;
    QString arduinoDeviceStr = "";
    SerialPort *arduino = NULL;
    ButtonsPressed buttons;
    Modes modes;
    Database * database = NULL;
    bool canStartRecording = false;
    Leap::Controller leapController;
    LeapEventListener leapEventListener;
    HandPosition handPosition;
    SteeringRegistry * steeringRegistry;
    SendingRegistry * sendingRegistry;
};

#endif // DRONE_H
