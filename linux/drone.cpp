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
    this->gamepad0 = new SteeringGamepad(this, this->steeringRegistry);
    this->steeringRegistry->add(this->gamepad0);
    connect(this->steeringRegistry, SIGNAL(signalSteeringsDataChanged(QHash<QString,SteeringData*>*)), this, SLOT(slotSteeringsDataChanged(QHash<QString,SteeringData*>*)));
    this->steeringRegistry->start();

    this->sendingRegistry = new SendingRegistry(this);
    this->sendingRegistry->add(new SendingArduino(this, this->sendingRegistry));
    connect(this->sendingRegistry, SIGNAL(signalSendingsDataChanged(QHash<QString,SendingData*>*)), this, SLOT(slotSendingsDataChanged(QHash<QString,SendingData*>*)));
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

void Drone::setModes(Modes * modes) {
    this->modes = modes;
    emit signalModesChanged(modes);
}

Modes * Drone::getModes() {
    return this->modes;
}

SteeringGamepad * Drone::getGamepad() {
    return this->gamepad0;
}
