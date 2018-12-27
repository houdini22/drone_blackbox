#include "include.h"

void LeapEventListener::onConnect(const Controller& controller) {
}

//Not dispatched when running in a debugger
void LeapEventListener::onDisconnect(const Controller& controller) {
}

void LeapEventListener::onFrame(const Controller& controller) {
    Frame frame = controller.frame();
    Leap::HandList hands = frame.hands();
    Leap::Hand firstHand = hands[0];

    InteractionBox iBox = controller.frame().interactionBox();
    Pointable pointable = controller.frame().pointables().frontmost();
    Vector leapPoint = pointable.stabilizedTipPosition();

    float pitch = firstHand.direction().pitch();
    float yaw = firstHand.direction().yaw();
    float roll = firstHand.palmNormal().roll();
    bool isAvailable = firstHand.id() != -1;
    bool fist = firstHand.sphereRadius() <= 50.0f;
    HandPosition handPosition;

    handPosition.pitch = floor(pitch * 100) / 100;
    handPosition.yaw = floor(yaw * 100) / 100;
    handPosition.roll = floor(roll * 100) / 100;
    handPosition.isAvailable = isAvailable;
    handPosition.fist = fist;
    handPosition.x = leapPoint.x;
    handPosition.y = leapPoint.y;
    handPosition.z = leapPoint.z;

    handPosition.pitch = std::min(std::max(handPosition.pitch, (float) -0.6), (float) 0.6);
    handPosition.yaw = std::min(std::max(handPosition.yaw + (float) 0.2, (float) -0.6), (float) 0.6);
    handPosition.roll = - std::min(std::max(handPosition.roll, (float) -0.6), (float) 0.6);
    handPosition.x = std::min(std::max(handPosition.x, (float) -200), (float) 200) / 200;
    handPosition.y = std::min(std::max(handPosition.y, (float) 0), (float) 400) / 400;
    handPosition.z = std::min(std::max(handPosition.z, (float) -200), (float) 200) / 200;

    this->drone->setHandPosition(handPosition);
}

void LeapEventListener::setDrone(Drone *drone) {
    this->drone = drone;
}
