#ifndef DRONEMODES_H
#define DRONEMODES_H

#include "include.h"

struct Modes {
    QString radioSending = "false";
    QString motorsArmed = "not armed";
    QString throttleModeActive = "false";
    QString recordingActive = "false";
    QString playingActive = "false";
};

const int MODE_ARDUINO_DISCONNECTED = 0;
const int MODE_ARDUINO_DETECTED = 1;
const int MODE_ARDUINO_CONNECTED = 2;

#endif // DRONEMODES_H
