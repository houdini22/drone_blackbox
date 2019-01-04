#ifndef DRONEMODES_H
#define DRONEMODES_H

#include "include.h"

struct Modes {
    int leftX = 0;
    int leftY = 0;
    int rightX = 0;
    int rightY = 0;
    bool radioSending = false;
    bool motorsArmed = false;
    bool throttleModeActive = false;
    bool recordingActive = false;
    bool playingActive = false;
    bool mouseSteering = false;
    int leftMouseClick = 0;
    int rightMouseClick = 0;
};

struct HandPosition {
    float pitch = 0.0;
    float yaw = 0.0;
    float roll = 0.0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    bool isAvailable = false;
    bool fist = false;
};

const int MODE_ARDUINO_DISCONNECTED = 0;
const int MODE_ARDUINO_DETECTED = 1;
const int MODE_ARDUINO_CONNECTED = 2;

#endif // DRONEMODES_H
