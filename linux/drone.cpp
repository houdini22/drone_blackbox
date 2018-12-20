#include "include.h"
#include "mainwindow.h"

using namespace cv;

Drone::Drone(MainWindow * window)
{
    this->window = window;

    this->database = new Database();
    connect(this->database, SIGNAL(recordingStart(QString)), this, SLOT(setCanStartRecording(QString)));

    this->threadGamepad = new ThreadGamepad(this);
    connect(this->threadGamepad, SIGNAL(gamePadIsConnectedChanged(bool)), this, SLOT(setGamePadIsConnected(bool)));

    this->threadArduinoDetect = new ThreadArduinoDetect(this);
    connect(this->threadArduinoDetect, SIGNAL(arduinoModeChanged(int)), this, SLOT(setArduinoMode(int)));
    connect(this->threadArduinoDetect, SIGNAL(arduinoDeviceStringChanged(QString)), this, SLOT(setArduinoDeviceString(QString)));

    this->threadArduinoConnect = new ThreadArduinoConnect(this);
    connect(this->threadArduinoConnect, SIGNAL(arduinoIsConnectedChanged(QString, SerialPort *)), this, SLOT(setArduinoIsConnected(QString, SerialPort *)));

    this->threadArduinoPing = new ThreadArduinoPing(this);
    connect(this->threadArduinoPing, SIGNAL(arduinoReset()), this, SLOT(arduinoReset()));

    this->threadArduinoSend = new ThreadArduinoSend(this);
    connect(this->threadArduinoSend, SIGNAL(radioSendingChanged(QString)), this, SLOT(setRadioSending(QString)));
    connect(this->threadArduinoSend, SIGNAL(motorsArmedChanged(QString)), this, SLOT(setMotorsArmed(QString)));
    connect(this->threadArduinoSend, SIGNAL(throttleModeChanged(QString)), this, SLOT(setThrottleMode(QString)));
    connect(this->threadArduinoSend, SIGNAL(radioValuesChanged(int,int,int,int)), this, SLOT(setRadioValues(int,int,int,int)));
    connect(this->threadArduinoSend, SIGNAL(recordingModeChanged(QString)), this, SLOT(setRecordingMode(QString)));
    connect(this->threadArduinoSend, SIGNAL(playingModeChanged(QString)), this, SLOT(setPlayingMode(QString)));

    this->threadGamepadUpdate = new ThreadGamepadUpdate(this);
    connect(this->threadGamepadUpdate, SIGNAL(buttonsChanged(ButtonsPressed)), this, SLOT(setButtons(ButtonsPressed)));

    this->threadCamera = new ThreadCamera(this);
    connect(this->threadCamera, SIGNAL(cameraFrameChanged(MyMat)), this, SLOT(setCameraFrame(MyMat)));
}

void Drone::start() {
    this->threadGamepad->start();
    this->threadArduinoDetect->start();
    this->threadArduinoConnect->start();
    this->threadArduinoPing->start();
    this->threadArduinoSend->start();
    this->threadGamepadUpdate->start();
    this->threadCamera->start();

    this->setRecordFiles(this->database->getAll());
}

bool Drone::isArduinoConnected() {
    return this->arduinoIsConnected.compare("true") == 0;
}

bool Drone::isArduinoDetected() {
    return this->arduinoMode == MODE_ARDUINO_DETECTED;
}

bool Drone::isGamePadConnected() {
    return this->gamePadIsConnected;
}

SerialPort * Drone::getArduino() {
    return this->arduino;
}

void Drone::setArduino(SerialPort * arduino) {
    this->arduino = arduino;
}

QString Drone::getArduinoDeviceStr() {
    return this->arduinoDeviceStr;
}

void Drone::setGamePadIsConnected(bool value) {
    if (this->gamePadIsConnected != value) {
        this->gamePadIsConnected = value;
        emit gamePadIsConnectedChanged(value);
    }
}

void Drone::setArduinoMode(int value) {
    if (this->arduinoMode != value) {
        this->arduinoMode = value;
        if (value == MODE_ARDUINO_DETECTED) {
            emit arduinoStatusChanged("connecting...");
        }
    }
}

void Drone::setArduinoIsConnected(QString value, SerialPort * arduino) {
    if (this->arduino != NULL) {
        this->arduino->Close();
        delete this->arduino;
        this->arduino = NULL;
    }

    this->arduino = arduino;

    if (this->arduinoIsConnected.compare(value) != 0) {
        this->arduinoIsConnected = value;
        if (value.compare("true") == 0) {
            emit arduinoStatusChanged("connected");
        } else {
            emit arduinoStatusChanged("connect");
        }
    }
}

void Drone::setArduinoDeviceString(QString value) {
    if (this->arduinoDeviceStr.compare(value) != 0) {
        this->arduinoDeviceStr = value;
    }
}

void Drone::setButtons(ButtonsPressed buttons) {
    this->buttons = buttons;
}

void Drone::arduinoReset() {
    this->setArduinoDeviceString("");
    this->setArduinoMode(MODE_ARDUINO_DISCONNECTED);
    this->setArduinoIsConnected("false", NULL);
}

void Drone::setRadioValues(int leftX, int leftY, int rightX, int rightY) {
    emit radioValuesChanged(leftX, leftY, rightX, rightY);
}

void Drone::setMotorsArmed(QString value) {
    if (this->modes.motorsArmed.compare(value) != 0) {
        this->modes.motorsArmed = value;
        emit modeChanged(this->modes);
    }
}

void Drone::setRadioSending(QString value) {
    if (this->modes.radioSending.compare(value) != 0) {
        this->modes.radioSending = value;
        emit modeChanged(this->modes);
    }
}

void Drone::setThrottleMode(QString value) {
    if (this->modes.throttleModeActive.compare(value) != 0) {
        this->modes.throttleModeActive = value;
        emit modeChanged(this->modes);
    }
}

void Drone::setRecordingMode(QString value) {
    if (this->modes.recordingActive.compare(value) != 0) {
        this->modes.recordingActive = value;

        if (value.compare("false") == 0) {
            this->canStartRecording = "false";
            this->getDatabase()->closeRecord();
        } else if (value.compare("true") == 0) {
            this->getDatabase()->create();
        }

        emit modeChanged(this->modes);
    }
}

void Drone::setPlayingMode(QString value) {
    if (this->modes.playingActive.compare(value) != 0) {
        this->modes.playingActive = value;

        emit modeChanged(this->modes);
    }
}

void Drone::setRecordFiles(RecordsList list) {
    emit recordFilesChanged(list);
}

ButtonsPressed Drone::getButtons() {
    return this->buttons;
}

Database * Drone::getDatabase() {
    return this->database;
}

void Drone::setCanStartRecording(QString active) {
    this->canStartRecording = "true";

    emit startRecording(active);
}

bool Drone::getCanStartRecording() {
    return this->canStartRecording.compare("true") == 0;
}

void Drone::setCameraFrame(MyMat frame) {
    emit cameraFrameChanged(frame);
}
