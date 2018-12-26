/****************************************************************************
** Meta object code from reading C++ file 'QtLeapPointable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtLeapMotion/QtLeapGlobal/QtLeapPointable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtLeapPointable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtLeapMotion__QtLeapPointable_t {
    QByteArrayData data[25];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtLeapMotion__QtLeapPointable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtLeapMotion__QtLeapPointable_t qt_meta_stringdata_QtLeapMotion__QtLeapPointable = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QtLeapMotion::QtLeapPointable"
QT_MOC_LITERAL(1, 30, 15), // "hoveringChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 15), // "touchingChanged"
QT_MOC_LITERAL(4, 63, 12), // "widthChanged"
QT_MOC_LITERAL(5, 76, 13), // "lengthChanged"
QT_MOC_LITERAL(6, 90, 20), // "touchDistanceChanged"
QT_MOC_LITERAL(7, 111, 18), // "timeVisibleChanged"
QT_MOC_LITERAL(8, 130, 15), // "positionChanged"
QT_MOC_LITERAL(9, 146, 16), // "directionChanged"
QT_MOC_LITERAL(10, 163, 25), // "stabilizedPositionChanged"
QT_MOC_LITERAL(11, 189, 15), // "velocityChanged"
QT_MOC_LITERAL(12, 205, 2), // "id"
QT_MOC_LITERAL(13, 208, 8), // "hovering"
QT_MOC_LITERAL(14, 217, 8), // "touching"
QT_MOC_LITERAL(15, 226, 5), // "width"
QT_MOC_LITERAL(16, 232, 6), // "length"
QT_MOC_LITERAL(17, 239, 13), // "touchDistance"
QT_MOC_LITERAL(18, 253, 11), // "timeVisible"
QT_MOC_LITERAL(19, 265, 8), // "position"
QT_MOC_LITERAL(20, 274, 9), // "direction"
QT_MOC_LITERAL(21, 284, 8), // "velocity"
QT_MOC_LITERAL(22, 293, 18), // "stabilizedPosition"
QT_MOC_LITERAL(23, 312, 4), // "hand"
QT_MOC_LITERAL(24, 317, 25) // "QtLeapMotion::QtLeapHand*"

    },
    "QtLeapMotion::QtLeapPointable\0"
    "hoveringChanged\0\0touchingChanged\0"
    "widthChanged\0lengthChanged\0"
    "touchDistanceChanged\0timeVisibleChanged\0"
    "positionChanged\0directionChanged\0"
    "stabilizedPositionChanged\0velocityChanged\0"
    "id\0hovering\0touching\0width\0length\0"
    "touchDistance\0timeVisible\0position\0"
    "direction\0velocity\0stabilizedPosition\0"
    "hand\0QtLeapMotion::QtLeapHand*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtLeapMotion__QtLeapPointable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      12,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,
      10,    0,   72,    2, 0x06 /* Public */,
      11,    0,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00095401,
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::Bool, 0x00495001,
      15, QMetaType::Float, 0x00495001,
      16, QMetaType::Float, 0x00495001,
      17, QMetaType::Float, 0x00495001,
      18, QMetaType::Float, 0x00495001,
      19, QMetaType::QVector3D, 0x00495001,
      20, QMetaType::QVector3D, 0x00495001,
      21, QMetaType::QVector3D, 0x00495001,
      22, QMetaType::QVector3D, 0x00495001,
      23, 0x80000000 | 24, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       9,
       8,
       0,

       0        // eod
};

void QtLeapMotion::QtLeapPointable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtLeapPointable *_t = static_cast<QtLeapPointable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hoveringChanged(); break;
        case 1: _t->touchingChanged(); break;
        case 2: _t->widthChanged(); break;
        case 3: _t->lengthChanged(); break;
        case 4: _t->touchDistanceChanged(); break;
        case 5: _t->timeVisibleChanged(); break;
        case 6: _t->positionChanged(); break;
        case 7: _t->directionChanged(); break;
        case 8: _t->stabilizedPositionChanged(); break;
        case 9: _t->velocityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtLeapPointable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapPointable::hoveringChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtLeapPointable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapPointable::touchingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QtLeapPointable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapPointable::widthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QtLeapPointable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapPointable::lengthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QtLeapPointable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapPointable::touchDistanceChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QtLeapPointable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapPointable::timeVisibleChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QtLeapPointable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapPointable::positionChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QtLeapPointable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapPointable::directionChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QtLeapPointable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapPointable::stabilizedPositionChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QtLeapPointable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtLeapPointable::velocityChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QtLeapPointable *_t = static_cast<QtLeapPointable *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isHovering(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isTouching(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getWidth(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getLength(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getTouchDistance(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getTimeVisible(); break;
        case 7: *reinterpret_cast< QVector3D*>(_v) = _t->getPosition(); break;
        case 8: *reinterpret_cast< QVector3D*>(_v) = _t->getDirection(); break;
        case 9: *reinterpret_cast< QVector3D*>(_v) = _t->getVelocity(); break;
        case 10: *reinterpret_cast< QVector3D*>(_v) = _t->getStabilizedPosition(); break;
        case 11: *reinterpret_cast< QtLeapMotion::QtLeapHand**>(_v) = _t->getHand(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QtLeapMotion::QtLeapPointable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtLeapMotion__QtLeapPointable.data,
      qt_meta_data_QtLeapMotion__QtLeapPointable,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtLeapMotion::QtLeapPointable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtLeapMotion::QtLeapPointable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__QtLeapPointable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtLeapMotion::QtLeapPointable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtLeapMotion::QtLeapPointable::hoveringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtLeapMotion::QtLeapPointable::touchingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtLeapMotion::QtLeapPointable::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtLeapMotion::QtLeapPointable::lengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtLeapMotion::QtLeapPointable::touchDistanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtLeapMotion::QtLeapPointable::timeVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtLeapMotion::QtLeapPointable::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QtLeapMotion::QtLeapPointable::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QtLeapMotion::QtLeapPointable::stabilizedPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QtLeapMotion::QtLeapPointable::velocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
