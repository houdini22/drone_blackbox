#ifndef INCLUDE_H
#define INCLUDE_H

#include <QThread>
#include <QString>
#include <QLabel>
#include <QDebug>
#include <QObject>
#include <QTimer>
#include <QListWidget>
#include <QListWidgetItem>
#include <QLineEdit>
#include <QMap>
#include <QHash>
#include <QLineEdit>
#include <QEvent>
#include <QAbstractButton>
#include <QDesktopWidget>
#include <QRect>
#include <QGroupBox>
#include <QMouseEvent>
#include <QRadioButton>

#include <vector>
#include <list>
#include <algorithm>
#include <functional>
#include <chrono>
#include <future>
#include <math.h>
#include <SerialStream.h>
#include <string>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/statvfs.h>
#include <map>
#include <sstream>
#include <iostream>
#include <experimental/filesystem>
#include <dirent.h>
#include "opencv2/opencv.hpp"

using namespace cv;

typedef Mat MyMat;
Q_DECLARE_METATYPE(MyMat)

#include "dialogradiosettings.h"
#include "mousesteering.h"
#include "json.hpp"
#include "focuswatcher.h"
#include "storage.h"
#include "common.h"
#include "buttons.h"
#include "gamepad.h"
#include "dronemodes.h"
#include "steeringregistry.h"
#include "steeringinterface.h"
#include "steeringgamepad.h"
#include "QtLeapMotion/Leap/include/Leap.h"
#include "leapeventlistener.h"
#include "steeringleapmotion.h"
#include "sendingregistry.h"
#include "sendinginterface.h"
#include "sendingarduino.h"
#include "database.h"
#include "drone.h"
#include "threadgamepad.h"
#include "threadarduinodetect.h"
#include "threadarduinoconnect.h"
#include "threadarduinoping.h"
#include "threadarduinosend.h"
#include "threadgamepadupdate.h"
#include "threadcamera.h"

#endif // INCLUDE_H
