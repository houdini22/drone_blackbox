/****************************************************************************
** Meta object code from reading C++ file 'threadarduinosend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "threadarduinosend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadarduinosend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadArduinoSend_t {
    QByteArrayData data[16];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadArduinoSend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadArduinoSend_t qt_meta_stringdata_ThreadArduinoSend = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ThreadArduinoSend"
QT_MOC_LITERAL(1, 18, 19), // "radioSendingChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "value"
QT_MOC_LITERAL(4, 45, 18), // "motorsArmedChanged"
QT_MOC_LITERAL(5, 64, 6), // "status"
QT_MOC_LITERAL(6, 71, 18), // "radioValuesChanged"
QT_MOC_LITERAL(7, 90, 5), // "leftX"
QT_MOC_LITERAL(8, 96, 5), // "leftY"
QT_MOC_LITERAL(9, 102, 6), // "rightX"
QT_MOC_LITERAL(10, 109, 6), // "rightY"
QT_MOC_LITERAL(11, 116, 19), // "throttleModeChanged"
QT_MOC_LITERAL(12, 136, 20), // "recordingModeChanged"
QT_MOC_LITERAL(13, 157, 18), // "playingModeChanged"
QT_MOC_LITERAL(14, 176, 14), // "recordItemDown"
QT_MOC_LITERAL(15, 191, 12) // "recordItemUp"

    },
    "ThreadArduinoSend\0radioSendingChanged\0"
    "\0value\0motorsArmedChanged\0status\0"
    "radioValuesChanged\0leftX\0leftY\0rightX\0"
    "rightY\0throttleModeChanged\0"
    "recordingModeChanged\0playingModeChanged\0"
    "recordItemDown\0recordItemUp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadArduinoSend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    4,   60,    2, 0x06 /* Public */,
      11,    1,   69,    2, 0x06 /* Public */,
      12,    1,   72,    2, 0x06 /* Public */,
      13,    1,   75,    2, 0x06 /* Public */,
      14,    0,   78,    2, 0x06 /* Public */,
      15,    0,   79,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ThreadArduinoSend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThreadArduinoSend *_t = static_cast<ThreadArduinoSend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->radioSendingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->motorsArmedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->radioValuesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->throttleModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->recordingModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->playingModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->recordItemDown(); break;
        case 7: _t->recordItemUp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThreadArduinoSend::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::radioSendingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThreadArduinoSend::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::motorsArmedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ThreadArduinoSend::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::radioValuesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ThreadArduinoSend::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::throttleModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ThreadArduinoSend::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::recordingModeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ThreadArduinoSend::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::playingModeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ThreadArduinoSend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::recordItemDown)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ThreadArduinoSend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::recordItemUp)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThreadArduinoSend::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThreadArduinoSend.data,
      qt_meta_data_ThreadArduinoSend,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ThreadArduinoSend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadArduinoSend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadArduinoSend.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ThreadArduinoSend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ThreadArduinoSend::radioSendingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ThreadArduinoSend::motorsArmedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ThreadArduinoSend::radioValuesChanged(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ThreadArduinoSend::throttleModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ThreadArduinoSend::recordingModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ThreadArduinoSend::playingModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ThreadArduinoSend::recordItemDown()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ThreadArduinoSend::recordItemUp()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
