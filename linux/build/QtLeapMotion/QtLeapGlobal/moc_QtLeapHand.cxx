/****************************************************************************
** Meta object code from reading C++ file 'QtLeapHand.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtLeapMotion/QtLeapGlobal/QtLeapHand.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtLeapHand.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtLeapMotion__QtLeapHand[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      18,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      41,   25,   25,   25, 0x05,
      54,   25,   25,   25, 0x05,
      68,   25,   25,   25, 0x05,
      89,   25,   25,   25, 0x05,
     111,   25,   25,   25, 0x05,
     130,   25,   25,   25, 0x05,
     148,   25,   25,   25, 0x05,
     164,   25,   25,   25, 0x05,
     182,   25,   25,   25, 0x05,
     210,   25,   25,   25, 0x05,
     232,   25,   25,   25, 0x05,
     248,   25,   25,   25, 0x05,
     265,   25,   25,   25, 0x05,

 // properties: name, type, flags
     285,  281, 0x02095401,
     294,  288, 0x87495001,
     300,  288, 0x87495001,
     304,  288, 0x87495001,
     309,  288, 0x87495001,
     321,  288, 0x87495001,
     344,  334, 0x54495001,
     354,  334, 0x54495001,
     363,  334, 0x54495001,
     370,  334, 0x54495001,
     379,  334, 0x54495001,
     398,  334, 0x54495001,
     449,  411, 0x00095009,
     495,  460, 0x00095009,
     536,  503, 0x00095009,
     547,  542, 0x01495001,
     554,  542, 0x01495001,
     561,  542, 0x01495001,

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
       8,
       9,
      10,
       0,
       0,
       0,
      13,
      11,
      12,

       0        // eod
};

static const char qt_meta_stringdata_QtLeapMotion__QtLeapHand[] = {
    "QtLeapMotion::QtLeapHand\0\0pitchChanged()\0"
    "yawChanged()\0rollChanged()\0"
    "timeVisibleChanged()\0sphereRadiusChanged()\0"
    "directionChanged()\0positionChanged()\0"
    "normalChanged()\0velocityChanged()\0"
    "stabilizedPositionChanged()\0"
    "sphereCenterChanged()\0isLeftChanged()\0"
    "isRightChanged()\0isFistChanged()\0int\0"
    "id\0float\0pitch\0yaw\0roll\0timeVisible\0"
    "sphereRadius\0QVector3D\0direction\0"
    "position\0normal\0velocity\0stabilizedPosition\0"
    "sphereCenter\0QList<QtLeapMotion::QtLeapPointable*>\0"
    "pointables\0QList<QtLeapMotion::QtLeapFinger*>\0"
    "fingers\0QList<QtLeapMotion::QtLeapTool*>\0"
    "tools\0bool\0isFist\0isLeft\0isRight\0"
};

void QtLeapMotion::QtLeapHand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtLeapHand *_t = static_cast<QtLeapHand *>(_o);
        switch (_id) {
        case 0: _t->pitchChanged(); break;
        case 1: _t->yawChanged(); break;
        case 2: _t->rollChanged(); break;
        case 3: _t->timeVisibleChanged(); break;
        case 4: _t->sphereRadiusChanged(); break;
        case 5: _t->directionChanged(); break;
        case 6: _t->positionChanged(); break;
        case 7: _t->normalChanged(); break;
        case 8: _t->velocityChanged(); break;
        case 9: _t->stabilizedPositionChanged(); break;
        case 10: _t->sphereCenterChanged(); break;
        case 11: _t->isLeftChanged(); break;
        case 12: _t->isRightChanged(); break;
        case 13: _t->isFistChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QtLeapMotion::QtLeapHand::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtLeapMotion::QtLeapHand::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtLeapMotion__QtLeapHand,
      qt_meta_data_QtLeapMotion__QtLeapHand, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtLeapMotion::QtLeapHand::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtLeapMotion::QtLeapHand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtLeapMotion::QtLeapHand::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__QtLeapHand))
        return static_cast<void*>(const_cast< QtLeapHand*>(this));
    return QObject::qt_metacast(_clname);
}

int QtLeapMotion::QtLeapHand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = getId(); break;
        case 1: *reinterpret_cast< float*>(_v) = getPitch(); break;
        case 2: *reinterpret_cast< float*>(_v) = getYaw(); break;
        case 3: *reinterpret_cast< float*>(_v) = getRoll(); break;
        case 4: *reinterpret_cast< float*>(_v) = getTimeVisible(); break;
        case 5: *reinterpret_cast< float*>(_v) = getSphereRadius(); break;
        case 6: *reinterpret_cast< QVector3D*>(_v) = getDirection(); break;
        case 7: *reinterpret_cast< QVector3D*>(_v) = getPosition(); break;
        case 8: *reinterpret_cast< QVector3D*>(_v) = getNormal(); break;
        case 9: *reinterpret_cast< QVector3D*>(_v) = getVelocity(); break;
        case 10: *reinterpret_cast< QVector3D*>(_v) = getStabilizedPosition(); break;
        case 11: *reinterpret_cast< QVector3D*>(_v) = getSphereCenter(); break;
        case 12: *reinterpret_cast< QList<QtLeapMotion::QtLeapPointable*>*>(_v) = getPointables(); break;
        case 13: *reinterpret_cast< QList<QtLeapMotion::QtLeapFinger*>*>(_v) = getFingers(); break;
        case 14: *reinterpret_cast< QList<QtLeapMotion::QtLeapTool*>*>(_v) = getTools(); break;
        case 15: *reinterpret_cast< bool*>(_v) = isFist(); break;
        case 16: *reinterpret_cast< bool*>(_v) = isLeft(); break;
        case 17: *reinterpret_cast< bool*>(_v) = isRight(); break;
        }
        _id -= 18;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 18;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtLeapMotion::QtLeapHand::pitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QtLeapMotion::QtLeapHand::yawChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QtLeapMotion::QtLeapHand::rollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QtLeapMotion::QtLeapHand::timeVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QtLeapMotion::QtLeapHand::sphereRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QtLeapMotion::QtLeapHand::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QtLeapMotion::QtLeapHand::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QtLeapMotion::QtLeapHand::normalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QtLeapMotion::QtLeapHand::velocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void QtLeapMotion::QtLeapHand::stabilizedPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void QtLeapMotion::QtLeapHand::sphereCenterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void QtLeapMotion::QtLeapHand::isLeftChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void QtLeapMotion::QtLeapHand::isRightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void QtLeapMotion::QtLeapHand::isFistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}
QT_END_MOC_NAMESPACE
