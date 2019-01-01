/****************************************************************************
** Meta object code from reading C++ file 'QtLeapSwipeGesture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtLeapMotion/QtLeapGestures/QtLeapSwipeGesture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtLeapSwipeGesture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtLeapMotion__QtLeapSwipeGesture_t {
    QByteArrayData data[14];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtLeapMotion__QtLeapSwipeGesture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtLeapMotion__QtLeapSwipeGesture_t qt_meta_stringdata_QtLeapMotion__QtLeapSwipeGesture = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QtLeapMotion::QtLeapSwipeGesture"
QT_MOC_LITERAL(1, 33, 16), // "directionChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 15), // "positionChanged"
QT_MOC_LITERAL(4, 67, 20), // "startPositionChanged"
QT_MOC_LITERAL(5, 88, 12), // "speedChanged"
QT_MOC_LITERAL(6, 101, 12), // "stateChanged"
QT_MOC_LITERAL(7, 114, 2), // "id"
QT_MOC_LITERAL(8, 117, 9), // "direction"
QT_MOC_LITERAL(9, 127, 8), // "position"
QT_MOC_LITERAL(10, 136, 13), // "startPosition"
QT_MOC_LITERAL(11, 150, 5), // "speed"
QT_MOC_LITERAL(12, 156, 5), // "state"
QT_MOC_LITERAL(13, 162, 12) // "GestureState"

    },
    "QtLeapMotion::QtLeapSwipeGesture\0"
    "directionChanged\0\0positionChanged\0"
    "startPositionChanged\0speedChanged\0"
    "stateChanged\0id\0direction\0position\0"
    "startPosition\0speed\0state\0GestureState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtLeapMotion__QtLeapSwipeGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00095001,
       8, QMetaType::QVector3D, 0x00495001,
       9, QMetaType::QVector3D, 0x00495001,
      10, QMetaType::QVector3D, 0x00495001,
      11, QMetaType::QReal, 0x00495001,
      12, 0x80000000 | 13, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       4,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void QtLeapMotion::QtLeapSwipeGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtLeapSwipeGesture *_t = static_cast<QtLeapSwipeGesture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->directionChanged(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->startPositionChanged(); break;
        case 3: _t->speedChanged(); break;
        case 4: _t->stateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtLeapSwipeGesture::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapSwipeGesture::directionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtLeapSwipeGesture::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapSwipeGesture::positionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QtLeapSwipeGesture::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapSwipeGesture::startPositionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QtLeapSwipeGesture::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapSwipeGesture::speedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QtLeapSwipeGesture::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapSwipeGesture::stateChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QtLeapSwipeGesture *_t = static_cast<QtLeapSwipeGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getId(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = _t->getDirection(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->getPosition(); break;
        case 3: *reinterpret_cast< QVector3D*>(_v) = _t->getStartPosition(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->getSpeed(); break;
        case 5: *reinterpret_cast< GestureState*>(_v) = _t->getState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QtLeapMotion::QtLeapSwipeGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtLeapMotion__QtLeapSwipeGesture.data,
      qt_meta_data_QtLeapMotion__QtLeapSwipeGesture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtLeapMotion::QtLeapSwipeGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtLeapMotion::QtLeapSwipeGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__QtLeapSwipeGesture.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QtLeapGesture"))
        return static_cast< QtLeapGesture*>(this);
    return QObject::qt_metacast(_clname);
}

int QtLeapMotion::QtLeapSwipeGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtLeapMotion::QtLeapSwipeGesture::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtLeapMotion::QtLeapSwipeGesture::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtLeapMotion::QtLeapSwipeGesture::startPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtLeapMotion::QtLeapSwipeGesture::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtLeapMotion::QtLeapSwipeGesture::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
