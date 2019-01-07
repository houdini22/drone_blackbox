/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[419];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "slotModesChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "Modes*"
QT_MOC_LITERAL(4, 36, 5), // "modes"
QT_MOC_LITERAL(5, 42, 18), // "cameraFrameChanged"
QT_MOC_LITERAL(6, 61, 5), // "MyMat"
QT_MOC_LITERAL(7, 67, 15), // "setHandPosition"
QT_MOC_LITERAL(8, 83, 12), // "HandPosition"
QT_MOC_LITERAL(9, 96, 23), // "slotSteeringDataChanged"
QT_MOC_LITERAL(10, 120, 13), // "SteeringData*"
QT_MOC_LITERAL(11, 134, 23), // "slotSendingsDataChanged"
QT_MOC_LITERAL(12, 158, 28), // "QHash<QString,SendingData*>*"
QT_MOC_LITERAL(13, 187, 28), // "handleRadioSettingsTriggered"
QT_MOC_LITERAL(14, 216, 17), // "slotRefreshLabels"
QT_MOC_LITERAL(15, 234, 28), // "slotRadioMouseSendingToggled"
QT_MOC_LITERAL(16, 263, 36), // "slotRadioMouseSteeringEnabled..."
QT_MOC_LITERAL(17, 300, 23), // "slotRadioGamePad1Enable"
QT_MOC_LITERAL(18, 324, 23), // "slotRadioGamePad2Enable"
QT_MOC_LITERAL(19, 348, 33), // "handleArmingModeSettingsTrigg..."
QT_MOC_LITERAL(20, 382, 36) // "handleDisarmingModeSettingsTr..."

    },
    "MainWindow\0slotModesChanged\0\0Modes*\0"
    "modes\0cameraFrameChanged\0MyMat\0"
    "setHandPosition\0HandPosition\0"
    "slotSteeringDataChanged\0SteeringData*\0"
    "slotSendingsDataChanged\0"
    "QHash<QString,SendingData*>*\0"
    "handleRadioSettingsTriggered\0"
    "slotRefreshLabels\0slotRadioMouseSendingToggled\0"
    "slotRadioMouseSteeringEnabledToggled\0"
    "slotRadioGamePad1Enable\0slotRadioGamePad2Enable\0"
    "handleArmingModeSettingsTriggered\0"
    "handleDisarmingModeSettingsTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       5,    1,   82,    2, 0x0a /* Public */,
       7,    1,   85,    2, 0x0a /* Public */,
       9,    1,   88,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,
      13,    1,   94,    2, 0x0a /* Public */,
      14,    0,   97,    2, 0x0a /* Public */,
      15,    1,   98,    2, 0x0a /* Public */,
      16,    1,  101,    2, 0x0a /* Public */,
      17,    1,  104,    2, 0x0a /* Public */,
      18,    1,  107,    2, 0x0a /* Public */,
      19,    1,  110,    2, 0x0a /* Public */,
      20,    1,  113,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotModesChanged((*reinterpret_cast< Modes*(*)>(_a[1]))); break;
        case 1: _t->cameraFrameChanged((*reinterpret_cast< MyMat(*)>(_a[1]))); break;
        case 2: _t->setHandPosition((*reinterpret_cast< HandPosition(*)>(_a[1]))); break;
        case 3: _t->slotSteeringDataChanged((*reinterpret_cast< SteeringData*(*)>(_a[1]))); break;
        case 4: _t->slotSendingsDataChanged((*reinterpret_cast< QHash<QString,SendingData*>*(*)>(_a[1]))); break;
        case 5: _t->handleRadioSettingsTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slotRefreshLabels(); break;
        case 7: _t->slotRadioMouseSendingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slotRadioMouseSteeringEnabledToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->slotRadioGamePad1Enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->slotRadioGamePad2Enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->handleArmingModeSettingsTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->handleDisarmingModeSettingsTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MyMat >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
