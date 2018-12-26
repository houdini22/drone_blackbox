#include "QThread"
#include "include.h"

ThreadLeapMotion::ThreadLeapMotion(Drone * drone): QThread()
{
    this->drone = drone;
}

void ThreadLeapMotion::run() {
    QtLeapMotion::QtLeapMotionController * controller = QtLeapMotion::QtLeapMotionController::getInstance();
    QtLeapMotion::DefaultQtLeapHandsHandler * handler = new QtLeapMotion::DefaultQtLeapHandsHandler(controller);
    QtLeapMotion::HandsListener * listener = new QtLeapMotion::HandsListener();

    connect(listener, SIGNAL(handUpdated(QtLeapMotion::QtLeapHand*)), this, SLOT(handUpdated(QtLeapMotion::QtLeapHand*)));

    controller->registerHandListener(listener);

    while (1) {
        QThread::sleep(1000);
    }
}

void ThreadLeapMotion::handUpdated(QtLeapMotion::QtLeapHand *hand) {
    qDebug() << hand->getHand()->isLeft();
}
