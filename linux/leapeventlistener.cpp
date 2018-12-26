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

    float pitch = firstHand.direction().pitch();
    float yaw = firstHand.direction().yaw();
    float roll = firstHand.palmNormal().roll();

    HandPosition handPosition;

    handPosition.pitch = floor(pitch * 100) / 100;
    handPosition.yaw = floor(yaw * 100) / 100;
    handPosition.roll = floor(roll * 100) / 100;

    this->drone->setHandPosition(handPosition);
}

void LeapEventListener::setDrone(Drone *drone) {
    this->drone = drone;
}
