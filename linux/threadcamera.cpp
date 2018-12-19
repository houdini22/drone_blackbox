#include "QThread"
#include "include.h"

ThreadCamera::ThreadCamera(Drone * drone): QThread()
{
    this->drone = drone;
}

void ThreadCamera::run() {
    VideoCapture cap;
    bool isOpened = false;

    cap.set(CV_CAP_PROP_FRAME_WIDTH, 640);
    cap.set(CV_CAP_PROP_FRAME_HEIGHT, 480);
    cap.set(CV_CAP_PROP_FOURCC, CV_FOURCC('M', 'J', 'P', 'G'));
    cap.set(CV_CAP_PROP_FPS, 30);

    while (1) {
        if (!cap.open(0)) {
            QThread::msleep(1000);
        } else {
            isOpened = true;
            break;
        }
    }

    while (1) {
        if (!isOpened) {
            QThread::msleep(1000);
        }

        if (isOpened) {
            QThread::msleep(34);
            MyMat frame;
            cap >> frame;
            if (frame.empty()) {
                continue;
            } else {
                emit cameraFrameChanged(frame);
            }
        }
    }
}
