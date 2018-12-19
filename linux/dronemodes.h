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

#endif // DRONEMODES_H
