#-------------------------------------------------
#
# Project created by QtCreator 2018-10-15T15:46:32
#
#-------------------------------------------------

QT += core gui quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = nienazwany
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

QMAKE_CXXFLAGS += -std=c++11

CONFIG += c++14 staticlib dll

OBJECTS_DIR = tmp

MOC_DIR = tmp

LIBS += -ludev
LIBS += -lserial
LIBS += -lpthread
LIBS += -lstdc++fs
LIBS += -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_videoio
LIBS += -lGLU
LIBS += -L$$PWD/ -lLeap

DEPENDPATH += $$PWD/QtLeapMotion/Leap/include

INCLUDEPATH += /usr/include/boost/compute/interop/opencv/
INCLUDEPATH += $$PWD/QtLeapMotion/Leap/include
INCLUDEPATH += /usr/include/KF5/KDELibs4Support

SOURCES += \
    common.cpp \
    database.cpp \
    drone.cpp \
    gamepad.cpp \
    main.cpp \
    mainwindow.cpp \
    threadarduinoconnect.cpp \
    threadarduinodetect.cpp \
    threadarduinoping.cpp \
    threadarduinosend.cpp \
    threadcamera.cpp \
    threadgamepad.cpp \
    threadgamepadupdate.cpp \
    leapeventlistener.cpp \
    steeringregistry.cpp \
    sendingregistry.cpp \
    sendingarduino.cpp \
    sendinginterface.cpp \
    steeringleapmotion.cpp \
    dialogradiosettings.cpp \
    mousesteering.cpp \
    steering.cpp \
    dialogarmingmodesettings.cpp \
    dialogdisarmingmodesettings.cpp

HEADERS += \
    buttons.h \
    common.h \
    database.h \
    drone.h \
    dronemanager.h \
    dronemodes.h \
    gamepad.h \
    include.h \
    mainwindow.h \
    threadarduinoconnect.h \
    threadarduinodetect.h \
    threadarduinoping.h \
    threadarduinosend.h \
    threadcamera.h \
    threadgamepad.h \
    threadgamepadupdate.h \
    ui_mainwindow.h \
    QtLeapMotion/Leap/include/Leap.h \
    QtLeapMotion/Leap/include/LeapMath.h \
    leapeventlistener.h \
    steeringregistry.h \
    sendingregistry.h \
    sendinginterface.h \
    sendingarduino.h \
    steeringleapmotion.h \
    json.hpp \
    storage.h \
    focuswatcher.h \
    dialogradiosettings.h \
    mousesteering.h \
    steering.h \
    dialogarmingmodesettings.h \
    dialogdisarmingmodesettings.h

FORMS += \
    mainwindow.ui \
    dialogradiosettings.ui \
    dialogarmingmodesettings.ui \
    dialogdisarmingmodesettings.ui

SUBDIRS += \
    QtLeapMotion/QtLeapMotion.pro
