#ifndef THREADCAMERA_H
#define THREADCAMERA_H

#include "include.h"

using namespace cv;

class Drone;

class ThreadCamera : public QThread
{
    Q_OBJECT
public:
    explicit ThreadCamera(Drone * drone);
    void run();
private:
    QString name;
    Drone * drone;
signals:
    void cameraFrameChanged(MyMat);
};

#endif // THREADCAMERA_H
