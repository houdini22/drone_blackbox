/****************************************************************************
** Meta object code from reading C++ file 'drone.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../drone.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drone.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Drone_t {
    QByteArrayData data[50];
    char stringdata0[735];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Drone_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Drone_t qt_meta_stringdata_Drone = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Drone"
QT_MOC_LITERAL(1, 6, 24), // "signalGamepadIsConnected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "value"
QT_MOC_LITERAL(4, 38, 20), // "gamePadValuesChanged"
QT_MOC_LITERAL(5, 59, 14), // "ButtonsPressed"
QT_MOC_LITERAL(6, 74, 7), // "buttons"
QT_MOC_LITERAL(7, 82, 20), // "arduinoStatusChanged"
QT_MOC_LITERAL(8, 103, 11), // "modeChanged"
QT_MOC_LITERAL(9, 115, 5), // "Modes"
QT_MOC_LITERAL(10, 121, 5), // "modes"
QT_MOC_LITERAL(11, 127, 18), // "radioValuesChanged"
QT_MOC_LITERAL(12, 146, 5), // "leftX"
QT_MOC_LITERAL(13, 152, 5), // "leftY"
QT_MOC_LITERAL(14, 158, 6), // "rightX"
QT_MOC_LITERAL(15, 165, 6), // "rightY"
QT_MOC_LITERAL(16, 172, 18), // "recordFilesChanged"
QT_MOC_LITERAL(17, 191, 11), // "RecordsList"
QT_MOC_LITERAL(18, 203, 4), // "list"
QT_MOC_LITERAL(19, 208, 14), // "startRecording"
QT_MOC_LITERAL(20, 223, 4), // "name"
QT_MOC_LITERAL(21, 228, 18), // "cameraFrameChanged"
QT_MOC_LITERAL(22, 247, 5), // "MyMat"
QT_MOC_LITERAL(23, 253, 19), // "handPositionChanged"
QT_MOC_LITERAL(24, 273, 12), // "HandPosition"
QT_MOC_LITERAL(25, 286, 26), // "signalSteeringsDataChanged"
QT_MOC_LITERAL(26, 313, 29), // "QHash<QString,SteeringData*>*"
QT_MOC_LITERAL(27, 343, 25), // "signalSendingsDataChanged"
QT_MOC_LITERAL(28, 369, 28), // "QHash<QString,SendingData*>*"
QT_MOC_LITERAL(29, 398, 22), // "slotGamepadIsConnected"
QT_MOC_LITERAL(30, 421, 10), // "setButtons"
QT_MOC_LITERAL(31, 432, 14), // "setArduinoMode"
QT_MOC_LITERAL(32, 447, 21), // "setArduinoIsConnected"
QT_MOC_LITERAL(33, 469, 11), // "SerialPort*"
QT_MOC_LITERAL(34, 481, 7), // "arduino"
QT_MOC_LITERAL(35, 489, 22), // "setArduinoDeviceString"
QT_MOC_LITERAL(36, 512, 15), // "setRadioSending"
QT_MOC_LITERAL(37, 528, 12), // "arduinoReset"
QT_MOC_LITERAL(38, 541, 14), // "setRadioValues"
QT_MOC_LITERAL(39, 556, 14), // "setMotorsArmed"
QT_MOC_LITERAL(40, 571, 15), // "setThrottleMode"
QT_MOC_LITERAL(41, 587, 16), // "setRecordingMode"
QT_MOC_LITERAL(42, 604, 14), // "setRecordFiles"
QT_MOC_LITERAL(43, 619, 20), // "setCanStartRecording"
QT_MOC_LITERAL(44, 640, 6), // "active"
QT_MOC_LITERAL(45, 647, 14), // "setPlayingMode"
QT_MOC_LITERAL(46, 662, 8), // "isActive"
QT_MOC_LITERAL(47, 671, 14), // "setCameraFrame"
QT_MOC_LITERAL(48, 686, 24), // "slotSteeringsDataChanged"
QT_MOC_LITERAL(49, 711, 23) // "slotSendingsDataChanged"

    },
    "Drone\0signalGamepadIsConnected\0\0value\0"
    "gamePadValuesChanged\0ButtonsPressed\0"
    "buttons\0arduinoStatusChanged\0modeChanged\0"
    "Modes\0modes\0radioValuesChanged\0leftX\0"
    "leftY\0rightX\0rightY\0recordFilesChanged\0"
    "RecordsList\0list\0startRecording\0name\0"
    "cameraFrameChanged\0MyMat\0handPositionChanged\0"
    "HandPosition\0signalSteeringsDataChanged\0"
    "QHash<QString,SteeringData*>*\0"
    "signalSendingsDataChanged\0"
    "QHash<QString,SendingData*>*\0"
    "slotGamepadIsConnected\0setButtons\0"
    "setArduinoMode\0setArduinoIsConnected\0"
    "SerialPort*\0arduino\0setArduinoDeviceString\0"
    "setRadioSending\0arduinoReset\0"
    "setRadioValues\0setMotorsArmed\0"
    "setThrottleMode\0setRecordingMode\0"
    "setRecordFiles\0setCanStartRecording\0"
    "active\0setPlayingMode\0isActive\0"
    "setCameraFrame\0slotSteeringsDataChanged\0"
    "slotSendingsDataChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Drone[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  154,    2, 0x06 /* Public */,
       4,    1,  157,    2, 0x06 /* Public */,
       7,    1,  160,    2, 0x06 /* Public */,
       8,    1,  163,    2, 0x06 /* Public */,
      11,    4,  166,    2, 0x06 /* Public */,
      16,    1,  175,    2, 0x06 /* Public */,
      19,    1,  178,    2, 0x06 /* Public */,
      21,    1,  181,    2, 0x06 /* Public */,
      23,    1,  184,    2, 0x06 /* Public */,
      25,    1,  187,    2, 0x06 /* Public */,
      27,    1,  190,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      29,    1,  193,    2, 0x08 /* Private */,
      30,    1,  196,    2, 0x08 /* Private */,
      31,    1,  199,    2, 0x08 /* Private */,
      32,    2,  202,    2, 0x08 /* Private */,
      35,    1,  207,    2, 0x08 /* Private */,
      36,    1,  210,    2, 0x08 /* Private */,
      37,    0,  213,    2, 0x08 /* Private */,
      38,    4,  214,    2, 0x08 /* Private */,
      39,    1,  223,    2, 0x08 /* Private */,
      40,    1,  226,    2, 0x08 /* Private */,
      41,    1,  229,    2, 0x08 /* Private */,
      42,    1,  232,    2, 0x08 /* Private */,
      43,    1,  235,    2, 0x08 /* Private */,
      45,    1,  238,    2, 0x08 /* Private */,
      47,    1,  241,    2, 0x08 /* Private */,
      48,    1,  244,    2, 0x08 /* Private */,
      49,    1,  247,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, 0x80000000 | 28,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 33,    3,   34,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, 0x80000000 | 28,    2,

       0        // eod
};

