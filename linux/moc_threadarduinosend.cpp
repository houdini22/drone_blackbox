/****************************************************************************
** Meta object code from reading C++ file 'threadarduinosend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "threadarduinosend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadarduinosend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadArduinoSend_t {
    QByteArrayData data[20];
    char stringdata0[266];
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
QT_MOC_LITERAL(15, 191, 12), // "recordItemUp"
QT_MOC_LITERAL(16, 204, 15), // "setRadioSending"
QT_MOC_LITERAL(17, 220, 14), // "setMotorsArmed"
QT_MOC_LITERAL(18, 235, 15), // "setThrottleMode"
QT_MOC_LITERAL(19, 251, 14) // "setRadioValues"

    },
    "ThreadArduinoSend\0radioSendingChanged\0"
    "\0value\0motorsArmedChanged\0status\0"
    "radioValuesChanged\0leftX\0leftY\0rightX\0"
    "rightY\0throttleModeChanged\0"
    "recordingModeChanged\0playingModeChanged\0"
    "recordItemDown\0recordItemUp\0setRadioSending\0"
    "setMotorsArmed\0setThrottleMode\0"
    "setRadioValues"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadArduinoSend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    4,   85,    2, 0x06 /* Public */,
      11,    1,   94,    2, 0x06 /* Public */,
      12,    1,   97,    2, 0x06 /* Public */,
      13,    1,  100,    2, 0x06 /* Public */,
      14,    0,  103,    2, 0x06 /* Public */,
      15,    0,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  105,    2, 0x0a /* Public */,
      17,    1,  108,    2, 0x0a /* Public */,
      18,    1,  111,    2, 0x0a /* Public */,
      19,    4,  114,    2, 0x0a /* Public */,
      19,    4,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    7,    8,    9,   10,

       0        // eod
};

void ThreadArduinoSend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThreadArduinoSend *_t = static_cast<ThreadArduinoSend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->radioSendingChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->motorsArmedChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->radioValuesChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->throttleModeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->recordingModeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->playingModeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->recordItemDown(); break;
        case 7: _t->recordItemUp(); break;
        case 8: _t->setRadioSending((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setMotorsArmed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setThrottleMode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setRadioValues((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 12: _t->setRadioValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ThreadArduinoSend::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::radioSendingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ThreadArduinoSend::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::motorsArmedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ThreadArduinoSend::*_t)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::radioValuesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ThreadArduinoSend::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::throttleModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ThreadArduinoSend::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::recordingModeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ThreadArduinoSend::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::playingModeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ThreadArduinoSend::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::recordItemDown)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (ThreadArduinoSend::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadArduinoSend::recordItemUp)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject ThreadArduinoSend::staticMetaObject = {
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
void ThreadArduinoSend::radioSendingChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ThreadArduinoSend::motorsArmedChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ThreadArduinoSend::radioValuesChanged(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ThreadArduinoSend::throttleModeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ThreadArduinoSend::recordingModeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ThreadArduinoSend::playingModeChanged(QString _t1)
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
