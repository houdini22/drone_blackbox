/****************************************************************************
** Meta object code from reading C++ file 'sendingarduino.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sendingarduino.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendingarduino.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SendingArduino_t {
    QByteArrayData data[8];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendingArduino_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendingArduino_t qt_meta_stringdata_SendingArduino = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SendingArduino"
QT_MOC_LITERAL(1, 15, 24), // "signalSendingDataChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 12), // "SendingData*"
QT_MOC_LITERAL(4, 54, 24), // "slotArduinoStatusChanged"
QT_MOC_LITERAL(5, 79, 20), // "slotArduinoConnected"
QT_MOC_LITERAL(6, 100, 11), // "SerialPort*"
QT_MOC_LITERAL(7, 112, 16) // "slotArduinoReset"

    },
    "SendingArduino\0signalSendingDataChanged\0"
    "\0SendingData*\0slotArduinoStatusChanged\0"
    "slotArduinoConnected\0SerialPort*\0"
    "slotArduinoReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendingArduino[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   37,    2, 0x0a /* Public */,
       5,    2,   42,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 6,    2,    2,
    QMetaType::Void,

       0        // eod
};

void SendingArduino::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendingArduino *_t = static_cast<SendingArduino *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSendingDataChanged((*reinterpret_cast< SendingData*(*)>(_a[1]))); break;
        case 1: _t->slotArduinoStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->slotArduinoConnected((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< SerialPort*(*)>(_a[2]))); break;
        case 3: _t->slotArduinoReset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SendingArduino::*)(SendingData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendingArduino::signalSendingDataChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SendingArduino::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SendingArduino.data,
      qt_meta_data_SendingArduino,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SendingArduino::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendingArduino::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendingArduino.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SendingInterface"))
        return static_cast< SendingInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int SendingArduino::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SendingArduino::signalSendingDataChanged(SendingData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
