/****************************************************************************
** Meta object code from reading C++ file 'drone.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../drone.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drone.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Drone[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    7,    6,    6, 0x05,
      40,    6,    6,    6, 0x05,
      66,    6,    6,    6, 0x05,
     100,    6,    6,    6, 0x05,
     141,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
     197,    6,    6,    6, 0x08,
     219,    6,    6,    6, 0x08,
     258,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Drone[] = {
    "Drone\0\0modes\0signalModesChanged(Modes*)\0"
    "cameraFrameChanged(MyMat)\0"
    "handPositionChanged(HandPosition)\0"
    "signalSteeringDataChanged(SteeringData*)\0"
    "signalSendingsDataChanged(QHash<QString,SendingData*>*)\0"
    "setCameraFrame(MyMat)\0"
    "slotSteeringDataChanged(SteeringData*)\0"
    "slotSendingsDataChanged(QHash<QString,SendingData*>*)\0"
};

void Drone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Drone *_t = static_cast<Drone *>(_o);
        switch (_id) {
        case 0: _t->signalModesChanged((*reinterpret_cast< Modes*(*)>(_a[1]))); break;
        case 1: _t->cameraFrameChanged((*reinterpret_cast< MyMat(*)>(_a[1]))); break;
        case 2: _t->handPositionChanged((*reinterpret_cast< HandPosition(*)>(_a[1]))); break;
        case 3: _t->signalSteeringDataChanged((*reinterpret_cast< SteeringData*(*)>(_a[1]))); break;
        case 4: _t->signalSendingsDataChanged((*reinterpret_cast< QHash<QString,SendingData*>*(*)>(_a[1]))); break;
        case 5: _t->setCameraFrame((*reinterpret_cast< MyMat(*)>(_a[1]))); break;
        case 6: _t->slotSteeringDataChanged((*reinterpret_cast< SteeringData*(*)>(_a[1]))); break;
        case 7: _t->slotSendingsDataChanged((*reinterpret_cast< QHash<QString,SendingData*>*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Drone::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Drone::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Drone,
      qt_meta_data_Drone, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Drone::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Drone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Drone::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Drone))
        return static_cast<void*>(const_cast< Drone*>(this));
    return QObject::qt_metacast(_clname);
}

int Drone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Drone::signalModesChanged(Modes * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Drone::cameraFrameChanged(MyMat _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Drone::handPositionChanged(HandPosition _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Drone::signalSteeringDataChanged(SteeringData * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Drone::signalSendingsDataChanged(QHash<QString,SendingData*> * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
