#ifndef STEERINGGAMEPAD_H
#define STEERINGGAMEPAD_H

#include "include.h"

class ThreadGamepad;
class ThreadGamepadUpdate;
struct ButtonsPressed;

class SteeringGamepad : public QObject, public SteeringInterface {
    Q_OBJECT
public:
    SteeringGamepad(Drone * drone, SteeringRegistry * registry);
    void start() override;
private:
    ThreadGamepad * threadConnect;
    ThreadGamepadUpdate * threadGamepadUpdate;
public slots:
    void slotGamepadIsConnected(bool);
    void slotButtonsChanged(ButtonsPressed *);
signals:
    void signalSteeringDataChanged(SteeringData *);
};

#endif // STEERINGGAMEPAD_H
