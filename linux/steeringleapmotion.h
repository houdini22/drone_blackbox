#ifndef STEERINGLEAPMOTION_H
#define STEERINGLEAPMOTION_H

#include "include.h"

class ThreadGamepad;
class ThreadGamepadUpdate;
struct ButtonsPressed;

class SteeringLeapMotion : public QObject, public SteeringInterface {
    Q_OBJECT
public:
    SteeringLeapMotion(Drone * drone, SteeringRegistry * registry);
    void start() override;
    void setData(SteeringData * data);
signals:
    void signalSteeringDataChanged(SteeringData *);
private:
    Leap::Controller leapController;
    LeapEventListener leapEventListener;
};

#endif // STEERINGLEAPMOTION_H
