/****************************************************************************
** Meta object code from reading C++ file 'threadgamepadupdate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../threadgamepadupdate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadgamepadupdate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadGamepadUpdate_t {
    QByteArrayData data[7];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadGamepadUpdate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadGamepadUpdate_t qt_meta_stringdata_ThreadGamepadUpdate = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ThreadGamepadUpdate"
QT_MOC_LITERAL(1, 20, 20), // "signalButtonsChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 14), // "ButtonsPressed"
QT_MOC_LITERAL(4, 57, 7), // "buttons"
QT_MOC_LITERAL(5, 65, 23), // "slotSteeringDataChanged"
QT_MOC_LITERAL(6, 89, 13) // "SteeringData*"

    },
    "ThreadGamepadUpdate\0signalButtonsChanged\0"
    "\0ButtonsPressed\0buttons\0slotSteeringDataChanged\0"
    "SteeringData*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadGamepadUpdate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

void ThreadGamepadUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThreadGamepadUpdate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalButtonsChanged((*reinterpret_cast< ButtonsPressed(*)>(_a[1]))); break;
        case 1: _t->slotSteeringDataChanged((*reinterpret_cast< SteeringData*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ButtonsPressed >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThreadGamepadUpdate::*)(ButtonsPressed );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadGamepadUpdate::signalButtonsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThreadGamepadUpdate::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_ThreadGamepadUpdate.data,
    qt_meta_data_ThreadGamepadUpdate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThreadGamepadUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadGamepadUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadGamepadUpdate.stringdata0))
        return static_cast<void*>(this);
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ThreadGamepadUpdate::signalButtonsChanged(ButtonsPressed _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
