#/****************************************************************************
#**
#** Copyright (C) Paul Lemire
#** Contact: paul.lemire@epitech.eu
#**
#**
#** GNU Lesser General Public License Usage
#** This file may be used under the terms of the GNU Lesser
#** General Public License version 2.1 as published by the Free Software
#** Foundation and appearing in the file LICENSE.LGPL included in the
#** packaging of this file.  Please review the following information to
#** ensure the GNU Lesser General Public License version 2.1 requirements
#** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
#**
#** GNU General Public License Usage
#** Alternatively, this file may be used under the terms of the GNU
#** General Public License version 3.0 as published by the Free Software
#** Foundation and appearing in the file LICENSE.GPL included in the
#** packaging of this file.  Please review the following information to
#** ensure the GNU General Public License version 3.0 requirements will be
#** met: http://www.gnu.org/copyleft/gpl.html.
#**
#**
#****************************************************************************/

TEMPLATE = app
TARGET = LeapMouseMouseArea

QT += quick qml

SOURCES += main.cpp

OTHER_FILES += main.qml

RESOURCES += resources.qrc

INCLUDEPATH += ../../QtLeapMotion/
INCLUDEPATH += ../../QtLeapMotion/Leap/include

# WORKS ONLY WITH QT COMPILED FOR MSVC
win32: {
 !contains(QMAKE_HOST.arch, x86_64) {
        message("x86 build")
        message($$OUT_PWD)
        LIBS += $$PWD/../../QtLeapMotion/Leap/x86/Leap.lib
        LIBS += $$OUT_PWD/../../QtLeapMotion/QtLeapMotion.lib
    } else {
        message("x86_64 build")
        LIBS += $$PWD/../../QtLeapMotion/Leap/x64/Leap.lib
        LIBS += $$OUT_PWD/../../QtLeapMotion/QtLeapMotion.lib
    }
}

linux-g++: {
    !contains(QMAKE_HOST.arch, x86_64) {
        LIBS += -L$$PWD/../../QtLeapMotion/Leap/x86/ -lLeap
        LIBS += -L$$OUT_PWD/../../QtLeapMotion/ -lQtLeapMotion
    } else {
        message("x86_64 build")
        LIBS += -L$$PWD/../../QtLeapMotion/Leap/x64/ -lLeap
        LIBS += -L$$OUT_PWD/../../QtLeapMotion/ -lQtLeapMotion
    }
}

macx{
        LIBS += -L$$OUT_PWD/../../QtLeapMotion/ -lQtLeapMotion
        LIBS += -L$$PWD/../../QtLeapMotion/Leap/lib -lLeap
}
