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
    QByteArrayData data[26];
    char stringdata0[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Drone_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Drone_t qt_meta_stringdata_Drone = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Drone"
QT_MOC_LITERAL(1, 6, 18), // "signalModesChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "Modes*"
QT_MOC_LITERAL(4, 33, 5), // "modes"
QT_MOC_LITERAL(5, 39, 18), // "radioValuesChanged"
QT_MOC_LITERAL(6, 58, 5), // "leftX"
QT_MOC_LITERAL(7, 64, 5), // "leftY"
QT_MOC_LITERAL(8, 70, 6), // "rightX"
QT_MOC_LITERAL(9, 77, 6), // "rightY"
QT_MOC_LITERAL(10, 84, 18), // "recordFilesChanged"
QT_MOC_LITERAL(11, 103, 11), // "RecordsList"
QT_MOC_LITERAL(12, 115, 4), // "list"
QT_MOC_LITERAL(13, 120, 14), // "startRecording"
QT_MOC_LITERAL(14, 135, 4), // "name"
QT_MOC_LITERAL(15, 140, 18), // "cameraFrameChanged"
QT_MOC_LITERAL(16, 159, 5), // "MyMat"
QT_MOC_LITERAL(17, 165, 19), // "handPositionChanged"
QT_MOC_LITERAL(18, 185, 12), // "HandPosition"
QT_MOC_LITERAL(19, 198, 26), // "signalSteeringsDataChanged"
QT_MOC_LITERAL(20, 225, 29), // "QHash<QString,SteeringData*>*"
QT_MOC_LITERAL(21, 255, 25), // "signalSendingsDataChanged"
QT_MOC_LITERAL(22, 281, 28), // "QHash<QString,SendingData*>*"
QT_MOC_LITERAL(23, 310, 14), // "setCameraFrame"
QT_MOC_LITERAL(24, 325, 24), // "slotSteeringsDataChanged"
QT_MOC_LITERAL(25, 350, 23) // "slotSendingsDataChanged"

    },
    "Drone\0signalModesChanged\0\0Modes*\0modes\0"
    "radioValuesChanged\0leftX\0leftY\0rightX\0"
    "rightY\0recordFilesChanged\0RecordsList\0"
    "list\0startRecording\0name\0cameraFrameChanged\0"
    "MyMat\0handPositionChanged\0HandPosition\0"
    "signalSteeringsDataChanged\0"
    "QHash<QString,SteeringData*>*\0"
    "signalSendingsDataChanged\0"
    "QHash<QString,SendingData*>*\0"
    "setCameraFrame\0slotSteeringsDataChanged\0"
    "slotSendingsDataChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Drone[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    4,   72,    2, 0x06 /* Public */,
      10,    1,   81,    2, 0x06 /* Public */,
      13,    1,   84,    2, 0x06 /* Public */,
      15,    1,   87,    2, 0x06 /* Public */,
      17,    1,   90,    2, 0x06 /* Public */,
      19,    1,   93,    2, 0x06 /* Public */,
      21,    1,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    1,   99,    2, 0x08 /* Private */,
      24,    1,  102,    2, 0x08 /* Private */,
      25,    1,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 22,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 22,    2,

       0        // eod
};

void Drone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Drone *_t = static_cast<Drone *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalModesChanged((*reinterpret_cast< Modes*(*)>(_a[1]))); break;
        case 1: _t->radioValuesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->recordFilesChanged((*reinterpret_cast< RecordsList(*)>(_a[1]))); break;
        case 3: _t->startRecording((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->cameraFrameChanged((*reinterpret_cast< MyMat(*)>(_a[1]))); break;
        case 5: _t->handPositionChanged((*reinterpret_cast< HandPosition(*)>(_a[1]))); break;
        case 6: _t->signalSteeringsDataChanged((*reinterpret_cast< QHash<QString,SteeringData*>*(*)>(_a[1]))); break;
        case 7: _t->signalSendingsDataChanged((*reinterpret_cast< QHash<QString,SendingData*>*(*)>(_a[1]))); break;
        case 8: _t->setCameraFrame((*reinterpret_cast< MyMat(*)>(_a[1]))); break;
        case 9: _t->slotSteeringsDataChanged((*reinterpret_cast< QHash<QString,SteeringData*>*(*)>(_a[1]))); break;
        case 10: _t->slotSendingsDataChanged((*reinterpret_cast< QHash<QString,SendingData*>*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MyMat >(); break;
            }
            break;
        case 8:
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
            using _t = void (Drone::*)(Modes * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::signalModesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Drone::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::radioValuesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Drone::*)(RecordsList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::recordFilesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Drone::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::startRecording)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Drone::*)(MyMat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::cameraFrameChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Drone::*)(HandPosition );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::handPositionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Drone::*)(QHash<QString,SteeringData*> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::signalSteeringsDataChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Drone::*)(QHash<QString,SendingData*> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drone::signalSendingsDataChanged)) {
                *result = 7;
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Drone::signalModesChanged(Modes * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Drone::radioValuesChanged(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Drone::recordFilesChanged(RecordsList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Drone::startRecording(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Drone::cameraFrameChanged(MyMat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Drone::handPositionChanged(HandPosition _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Drone::signalSteeringsDataChanged(QHash<QString,SteeringData*> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Drone::signalSendingsDataChanged(QHash<QString,SendingData*> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
