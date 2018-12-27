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
    bool isArduinoDetected();
    bool isArduinoConnected();
    bool isGamePadConnected();
    QString getArduinoDeviceStr();
    void setArduino(SerialPort * arduino);
    SerialPort * getArduino();
    ButtonsPressed getButtons();
    Database * getDatabase();
    bool getCanStartRecording();
    void setHandPosition(HandPosition);
    HandPosition getHandPosition();
private slots:
    void setGamePadIsConnected(bool value);
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
signals:
    void gamePadIsConnectedChanged(bool value);
    void gamePadValuesChanged(ButtonsPressed buttons);
    void arduinoStatusChanged(QString value);
    void modeChanged(Modes modes);
    void radioValuesChanged(int leftX, int leftY, int rightX, int rightY);
    void recordFilesChanged(RecordsList list);
    void startRecording(QString name);
    void cameraFrameChanged(MyMat);
    void handPositionChanged(HandPosition);
private:
    MainWindow * window;
    ThreadGamepad * threadGamepad;
    ThreadArduinoDetect * threadArduinoDetect;
    ThreadArduinoConnect * threadArduinoConnect;
    ThreadArduinoPing * threadArduinoPing;
    ThreadArduinoSend * threadArduinoSend;
    ThreadGamepadUpdate * threadGamepadUpdate;
    ThreadCamera * threadCamera;
    bool gamePadIsConnected = false;
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
};

#endif // DRONE_H
