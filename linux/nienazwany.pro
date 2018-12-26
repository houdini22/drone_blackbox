#-------------------------------------------------
#
# Project created by QtCreator 2018-10-15T15:46:32
#
#-------------------------------------------------

QT       += core gui quick

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

CONFIG += c++14 static dll

OBJECTS_DIR = tmp

MOC_DIR = tmp

LIBS += -ludev
LIBS += -lserial
LIBS += -lpthread
LIBS += -lstdc++fs
LIBS += -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_videoio
LIBS += -L$$PWD/QtLeapMotion/Leap/lib/x64/ -lLeap
LIBS += -lGLU

INCLUDEPATH += /usr/include/boost/compute/interop/opencv/

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
    threadleapmotion.cpp \
    QtLeapMotion/Leap/util/LeapScene.cpp \
    QtLeapMotion/Leap/util/LeapUtil.cpp \
    QtLeapMotion/Leap/util/LeapUtilGL.cpp \
    QtLeapMotion/QtLeapDevice/QtLeapMotionController.cpp \
    QtLeapMotion/QtLeapDevice/QtLeapMotionListener.cpp \
    QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapCircleGestureHandler.cpp \
    QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapSwipeGestureHandler.cpp \
    QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapTapGestureHandler.cpp \
    QtLeapMotion/QtLeapGestures/Qml/AbstractGestureArea.cpp \
    QtLeapMotion/QtLeapGestures/Qml/CircleLeapGestureArea.cpp \
    QtLeapMotion/QtLeapGestures/Qml/KeyTapLeapGestureArea.cpp \
    QtLeapMotion/QtLeapGestures/Qml/ScreenTapLeapGestureArea.cpp \
    QtLeapMotion/QtLeapGestures/Qml/SwipeLeapGestureArea.cpp \
    QtLeapMotion/QtLeapGestures/QtLeapCircleGesture.cpp \
    QtLeapMotion/QtLeapGestures/QtLeapKeyTapGesture.cpp \
    QtLeapMotion/QtLeapGestures/QtLeapScreenTapGesture.cpp \
    QtLeapMotion/QtLeapGestures/QtLeapSwipeGesture.cpp \
    QtLeapMotion/QtLeapGestures/QtLeapTapGesture.cpp \
    QtLeapMotion/QtLeapGlobal/Handlers/DefaultQtLeapHandsHandler.cpp \
    QtLeapMotion/QtLeapGlobal/Qml/FingersMotionArea.cpp \
    QtLeapMotion/QtLeapGlobal/Qml/HandsMotionArea.cpp \
    QtLeapMotion/QtLeapGlobal/QtLeapBone.cpp \
    QtLeapMotion/QtLeapGlobal/QtLeapFinger.cpp \
    QtLeapMotion/QtLeapGlobal/QtLeapHand.cpp \
    QtLeapMotion/QtLeapGlobal/QtLeapMotionQQuickView.cpp \
    QtLeapMotion/QtLeapGlobal/QtLeapPointable.cpp \
    QtLeapMotion/QtLeapGlobal/QtLeapTool.cpp \
    QtLeapMotion/QtLeapGlobal/QtLeapUtils.cpp \
    QtLeapMotion/QtLeapTouch/Handlers/DefaultQtLeapMouseHandler.cpp \
    QtLeapMotion/QtLeapTouch/Handlers/DefaultQtLeapTouchHandler.cpp \
    QtLeapMotion/QtLeapTouch/QtLeapMotionTouchDevice.cpp \
    HandsListener.cpp

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
    threadleapmotion.h \
    ui_mainwindow.h \
    QtLeapMotion/Leap/include/Leap.h \
    QtLeapMotion/Leap/include/LeapMath.h \
    QtLeapMotion/Leap/util/LeapScene.h \
    QtLeapMotion/Leap/util/LeapUtil.h \
    QtLeapMotion/Leap/util/LeapUtilGL.h \
    QtLeapMotion/QtLeapDevice/QtLeapMotionController.h \
    QtLeapMotion/QtLeapDevice/QtLeapMotionListener.h \
    QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapCircleGestureHandler.h \
    QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapSwipeGestureHandler.h \
    QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapTapGestureHandler.h \
    QtLeapMotion/QtLeapGestures/Handlers/QtLeapGestureHandlerInterface.h \
    QtLeapMotion/QtLeapGestures/Listeners/QtLeapGestureListenerInterface.h \
    QtLeapMotion/QtLeapGestures/Qml/AbstractGestureArea.h \
    QtLeapMotion/QtLeapGestures/Qml/CircleLeapGestureArea.h \
    QtLeapMotion/QtLeapGestures/Qml/KeyTapLeapGestureArea.h \
    QtLeapMotion/QtLeapGestures/Qml/ScreenTapLeapGestureArea.h \
    QtLeapMotion/QtLeapGestures/Qml/SwipeLeapGestureArea.h \
    QtLeapMotion/QtLeapGestures/QtLeapCircleGesture.h \
    QtLeapMotion/QtLeapGestures/QtLeapGesture.h \
    QtLeapMotion/QtLeapGestures/QtLeapKeyTapGesture.h \
    QtLeapMotion/QtLeapGestures/QtLeapScreenTapGesture.h \
    QtLeapMotion/QtLeapGestures/QtLeapSwipeGesture.h \
    QtLeapMotion/QtLeapGestures/QtLeapTapGesture.h \
    QtLeapMotion/QtLeapGlobal/Handlers/DefaultQtLeapHandsHandler.h \
    QtLeapMotion/QtLeapGlobal/Handlers/QtLeapHandsHandlerInterface.h \
    QtLeapMotion/QtLeapGlobal/Handlers/QtLeapMotionHandler.h \
    QtLeapMotion/QtLeapGlobal/Listeners/QtLeapFingersListenerInterface.h \
    QtLeapMotion/QtLeapGlobal/Listeners/QtLeapHandsListenerInterface.h \
    QtLeapMotion/QtLeapGlobal/Qml/FingersMotionArea.h \
    QtLeapMotion/QtLeapGlobal/Qml/HandsMotionArea.h \
    QtLeapMotion/QtLeapGlobal/QtLeapBone.h \
    QtLeapMotion/QtLeapGlobal/QtLeapFinger.h \
    QtLeapMotion/QtLeapGlobal/QtLeapGlobal.h \
    QtLeapMotion/QtLeapGlobal/QtLeapHand.h \
    QtLeapMotion/QtLeapGlobal/QtLeapMotionQQuickView.h \
    QtLeapMotion/QtLeapGlobal/QtLeapPointable.h \
    QtLeapMotion/QtLeapGlobal/QtLeapTool.h \
    QtLeapMotion/QtLeapGlobal/QtLeapUtils.h \
    QtLeapMotion/QtLeapTouch/Handlers/DefaultQtLeapMouseHandler.h \
    QtLeapMotion/QtLeapTouch/Handlers/DefaultQtLeapTouchHandler.h \
    QtLeapMotion/QtLeapTouch/Handlers/QtLeapMouseHandlerInterface.h \
    QtLeapMotion/QtLeapTouch/Handlers/QtLeapTouchHandlerInterface.h \
    QtLeapMotion/QtLeapTouch/QtLeapMotionTouchDevice.h \
    HandsListener.h

FORMS += \
    mainwindow.ui

SUBDIRS += \
    QtLeapMotion/QtLeapMotion.pro
