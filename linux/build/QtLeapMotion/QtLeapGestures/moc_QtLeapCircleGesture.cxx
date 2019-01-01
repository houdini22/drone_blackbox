/****************************************************************************
** Meta object code from reading C++ file 'QtLeapCircleGesture.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtLeapMotion/QtLeapGestures/QtLeapCircleGesture.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtLeapCircleGesture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtLeapMotion__QtLeapCircleGesture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       7,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x05,
      50,   34,   34,   34, 0x05,
      66,   34,   34,   34, 0x05,
      82,   34,   34,   34, 0x05,
      98,   34,   34,   34, 0x05,
     113,   34,   34,   34, 0x05,

 // properties: name, type, flags
     136,  132, 0x02095001,
     144,  139, 0x01495001,
     164,  154, 0x54495001,
     171,  154, 0x54495001,
     184,  178, ((uint)QMetaType::QReal << 24) | 0x00495001,
     191,  178, ((uint)QMetaType::QReal << 24) | 0x00495001,
     210,  197, 0x00495009,

 // properties: notify_signal_id
       0,
       5,
       1,
       2,
       3,
       4,
       0,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

static const char qt_meta_stringdata_QtLeapMotion__QtLeapCircleGesture[] = {
    "QtLeapMotion::QtLeapCircleGesture\0\0"
    "stateChanged()\0centerChanged()\0"
    "normalChanged()\0radiusChanged()\0"
    "turnsChanged()\0clockwiseChanged()\0int\0"
    "id\0bool\0clockwise\0QVector3D\0center\0"
    "normal\0qreal\0radius\0turns\0GestureState\0"
    "state\0"
};

void QtLeapMotion::QtLeapCircleGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtLeapCircleGesture *_t = static_cast<QtLeapCircleGesture *>(_o);
        switch (_id) {
        case 0: _t->stateChanged(); break;
        case 1: _t->centerChanged(); break;
        case 2: _t->normalChanged(); break;
        case 3: _t->radiusChanged(); break;
        case 4: _t->turnsChanged(); break;
        case 5: _t->clockwiseChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QtLeapMotion::QtLeapCircleGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtLeapMotion::QtLeapCircleGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtLeapMotion__QtLeapCircleGesture,
      qt_meta_data_QtLeapMotion__QtLeapCircleGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtLeapMotion::QtLeapCircleGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtLeapMotion::QtLeapCircleGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtLeapMotion::QtLeapCircleGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__QtLeapCircleGesture))
        return static_cast<void*>(const_cast< QtLeapCircleGesture*>(this));
    if (!strcmp(_clname, "QtLeapGesture"))
        return static_cast< QtLeapGesture*>(const_cast< QtLeapCircleGesture*>(this));
    return QObject::qt_metacast(_clname);
}

int QtLeapMotion::QtLeapCircleGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = getId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = getClockwise(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = getCenter(); break;
        case 3: *reinterpret_cast< QVector3D*>(_v) = getNormal(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = getRadius(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = getTurns(); break;
        case 6: *reinterpret_cast< GestureState*>(_v) = getState(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtLeapMotion::QtLeapCircleGesture::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QtLeapMotion::QtLeapCircleGesture::centerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QtLeapMotion::QtLeapCircleGesture::normalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QtLeapMotion::QtLeapCircleGesture::radiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QtLeapMotion::QtLeapCircleGesture::turnsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QtLeapMotion::QtLeapCircleGesture::clockwiseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
