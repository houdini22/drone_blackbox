#ifndef STEERINGGAMEPAD0_H
#define STEERINGGAMEPAD0_H

#include "include.h"

class ThreadGamepad;
class ThreadGamepadUpdate;
struct ButtonsPressed;

class SteeringGamepad0 : public SteeringInterface, public QObject {
    Q_OBJECT
public:
    SteeringGamepad0(Drone * drone, SteeringRegistry * registry);
    void start() override;
private:
    ThreadGamepad0 * threadConnect;
    ThreadGamepad0Update * threadGamepadUpdate;
public slots:
    void slotGamepadIsConnected(bool);
    void slotButtonsChanged(ButtonsPressed);
};

#endif // STEERINGGAMEPAD0_H
