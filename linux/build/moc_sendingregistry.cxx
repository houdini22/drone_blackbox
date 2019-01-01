/****************************************************************************
** Meta object code from reading C++ file 'sendingregistry.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sendingregistry.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendingregistry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SendingRegistry[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      56,   16,   16,   16, 0x05,
     112,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     139,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SendingRegistry[] = {
    "SendingRegistry\0\0"
    "signalSendingDataChanged(SendingData*)\0"
    "signalSendingsDataChanged(QHash<QString,SendingData*>*)\0"
    "signalModesChanged(Modes*)\0"
    "slotSendingDataChanged(SendingData*)\0"
};

void SendingRegistry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SendingRegistry *_t = static_cast<SendingRegistry *>(_o);
        switch (_id) {
        case 0: _t->signalSendingDataChanged((*reinterpret_cast< SendingData*(*)>(_a[1]))); break;
        case 1: _t->signalSendingsDataChanged((*reinterpret_cast< QHash<QString,SendingData*>*(*)>(_a[1]))); break;
        case 2: _t->signalModesChanged((*reinterpret_cast< Modes*(*)>(_a[1]))); break;
        case 3: _t->slotSendingDataChanged((*reinterpret_cast< SendingData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SendingRegistry::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SendingRegistry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SendingRegistry,
      qt_meta_data_SendingRegistry, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SendingRegistry::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SendingRegistry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SendingRegistry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendingRegistry))
        return static_cast<void*>(const_cast< SendingRegistry*>(this));
    return QObject::qt_metacast(_clname);
}

int SendingRegistry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SendingRegistry::signalSendingDataChanged(SendingData * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SendingRegistry::signalSendingsDataChanged(QHash<QString,SendingData*> * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SendingRegistry::signalModesChanged(Modes * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
