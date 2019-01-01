/****************************************************************************
** Meta object code from reading C++ file 'QtLeapPointable.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtLeapMotion/QtLeapGlobal/QtLeapPointable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtLeapPointable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtLeapMotion__QtLeapPointable[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      12,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,
      49,   30,   30,   30, 0x05,
      67,   30,   30,   30, 0x05,
      82,   30,   30,   30, 0x05,
      98,   30,   30,   30, 0x05,
     121,   30,   30,   30, 0x05,
     142,   30,   30,   30, 0x05,
     160,   30,   30,   30, 0x05,
     179,   30,   30,   30, 0x05,
     207,   30,   30,   30, 0x05,

 // properties: name, type, flags
     229,  225, 0x02095401,
     237,  232, 0x01495001,
     246,  232, 0x01495001,
     261,  255, 0x87495001,
     267,  255, 0x87495001,
     274,  255, 0x87495001,
     288,  255, 0x87495001,
     310,  300, 0x54495001,
     319,  300, 0x54495001,
     329,  300, 0x54495001,
     338,  300, 0x54495001,
     383,  357, 0x00095409,

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

static const char qt_meta_stringdata_QtLeapMotion__QtLeapPointable[] = {
    "QtLeapMotion::QtLeapPointable\0\0"
    "hoveringChanged()\0touchingChanged()\0"
    "widthChanged()\0lengthChanged()\0"
    "touchDistanceChanged()\0timeVisibleChanged()\0"
    "positionChanged()\0directionChanged()\0"
    "stabilizedPositionChanged()\0"
    "velocityChanged()\0int\0id\0bool\0hovering\0"
    "touching\0float\0width\0length\0touchDistance\0"
    "timeVisible\0QVector3D\0position\0direction\0"
    "velocity\0stabilizedPosition\0"
    "QtLeapMotion::QtLeapHand*\0hand\0"
};

void QtLeapMotion::QtLeapPointable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtLeapPointable *_t = static_cast<QtLeapPointable *>(_o);
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
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QtLeapMotion::QtLeapPointable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtLeapMotion::QtLeapPointable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtLeapMotion__QtLeapPointable,
      qt_meta_data_QtLeapMotion__QtLeapPointable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtLeapMotion::QtLeapPointable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtLeapMotion::QtLeapPointable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtLeapMotion::QtLeapPointable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__QtLeapPointable))
        return static_cast<void*>(const_cast< QtLeapPointable*>(this));
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
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = getId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isHovering(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isTouching(); break;
        case 3: *reinterpret_cast< float*>(_v) = getWidth(); break;
        case 4: *reinterpret_cast< float*>(_v) = getLength(); break;
        case 5: *reinterpret_cast< float*>(_v) = getTouchDistance(); break;
        case 6: *reinterpret_cast< float*>(_v) = getTimeVisible(); break;
        case 7: *reinterpret_cast< QVector3D*>(_v) = getPosition(); break;
        case 8: *reinterpret_cast< QVector3D*>(_v) = getDirection(); break;
        case 9: *reinterpret_cast< QVector3D*>(_v) = getVelocity(); break;
        case 10: *reinterpret_cast< QVector3D*>(_v) = getStabilizedPosition(); break;
        case 11: *reinterpret_cast< QtLeapMotion::QtLeapHand**>(_v) = getHand(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
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
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QtLeapMotion::QtLeapPointable::touchingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QtLeapMotion::QtLeapPointable::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QtLeapMotion::QtLeapPointable::lengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QtLeapMotion::QtLeapPointable::touchDistanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QtLeapMotion::QtLeapPointable::timeVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QtLeapMotion::QtLeapPointable::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QtLeapMotion::QtLeapPointable::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QtLeapMotion::QtLeapPointable::stabilizedPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void QtLeapMotion::QtLeapPointable::velocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
