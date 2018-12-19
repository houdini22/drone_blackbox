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

#include "common.h"
#include "buttons.h"
#include "dronemodes.h"
#include "gamepad.h"
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
