cmake_minimum_required(VERSION 2.6)
project ( nienazwany )

# declaring files in your project

set ( SOURCES
common.cpp
database.cpp
drone.cpp
gamepad.cpp
main.cpp
mainwindow.cpp
threadarduinoconnect.cpp
threadarduinodetect.cpp
threadarduinoping.cpp
threadarduinosend.cpp
threadcamera.cpp
threadgamepad.cpp
threadgamepadupdate.cpp
leapeventlistener.cpp
steeringregistry.cpp
sendingregistry.cpp
sendingarduino.cpp
sendinginterface.cpp
steeringleapmotion.cpp
dialogradiosettings.cpp
mousesteering.cpp
steering.cpp
dialogarmingmodesettings.cpp
dialogdisarmingmodesettings.cpp
dialogthrottlemodesettings.cpp
)

set ( MOC_HEADERS
buttons.h
common.h
database.h
drone.h
dronemanager.h
dronemodes.h
gamepad.h
include.h
mainwindow.h
threadarduinoconnect.h
threadarduinodetect.h
threadarduinoping.h
threadarduinosend.h
threadcamera.h
threadgamepad.h
threadgamepadupdate.h
ui_mainwindow.h
QtLeapMotion/Leap/include/Leap.h
QtLeapMotion/Leap/include/LeapMath.h
leapeventlistener.h
steeringregistry.h
sendingregistry.h
sendinginterface.h
sendingarduino.h
steeringleapmotion.h
json.hpp
storage.h
focuswatcher.h
dialogradiosettings.h
mousesteering.h
steering.h
dialogarmingmodesettings.h
dialogdisarmingmodesettings.h
dialogthrottlemodesettings.h
)

set ( UIS
 mainwindow.ui
)

set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -s")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -s")
    
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

target_link_libraries(nienazwany ${QT_LIBRARIES} -ludev -lserial -lGL -lpthread -lstdc++fs -lGLU -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_videoio -lopencv_shape)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")
qt5_use_modules(nienazwany Gui Widgets Quick)
