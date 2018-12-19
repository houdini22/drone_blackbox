#-------------------------------------------------
#
# Project created by QtCreator 2018-10-15T15:46:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = nienazwany
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

QMAKE_CXXFLAGS += -std=c++11

CONFIG += c++14

LIBS += -ludev
LIBS += -lserial
LIBS += -lpthread
LIBS += -lstdc++fs
LIBS += -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_videoio

INCLUDEPATH += /usr/include/boost/compute/interop/opencv/

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    drone.cpp \
    threadgamepad.cpp \
    gamepad.cpp \
    threadarduinodetect.cpp \
    threadarduinoconnect.cpp \
    threadarduinoping.cpp \
    threadarduinosend.cpp \
    threadgamepadupdate.cpp \
    common.cpp \
    database.cpp \
    threadcamera.cpp

HEADERS += \
        mainwindow.h \
    drone.h \
    threadgamepad.h \
    include.h \
    gamepad.h \
    threadarduinodetect.h \
    threadarduinoconnect.h \
    threadarduinoping.h \
    threadarduinosend.h \
    threadgamepadupdate.h \
    common.h \
    buttons.h \
    dronemodes.h \
    database.h \
    threadcamera.h

FORMS += \
        mainwindow.ui
