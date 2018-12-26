#include "QThread"
#include "include.h"

ThreadLeapMotion::ThreadLeapMotion(Drone * drone): QThread()
{
    this->drone = drone;
}

void ThreadLeapMotion::run() {
    QtLeapMotion::QtLeapMotionController * controller = QtLeapMotion::QtLeapMotionController::getInstance();

}
