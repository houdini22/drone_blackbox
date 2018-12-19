#ifndef BUTTONS_H
#define BUTTONS_H

#include "include.h"

struct ButtonsPressed {
    QString leftX = "";
    QString leftY = "";
    QString rightX = "";
    QString rightY = "";
    QString start = "";
    QString arming = "";
    QString a = "";
    QString b = "";
    QString y = "";
    QString leftShoulder = "";
    QString rightShoulder = "";
    QString dPadUp = "";
    QString dPadDown = "";
};

Q_DECLARE_METATYPE(ButtonsPressed)

#endif // BUTTONS_H
