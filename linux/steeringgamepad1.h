#ifndef STEERINGGAMEPAD1_H
#define STEERINGGAMEPAD1_H

#include "include.h"

class ThreadGamepad;
class ThreadGamepadUpdate;
struct ButtonsPressed;

class SteeringGamepad1 : public SteeringInterface, public QObject {
    Q_OBJECT
public:
    SteeringGamepad1(Drone * drone, SteeringRegistry * registry);
    void start() override;
private:
    ThreadGamepad1 * threadConnect;
    ThreadGamepad1Update * threadGamepadUpdate;
public slots:
    void slotGamepadIsConnected(bool);
    void slotButtonsChanged(ButtonsPressed);
signals:
    void signalSteeringDataChanged(SteeringData *);
};

#endif // STEERINGGAMEPAD1_H