void Drone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Drone *_t = static_cast<Drone *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalGamepadIsConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->gamePadValuesChanged((*reinterpret_cast< ButtonsPressed(*)>(_a[1]))); break;
        case 2: _t->arduinoStatusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->modeChanged((*reinterpret_cast< Modes(*)>(_a[1]))); break;
        case 4: _t->radioValuesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->recordFilesChanged((*reinterpret_cast< RecordsList(*)>(_a[1]))); break;
        case 6: _t->startRecording((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->cameraFrameChanged((*reinterpret_cast< MyMat(*)>(_a[1]))); break;
        case 8: _t->handPositionChanged((*reinterpret_cast< HandPosition(*)>(_a[1]))); break;
        case 9: _t->signalSteeringsDataChanged((*reinterpret_cast< QHash<QString,SteeringData*>*(*)>(_a[1]))); break;
        case 10: _t->signalSendingsDataChanged((*reinterpret_cast< QHash<QString,SendingData*>*(*)>(_a[1]))); break;
        case 11: _t->slotGamepadIsConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setButtons((*reinterpret_cast< ButtonsPressed(*)>(_a[1]))); break;
        case 13: _t->setArduinoMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setArduinoIsConnected((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< SerialPort*(*)>(_a[2]))); break;
        case 15: _t->setArduinoDeviceString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->setRadioSending((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->arduinoReset(); break;
        case 18: _t->setRadioValues((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 19: _t->setMotorsArmed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->setThrottleMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setRecordingMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->setRecordFiles((*reinterpret_cast< RecordsList(*)>(_a[1]))); break;
        case 23: _t->setCanStartRecording((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->setPlayingMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setCameraFrame((*reinterpret_cast< MyMat(*)>(_a[1]))); break;
        case 26: _t->slotSteeringsDataChanged((*reinterpret_cast< QHash<QString,SteeringData*>*(*)>(_a[1]))); break;
        case 27: _t->slotSendingsDataChanged((*reinterpret_cast< QHash<QString,SendingData*>*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ButtonsPressed >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MyMat >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ButtonsPressed >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MyMat >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Drone::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::signalGamepadIsConnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Drone::*)(ButtonsPressed );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::gamePadValuesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Drone::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::arduinoStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Drone::*)(Modes );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::modeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Drone::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::radioValuesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Drone::*)(RecordsList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::recordFilesChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Drone::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::startRecording)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Drone::*)(MyMat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::cameraFrameChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Drone::*)(HandPosition );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::handPositionChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Drone::*)(QHash<QString,SteeringData*> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::signalSteeringsDataChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Drone::*)(QHash<QString,SendingData*> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::signalSendingsDataChanged)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Drone::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Drone.data,
      qt_meta_data_Drone,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Drone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Drone::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Drone.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Drone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void Drone::signalGamepadIsConnected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Drone::gamePadValuesChanged(ButtonsPressed _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Drone::arduinoStatusChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Drone::modeChanged(Modes _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Drone::radioValuesChanged(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Drone::recordFilesChanged(RecordsList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Drone::startRecording(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Drone::cameraFrameChanged(MyMat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Drone::handPositionChanged(HandPosition _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Drone::signalSteeringsDataChanged(QHash<QString,SteeringData*> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Drone::signalSendingsDataChanged(QHash<QString,SendingData*> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
