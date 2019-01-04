#ifndef MOUSESTEERING_H
#define MOUSESTEERING_H

#include "include.h"

class Drone;

class MouseSteering : public QGroupBox {
    Q_OBJECT
public:
    MouseSteering(QWidget * parent);
    void setDrone(Drone * drone);
protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    Drone * drone;
signals:
    void signalMiddleButtonPressed();
public slots:
    void slotMiddleButtonPressed();
};

#endif // MOUSESTEERING_H
