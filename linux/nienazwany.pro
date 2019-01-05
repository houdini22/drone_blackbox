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
    leapeventlistener.cpp \
    steeringregistry.cpp \
    steeringgamepad.cpp \
    steeringinterface.cpp \
    sendingregistry.cpp \
    sendingarduino.cpp \
    sendinginterface.cpp \
    steeringleapmotion.cpp \
    dialogradiosettings.cpp \
    mousesteering.cpp \
    steeringgamepad1.cpp \
    threadgamepadupdate0.cpp \
    steeringgamepad0.cpp \
    threadgamepadupdate1.cpp \
    threadgamepad0.cpp \
    threadgamepad1.cpp

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
    leapeventlistener.h \
    steeringregistry.h \
    steeringgamepad.h \
    steeringinterface.h \
    sendingregistry.h \
    sendinginterface.h \
    sendingarduino.h \
    steeringleapmotion.h \
    json.hpp \
    storage.h \
    focuswatcher.h \
    dialogradiosettings.h \
    mousesteering.h \
    steeringgamepad1.h \
    threadgamepad1.h \
    steeringgamepad0.h \
    threadgamepad0update.h \
    threadgamepad1update.h \
    threadgamepad0.h

FORMS += \
    mainwindow.ui \
    dialogradiosettings.ui

SUBDIRS += \
    QtLeapMotion/QtLeapMotion.pro
