#ifndef DRONEMODES_H
#define DRONEMODES_H

#include "include.h"

struct Modes {
    bool radioSending = false;
    bool motorsArmed = false;
    bool throttleModeActive = false;
    bool recordingActive = false;
    bool playingActive = false;
};

const int MODE_ARDUINO_DISCONNECTED = 0;
const int MODE_ARDUINO_DETECTED = 1;
const int MODE_ARDUINO_CONNECTED = 2;

#endif // DRONEMODES_H
