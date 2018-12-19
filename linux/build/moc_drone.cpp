/****************************************************************************
** Meta object code from reading C++ file 'drone.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../drone.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drone.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Drone_t {
    QByteArrayData data[26];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Drone_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Drone_t qt_meta_stringdata_Drone = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Drone"
QT_MOC_LITERAL(1, 6, 25), // "gamePadIsConnectedChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "value"
QT_MOC_LITERAL(4, 39, 20), // "gamePadValuesChanged"
QT_MOC_LITERAL(5, 60, 5), // "leftX"
QT_MOC_LITERAL(6, 66, 5), // "leftY"
QT_MOC_LITERAL(7, 72, 6), // "rightX"
QT_MOC_LITERAL(8, 79, 6), // "rightY"
QT_MOC_LITERAL(9, 86, 20), // "arduinoStatusChanged"
QT_MOC_LITERAL(10, 107, 11), // "modeChanged"
QT_MOC_LITERAL(11, 119, 5), // "Modes"
QT_MOC_LITERAL(12, 125, 5), // "modes"
QT_MOC_LITERAL(13, 131, 21), // "setGamePadIsConnected"
QT_MOC_LITERAL(14, 153, 16), // "setGamePadValues"
QT_MOC_LITERAL(15, 170, 7), // "Buttons"
QT_MOC_LITERAL(16, 178, 7), // "buttons"
QT_MOC_LITERAL(17, 186, 20), // "setArduinoIsDetected"
QT_MOC_LITERAL(18, 207, 21), // "setArduinoIsConnected"
QT_MOC_LITERAL(19, 229, 11), // "SerialPort*"
QT_MOC_LITERAL(20, 241, 7), // "arduino"
QT_MOC_LITERAL(21, 249, 22), // "setArduinoDeviceString"
QT_MOC_LITERAL(22, 272, 15), // "setRadioSending"
QT_MOC_LITERAL(23, 288, 12), // "arduinoReset"
QT_MOC_LITERAL(24, 301, 14), // "setRadioValues"
QT_MOC_LITERAL(25, 316, 14) // "setMotorsArmed"

    },
    "Drone\0gamePadIsConnectedChanged\0\0value\0"
    "gamePadValuesChanged\0leftX\0leftY\0"
    "rightX\0rightY\0arduinoStatusChanged\0"
    "modeChanged\0Modes\0modes\0setGamePadIsConnected\0"
    "setGamePadValues\0Buttons\0buttons\0"
    "setArduinoIsDetected\0setArduinoIsConnected\0"
    "SerialPort*\0arduino\0setArduinoDeviceString\0"
    "setRadioSending\0arduinoReset\0"
    "setRadioValues\0setMotorsArmed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Drone[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    4,   82,    2, 0x06 /* Public */,
       9,    1,   91,    2, 0x06 /* Public */,
      10,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   97,    2, 0x0a /* Public */,
      14,    1,  100,    2, 0x0a /* Public */,
      17,    1,  103,    2, 0x0a /* Public */,
      18,    2,  106,    2, 0x0a /* Public */,
      21,    1,  111,    2, 0x0a /* Public */,
      22,    1,  114,    2, 0x0a /* Public */,
      23,    0,  117,    2, 0x0a /* Public */,
      24,    4,  118,    2, 0x0a /* Public */,
      25,    1,  127,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 19,    3,   20,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void Drone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Drone *_t = static_cast<Drone *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gamePadIsConnectedChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->gamePadValuesChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->arduinoStatusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->modeChanged((*reinterpret_cast< Modes(*)>(_a[1]))); break;
        case 4: _t->setGamePadIsConnected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setGamePadValues((*reinterpret_cast< Buttons(*)>(_a[1]))); break;
        case 6: _t->setArduinoIsDetected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setArduinoIsConnected((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< SerialPort*(*)>(_a[2]))); break;
        case 8: _t->setArduinoDeviceString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setRadioSending((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->arduinoReset(); break;
        case 11: _t->setRadioValues((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 12: _t->setMotorsArmed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Drone::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::gamePadIsConnectedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Drone::*_t)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::gamePadValuesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Drone::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::arduinoStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Drone::*_t)(Modes );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::modeChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Drone::staticMetaObject = {
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Drone::gamePadIsConnectedChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Drone::gamePadValuesChanged(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
