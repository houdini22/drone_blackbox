/****************************************************************************
** Meta object code from reading C++ file 'threadgamepadupdate.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../threadgamepadupdate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadgamepadupdate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ThreadGamepadUpdate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ThreadGamepadUpdate[] = {
    "ThreadGamepadUpdate\0\0buttons\0"
    "signalButtonsChanged(ButtonsPressed)\0"
    "slotSteeringDataChanged(SteeringData*)\0"
};

void ThreadGamepadUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ThreadGamepadUpdate *_t = static_cast<ThreadGamepadUpdate *>(_o);
        switch (_id) {
        case 0: _t->signalButtonsChanged((*reinterpret_cast< ButtonsPressed(*)>(_a[1]))); break;
        case 1: _t->slotSteeringDataChanged((*reinterpret_cast< SteeringData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ThreadGamepadUpdate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ThreadGamepadUpdate::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThreadGamepadUpdate,
      qt_meta_data_ThreadGamepadUpdate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ThreadGamepadUpdate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ThreadGamepadUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ThreadGamepadUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadGamepadUpdate))
        return static_cast<void*>(const_cast< ThreadGamepadUpdate*>(this));
    return QThread::qt_metacast(_clname);
}

int ThreadGamepadUpdate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ThreadGamepadUpdate::signalButtonsChanged(ButtonsPressed _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
