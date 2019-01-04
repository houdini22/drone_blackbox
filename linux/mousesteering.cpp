#include "include.h"

MouseSteering::MouseSteering(QWidget * parent) : QGroupBox(parent) {
    connect(this, SIGNAL(signalMiddleButtonPressed()), this, SLOT(slotMiddleButtonPressed()));
    this->setMouseTracking(true);
}

void MouseSteering::mouseReleaseEvent(QMouseEvent * event) {

}

void MouseSteering::mousePressEvent(QMouseEvent *event) {
    Modes * modes = this->drone->getModes();
    nlohmann::json data = Storage::getInstance().getData();

    if (event->button() == Qt::MiddleButton) {

    } else if (event->button() == Qt::LeftButton) {
        modes->leftY -= 25;
        modes->leftY = std::max((int) data["radio"]["leftY"]["min"].get<int>(), modes->leftY);
    } else if (event->button() == Qt::RightButton) {
        modes->leftY += 25;
        modes->leftY = std::min((int) data["radio"]["leftY"]["max"].get<int>(), modes->leftY);
    }

    this->drone->setModes(modes);
}

void MouseSteering::mouseDoubleClickEvent(QMouseEvent * event) {

}

void MouseSteering::mouseMoveEvent(QMouseEvent *event) {
    double _rightX = ((double) event->pos().rx() - 250.0) / 250.0;
    double _rightY = ((double) event->pos().ry() - 250.0) / 250.0;

    nlohmann::json data = Storage::getInstance().getData();
    Modes * modes = this->drone->getModes();

    if (_rightX < 0) {
        double area = data["radio"]["rightX"]["middle"].get<int>() - data["radio"]["rightX"]["min"].get<int>();
        _rightX = data["radio"]["rightX"]["middle"].get<int>() + (area * _rightX);
    } else {
        double area = data["radio"]["rightX"]["max"].get<int>() - data["radio"]["rightX"]["middle"].get<int>();
        _rightX = data["radio"]["rightX"]["middle"].get<int>() + (area * _rightX);
    }

    if (_rightY < 0) {
        double area = data["radio"]["rightY"]["middle"].get<int>() - data["radio"]["rightY"]["min"].get<int>();
        _rightY = data["radio"]["rightY"]["middle"].get<int>() + (area * _rightY);
    } else {
        double area = data["radio"]["rightY"]["max"].get<int>() - data["radio"]["rightY"]["middle"].get<int>();
        _rightY = data["radio"]["rightY"]["middle"].get<int>() + (area * _rightY);
    }

    modes->rightX = _rightX;
    modes->rightY = _rightY;

    this->drone->setModes(modes);
}

void MouseSteering::setDrone(Drone * drone) {
    this->drone = drone;
}

void MouseSteering::slotMiddleButtonPressed() {
    Modes * modes = this->drone->getModes();
    modes->mouseSteering = !modes->mouseSteering;
    this->drone->setModes(modes);
}
