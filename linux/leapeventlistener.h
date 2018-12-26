#ifndef LEAPEVENTLISTENER_H
#define LEAPEVENTLISTENER_H

#include <iostream>
#include "include.h"

using namespace Leap;

class LeapEventListener : public Listener {
public:
    virtual void onConnect(const Controller&);
    virtual void onDisconnect(const Controller&);
    virtual void onFrame(const Controller&);
signals:
    handPositionChanged(HandPosition);
};

#endif // LEAPEVENTLISTENER_H
