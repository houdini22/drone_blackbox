/****************************************************************************
** Meta object code from reading C++ file 'sendingregistry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sendingregistry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendingregistry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SendingRegistry_t {
    QByteArrayData data[7];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendingRegistry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendingRegistry_t qt_meta_stringdata_SendingRegistry = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SendingRegistry"
QT_MOC_LITERAL(1, 16, 24), // "signalSendingDataChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "SendingData*"
QT_MOC_LITERAL(4, 55, 25), // "signalSendingsDataChanged"
QT_MOC_LITERAL(5, 81, 28), // "QHash<QString,SendingData*>*"
QT_MOC_LITERAL(6, 110, 22) // "slotSendingDataChanged"

    },
    "SendingRegistry\0signalSendingDataChanged\0"
    "\0SendingData*\0signalSendingsDataChanged\0"
    "QHash<QString,SendingData*>*\0"
    "slotSendingDataChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendingRegistry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void SendingRegistry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendingRegistry *_t = static_cast<SendingRegistry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSendingDataChanged((*reinterpret_cast< SendingData*(*)>(_a[1]))); break;
        case 1: _t->signalSendingsDataChanged((*reinterpret_cast< QHash<QString,SendingData*>*(*)>(_a[1]))); break;
        case 2: _t->slotSendingDataChanged((*reinterpret_cast< SendingData*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SendingRegistry::*)(SendingData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendingRegistry::signalSendingDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SendingRegistry::*)(QHash<QString,SendingData*> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendingRegistry::signalSendingsDataChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SendingRegistry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SendingRegistry.data,
      qt_meta_data_SendingRegistry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SendingRegistry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendingRegistry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendingRegistry.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SendingRegistry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SendingRegistry::signalSendingDataChanged(SendingData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SendingRegistry::signalSendingsDataChanged(QHash<QString,SendingData*> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
