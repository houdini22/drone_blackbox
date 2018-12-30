#include "include.h"
#include "mainwindow.h"

using namespace cv;

Drone::Drone(MainWindow * window)
{
    this->window = window;
    this->modes = new Modes;

    this->threadCamera = new ThreadCamera(this);
    connect(this->threadCamera, SIGNAL(cameraFrameChanged(MyMat)), this, SLOT(setCameraFrame(MyMat)));

    this->leapEventListener.setDrone(this);
    this->leapController.addListener(this->leapEventListener);

    this->steeringRegistry = new SteeringRegistry(this);
    this->steeringRegistry->add(new SteeringGamepad(this, this->steeringRegistry));
    connect(this->steeringRegistry, SIGNAL(signalSteeringsDataChanged(QHash<QString,SteeringData*>*)), this, SLOT(slotSteeringsDataChanged(QHash<QString,SteeringData*>*)));
    connect(this->steeringRegistry, SIGNAL(signalSteeringDataChanged(SteeringData*)), this, SLOT(slotSteeringDataChanged(SteeringData*)));
    this->steeringRegistry->start();

    this->sendingRegistry = new SendingRegistry(this);
    this->sendingRegistry->add(new SendingArduino(this, this->sendingRegistry));
    connect(this->sendingRegistry, SIGNAL(signalSendingsDataChanged(QHash<QString,SendingData*>*)), this, SLOT(slotSendingsDataChanged(QHash<QString,SendingData*>*)));
    connect(this->sendingRegistry, SIGNAL(signalSendingDataChanged(SendingData*)), this, SLOT(slotSendingDataChanged(SendingData*)));
    this->sendingRegistry->start();
}

void Drone::start() {
    this->threadCamera->start();
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

void Drone::slotSendingsDataChanged(QHash<QString,SendingData*> * data) {
    emit signalSendingsDataChanged(data);
}

ButtonsPressed Drone::getButtons() {
    return this->gamepad0->buttonsPressed;
}

void Drone::setModes(Modes * modes) {
    this->modes = modes;
    emit signalModesChanged(modes);
}

Modes * Drone::getModes() {
    return this->modes;
}

void Drone::slotSteeringDataChanged(SteeringData * data) {
    if (data->name.compare("gamepad0") == 0) {
        this->gamepad0 = data;
    }
}
