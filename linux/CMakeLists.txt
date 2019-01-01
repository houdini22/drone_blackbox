cmake_minimum_required(VERSION 2.6)
project ( nienazwany )

# declaring files in your project

set ( SOURCES
 "common.cpp" "database.cpp" "drone.cpp" "gamepad.cpp" "main.cpp" "mainwindow.cpp" "threadarduinoconnect.cpp" "threadarduinodetect.cpp" "threadarduinoping.cpp" "threadarduinosend.cpp" "threadcamera.cpp" "threadgamepad.cpp" "threadgamepadupdate.cpp" "QtLeapMotion/Leap/util/LeapScene.cpp" "QtLeapMotion/Leap/util/LeapUtil.cpp" "QtLeapMotion/Leap/util/LeapUtilGL.cpp" "QtLeapMotion/QtLeapDevice/QtLeapMotionController.cpp" "QtLeapMotion/QtLeapDevice/QtLeapMotionListener.cpp" "QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapCircleGestureHandler.cpp" "QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapSwipeGestureHandler.cpp" "QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapTapGestureHandler.cpp" "QtLeapMotion/QtLeapGestures/Qml/AbstractGestureArea.cpp" "QtLeapMotion/QtLeapGestures/Qml/CircleLeapGestureArea.cpp" "QtLeapMotion/QtLeapGestures/Qml/KeyTapLeapGestureArea.cpp" "QtLeapMotion/QtLeapGestures/Qml/ScreenTapLeapGestureArea.cpp" "QtLeapMotion/QtLeapGestures/Qml/SwipeLeapGestureArea.cpp" "QtLeapMotion/QtLeapGestures/QtLeapCircleGesture.cpp" "QtLeapMotion/QtLeapGestures/QtLeapKeyTapGesture.cpp" "QtLeapMotion/QtLeapGestures/QtLeapScreenTapGesture.cpp" "QtLeapMotion/QtLeapGestures/QtLeapSwipeGesture.cpp" "QtLeapMotion/QtLeapGestures/QtLeapTapGesture.cpp" "QtLeapMotion/QtLeapGlobal/Handlers/DefaultQtLeapHandsHandler.cpp" "QtLeapMotion/QtLeapGlobal/Qml/FingersMotionArea.cpp" "QtLeapMotion/QtLeapGlobal/Qml/HandsMotionArea.cpp" "QtLeapMotion/QtLeapGlobal/QtLeapBone.cpp" "QtLeapMotion/QtLeapGlobal/QtLeapFinger.cpp" "QtLeapMotion/QtLeapGlobal/QtLeapHand.cpp" "QtLeapMotion/QtLeapGlobal/QtLeapMotionQQuickView.cpp" "QtLeapMotion/QtLeapGlobal/QtLeapPointable.cpp" "QtLeapMotion/QtLeapGlobal/QtLeapTool.cpp" "QtLeapMotion/QtLeapGlobal/QtLeapUtils.cpp" "QtLeapMotion/QtLeapTouch/Handlers/DefaultQtLeapMouseHandler.cpp" "QtLeapMotion/QtLeapTouch/Handlers/DefaultQtLeapTouchHandler.cpp" "QtLeapMotion/QtLeapTouch/QtLeapMotionTouchDevice.cpp" "leapeventlistener.cpp" "steeringregistry.cpp" "steeringgamepad.cpp" "steeringinterface.cpp" "sendingregistry.cpp" "sendingarduino.cpp" "sendinginterface.cpp" "steeringleapmotion.cpp"
)

