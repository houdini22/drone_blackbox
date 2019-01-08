#include "include.h"
#include "mainwindow.h"

using namespace cv;
using namespace std::experimental::filesystem::v1;

Drone::Drone(MainWindow * window) {
    this->window = window;
    this->modes = new Modes;

    this->createStorage();

    nlohmann::json data = Storage::getInstance().getData();
    this->modes->leftX = data["radio"]["leftX"]["middle"];
    this->modes->leftY = data["radio"]["leftY"]["min"];
    this->setModes(this->modes);

    this->threadCamera = new ThreadCamera(this);
    connect(this->threadCamera, SIGNAL(cameraFrameChanged(MyMat)), this, SLOT(setCameraFrame(MyMat)));

    this->steeringRegistry = new SteeringRegistry(this);
    this->gamepad0 = new SteeringGamepad0(this, this->steeringRegistry);
    this->steeringRegistry->add(this->gamepad0);
    connect(this->steeringRegistry, SIGNAL(signalSteeringDataChanged(SteeringData*)), this, SLOT(slotSteeringDataChanged(SteeringData*)));

    //this->gamepad1 = new SteeringGamepad1(this, this->steeringRegistry);
    //this->steeringRegistry->add(this->gamepad1);

    this->sendingRegistry = new SendingRegistry(this);
    this->sendingRegistry->add(new SendingArduino(this, this->sendingRegistry));
    connect(this->sendingRegistry, SIGNAL(signalSendingsDataChanged(QHash<QString,SendingData*>*)), this, SLOT(slotSendingsDataChanged(QHash<QString,SendingData*>*)));

    this->sendingRegistry->start();
    this->steeringRegistry->start();

    this->sendingRegistry->startThreads();
    this->steeringRegistry->startThreads();
}

void Drone::start() {
    Storage::getInstance().create();
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

void Drone::slotSteeringDataChanged(SteeringData * data) {
    emit signalSteeringDataChanged(data);
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

SteeringGamepad0 * Drone::getGamepad0() {
    return this->gamepad0;
}

SteeringGamepad1 * Drone::getGamepad1() {
    return this->gamepad1;
}

void Drone::createStorage() {
    Storage::getInstance().create();
}
