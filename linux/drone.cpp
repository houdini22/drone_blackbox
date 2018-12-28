#include "include.h"
#include "mainwindow.h"

using namespace cv;

Drone::Drone(MainWindow * window)
{
    this->window = window;

    this->database = new Database();
    connect(this->database, SIGNAL(recordingStart(QString)), this, SLOT(setCanStartRecording(QString)));

    this->threadArduinoDetect = new ThreadArduinoDetect(this);
    connect(this->threadArduinoDetect, SIGNAL(arduinoModeChanged(int)), this, SLOT(setArduinoMode(int)));
    connect(this->threadArduinoDetect, SIGNAL(arduinoDeviceStringChanged(QString)), this, SLOT(setArduinoDeviceString(QString)));

    this->threadArduinoConnect = new ThreadArduinoConnect(this);
    connect(this->threadArduinoConnect, SIGNAL(arduinoIsConnectedChanged(bool, SerialPort *)), this, SLOT(setArduinoIsConnected(bool, SerialPort *)));

    this->threadArduinoPing = new ThreadArduinoPing(this);
    connect(this->threadArduinoPing, SIGNAL(arduinoReset()), this, SLOT(arduinoReset()));

    this->threadArduinoSend = new ThreadArduinoSend(this);
    connect(this->threadArduinoSend, SIGNAL(radioSendingChanged(bool)), this, SLOT(setRadioSending(bool)));
    connect(this->threadArduinoSend, SIGNAL(motorsArmedChanged(bool)), this, SLOT(setMotorsArmed(bool)));
    connect(this->threadArduinoSend, SIGNAL(throttleModeChanged(bool)), this, SLOT(setThrottleMode(bool)));
    connect(this->threadArduinoSend, SIGNAL(radioValuesChanged(int,int,int,int)), this, SLOT(setRadioValues(int,int,int,int)));
    connect(this->threadArduinoSend, SIGNAL(recordingModeChanged(bool)), this, SLOT(setRecordingMode(bool)));
    connect(this->threadArduinoSend, SIGNAL(playingModeChanged(bool)), this, SLOT(setPlayingMode(bool)));

    this->threadCamera = new ThreadCamera(this);
    connect(this->threadCamera, SIGNAL(cameraFrameChanged(MyMat)), this, SLOT(setCameraFrame(MyMat)));

    this->leapEventListener.setDrone(this);
    this->leapController.addListener(this->leapEventListener);

    this->steeringRegistry = new SteeringRegistry(this);
    this->steeringRegistry->add(new SteeringGamepad(this, this->steeringRegistry));

    connect(this->steeringRegistry, SIGNAL(signalSteeringsDataChanged(QHash<QString,SteeringData*>*)), this, SLOT(slotSteeringsDataChanged(QHash<QString,SteeringData*>*)));

    this->steeringRegistry->start();
}

void Drone::start() {
    this->threadArduinoDetect->start();
    this->threadArduinoConnect->start();
    this->threadArduinoPing->start();
    this->threadArduinoSend->start();
    this->threadCamera->start();

    this->setRecordFiles(this->database->getAll());
}

bool Drone::isArduinoConnected() {
    return this->arduinoIsConnected;
}

bool Drone::isArduinoDetected() {
    return this->arduinoMode == MODE_ARDUINO_DETECTED;
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

void Drone::slotGamepadIsConnected(bool value) {
    emit signalGamepadIsConnected(value);
}

void Drone::setArduinoMode(int value) {
    if (this->arduinoMode != value) {
        this->arduinoMode = value;
        if (value == MODE_ARDUINO_DETECTED) {
            emit arduinoStatusChanged("connecting...");
        }
    }
}

void Drone::setArduinoIsConnected(bool value, SerialPort * arduino) {
    if (this->arduino != NULL) {
        this->arduino->Close();
        delete this->arduino;
        this->arduino = NULL;
    }

    this->arduino = arduino;

    if (this->arduinoIsConnected != value) {
        this->arduinoIsConnected = value;
        if (value) {
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
    this->setArduinoIsConnected(false, NULL);
}

void Drone::setRadioValues(int leftX, int leftY, int rightX, int rightY) {
    emit radioValuesChanged(leftX, leftY, rightX, rightY);
}

void Drone::setMotorsArmed(bool value) {
    if (this->modes.motorsArmed != value) {
        this->modes.motorsArmed = value;
        emit modeChanged(this->modes);
    }
}

void Drone::setRadioSending(bool value) {
    if (this->modes.radioSending != value) {
        this->modes.radioSending = value;
        emit modeChanged(this->modes);
    }
}

void Drone::setThrottleMode(bool value) {
    if (this->modes.throttleModeActive != value) {
        this->modes.throttleModeActive = value;
        emit modeChanged(this->modes);
    }
}

void Drone::setRecordingMode(bool value) {
    if (this->modes.recordingActive != value) {
        this->modes.recordingActive = value;

        if (!value) {
            this->canStartRecording = false;
            this->getDatabase()->closeRecord();
        } else {
            this->getDatabase()->create();
        }

        emit modeChanged(this->modes);
    }
}

void Drone::setPlayingMode(bool value) {
    if (this->modes.playingActive != value) {
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
    this->canStartRecording = true;

    emit startRecording(active);
}

bool Drone::getCanStartRecording() {
    return this->canStartRecording;
}

void Drone::setCameraFrame(MyMat frame) {
    emit cameraFrameChanged(frame);
}

void Drone::setHandPosition(HandPosition handPosition) {
    this->handPosition = handPosition;
    emit handPositionChanged(handPosition);
}

HandPosition Drone::getHandPosition() {
    return this->handPosition;
}

void Drone::slotSteeringsDataChanged(QHash<QString,SteeringData*> * data) {
    emit signalSteeringsDataChanged(data);
}
