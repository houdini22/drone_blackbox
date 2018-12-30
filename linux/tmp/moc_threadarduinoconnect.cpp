/****************************************************************************
** Meta object code from reading C++ file 'threadarduinoconnect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../threadarduinoconnect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadarduinoconnect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadArduinoConnect_t {
    QByteArrayData data[9];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadArduinoConnect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadArduinoConnect_t qt_meta_stringdata_ThreadArduinoConnect = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ThreadArduinoConnect"
QT_MOC_LITERAL(1, 21, 22), // "signalArduinoConnected"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "value"
QT_MOC_LITERAL(4, 51, 11), // "SerialPort*"
QT_MOC_LITERAL(5, 63, 7), // "arduino"
QT_MOC_LITERAL(6, 71, 22), // "slotSendingDataChanged"
QT_MOC_LITERAL(7, 94, 12), // "SendingData*"
QT_MOC_LITERAL(8, 107, 11) // "sendingData"

    },
    "ThreadArduinoConnect\0signalArduinoConnected\0"
    "\0value\0SerialPort*\0arduino\0"
    "slotSendingDataChanged\0SendingData*\0"
    "sendingData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadArduinoConnect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void ThreadArduinoConnect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThreadArduinoConnect *_t = static_cast<ThreadArduinoConnect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalArduinoConnected((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< SerialPort*(*)>(_a[2]))); break;
        case 1: _t->slotSendingDataChanged((*reinterpret_cast< SendingData*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThreadArduinoConnect::*)(bool , SerialPort * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoConnect::signalArduinoConnected)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThreadArduinoConnect::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThreadArduinoConnect.data,
      qt_meta_data_ThreadArduinoConnect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ThreadArduinoConnect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadArduinoConnect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadArduinoConnect.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ThreadArduinoConnect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ThreadArduinoConnect::signalArduinoConnected(bool _t1, SerialPort * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