set ( MOC_HEADERS
"buttons.h" "common.h" "database.h" "drone.h" "dronemanager.h" "dronemodes.h" "gamepad.h" "include.h" "mainwindow.h" "threadarduinoconnect.h" "threadarduinodetect.h" "threadarduinoping.h" "threadarduinosend.h" "threadcamera.h" "threadgamepad.h" "threadgamepadupdate.h" "ui_mainwindow.h" "QtLeapMotion/Leap/include/Leap.h" "QtLeapMotion/Leap/include/LeapMath.h" "QtLeapMotion/Leap/util/LeapScene.h" "QtLeapMotion/Leap/util/LeapUtil.h" "QtLeapMotion/Leap/util/LeapUtilGL.h" "QtLeapMotion/QtLeapDevice/QtLeapMotionController.h" "QtLeapMotion/QtLeapDevice/QtLeapMotionListener.h" "QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapCircleGestureHandler.h" "QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapSwipeGestureHandler.h" "QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapTapGestureHandler.h" "QtLeapMotion/QtLeapGestures/Handlers/QtLeapGestureHandlerInterface.h" "QtLeapMotion/QtLeapGestures/Listeners/QtLeapGestureListenerInterface.h" "QtLeapMotion/QtLeapGestures/Qml/AbstractGestureArea.h" "QtLeapMotion/QtLeapGestures/Qml/CircleLeapGestureArea.h" "QtLeapMotion/QtLeapGestures/Qml/KeyTapLeapGestureArea.h" "QtLeapMotion/QtLeapGestures/Qml/ScreenTapLeapGestureArea.h" "QtLeapMotion/QtLeapGestures/Qml/SwipeLeapGestureArea.h" "QtLeapMotion/QtLeapGestures/QtLeapCircleGesture.h" "QtLeapMotion/QtLeapGestures/QtLeapGesture.h" "QtLeapMotion/QtLeapGestures/QtLeapKeyTapGesture.h" "QtLeapMotion/QtLeapGestures/QtLeapScreenTapGesture.h" "QtLeapMotion/QtLeapGestures/QtLeapSwipeGesture.h" "QtLeapMotion/QtLeapGestures/QtLeapTapGesture.h" "QtLeapMotion/QtLeapGlobal/Handlers/DefaultQtLeapHandsHandler.h" "QtLeapMotion/QtLeapGlobal/Handlers/QtLeapHandsHandlerInterface.h" "QtLeapMotion/QtLeapGlobal/Handlers/QtLeapMotionHandler.h" "QtLeapMotion/QtLeapGlobal/Listeners/QtLeapFingersListenerInterface.h" "QtLeapMotion/QtLeapGlobal/Listeners/QtLeapHandsListenerInterface.h" "QtLeapMotion/QtLeapGlobal/Qml/FingersMotionArea.h" "QtLeapMotion/QtLeapGlobal/Qml/HandsMotionArea.h" "QtLeapMotion/QtLeapGlobal/QtLeapBone.h" "QtLeapMotion/QtLeapGlobal/QtLeapFinger.h" "QtLeapMotion/QtLeapGlobal/QtLeapGlobal.h" "QtLeapMotion/QtLeapGlobal/QtLeapHand.h" "QtLeapMotion/QtLeapGlobal/QtLeapMotionQQuickView.h" "QtLeapMotion/QtLeapGlobal/QtLeapPointable.h" "QtLeapMotion/QtLeapGlobal/QtLeapTool.h" "QtLeapMotion/QtLeapGlobal/QtLeapUtils.h" "QtLeapMotion/QtLeapTouch/Handlers/DefaultQtLeapMouseHandler.h" "QtLeapMotion/QtLeapTouch/Handlers/DefaultQtLeapTouchHandler.h" "QtLeapMotion/QtLeapTouch/Handlers/QtLeapMouseHandlerInterface.h" "QtLeapMotion/QtLeapTouch/Handlers/QtLeapTouchHandlerInterface.h" "QtLeapMotion/QtLeapTouch/QtLeapMotionTouchDevice.h" "leapeventlistener.h" "steeringregistry.h" "steeringgamepad.h" "steeringinterface.h" "sendingregistry.h" "sendinginterface.h" "sendingarduino.h" "steeringleapmotion.h" "json.hpp" "storage.h"
)

set ( UIS
 mainwindow.ui
)

    
# Next lines needed for building all Qt projects
find_package(Qt5 REQUIRED
    Core
    Gui
    Widgets
    Quick
)
#include( ${QT_USE_FILE} )
add_definitions( ${QT_DEFINITIONS} )
include_directories( ${CMAKE_BINARY_DIR} )
set(QT_INCLUDES ${Qt5Core_INCLUDE_DIRS})
include_directories(${QT_INCLUDES})

# Next, using precompiler, compiler and linker

# using Qt meta-system (precompiler)
QT5_WRAP_UI( UI_HEADERS ${UIS} )
QT5_WRAP_CPP( MOC_SRCS ${MOC_HEADERS} )
# compile
add_executable( nienazwany ${SOURCES} ${MOC_SRCS} ${RES_SOURCES} ${UI_HEADERS} )
# or use line below instead, if you using Windows ™ Operating System.
#add_executable( nienazwany WIN32 ${SOURCES} ${MOC_SRCS} ${RES_SOURCES} ${UI_HEADERS} )

# build it (link libraries)
target_link_libraries(nienazwany ${QT_LIBRARIES} -ludev -lserial -lpthread -lstdc++fs -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_videoio -lGLU)
qt5_use_modules(nienazwany Gui Widgets Quick)
