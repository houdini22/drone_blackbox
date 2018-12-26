/****************************************************************************
** Meta object code from reading C++ file 'QtLeapTapGesture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtLeapMotion/QtLeapGestures/QtLeapTapGesture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtLeapTapGesture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtLeapMotion__QtLeapTapGesture_t {
    QByteArrayData data[10];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtLeapMotion__QtLeapTapGesture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtLeapMotion__QtLeapTapGesture_t qt_meta_stringdata_QtLeapMotion__QtLeapTapGesture = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QtLeapMotion::QtLeapTapGesture"
QT_MOC_LITERAL(1, 31, 16), // "directionChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 15), // "positionChanged"
QT_MOC_LITERAL(4, 65, 12), // "stateChanged"
QT_MOC_LITERAL(5, 78, 2), // "id"
QT_MOC_LITERAL(6, 81, 9), // "direction"
QT_MOC_LITERAL(7, 91, 8), // "position"
QT_MOC_LITERAL(8, 100, 5), // "state"
QT_MOC_LITERAL(9, 106, 12) // "GestureState"

    },
    "QtLeapMotion::QtLeapTapGesture\0"
    "directionChanged\0\0positionChanged\0"
    "stateChanged\0id\0direction\0position\0"
    "state\0GestureState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtLeapMotion__QtLeapTapGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00095001,
       6, QMetaType::QVector3D, 0x00495001,
       7, QMetaType::QVector3D, 0x00495001,
       8, 0x80000000 | 9, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void QtLeapMotion::QtLeapTapGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtLeapTapGesture *_t = static_cast<QtLeapTapGesture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->directionChanged(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->stateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtLeapTapGesture::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapTapGesture::directionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtLeapTapGesture::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapTapGesture::positionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QtLeapTapGesture::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapTapGesture::stateChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QtLeapTapGesture *_t = static_cast<QtLeapTapGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getId(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = _t->getDirection(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->getPosition(); break;
        case 3: *reinterpret_cast< GestureState*>(_v) = _t->getState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QtLeapMotion::QtLeapTapGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtLeapMotion__QtLeapTapGesture.data,
      qt_meta_data_QtLeapMotion__QtLeapTapGesture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtLeapMotion::QtLeapTapGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtLeapMotion::QtLeapTapGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__QtLeapTapGesture.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QtLeapGesture"))
        return static_cast< QtLeapGesture*>(this);
    return QObject::qt_metacast(_clname);
}

int QtLeapMotion::QtLeapTapGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtLeapMotion::QtLeapTapGesture::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtLeapMotion::QtLeapTapGesture::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtLeapMotion::QtLeapTapGesture::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
