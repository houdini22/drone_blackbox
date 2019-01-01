/****************************************************************************
** Meta object code from reading C++ file 'QtLeapTapGesture.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtLeapMotion/QtLeapGestures/QtLeapTapGesture.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtLeapTapGesture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtLeapMotion__QtLeapTapGesture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x05,
      51,   31,   31,   31, 0x05,
      69,   31,   31,   31, 0x05,

 // properties: name, type, flags
      88,   84, 0x02095001,
     101,   91, 0x54495001,
     111,   91, 0x54495001,
     133,  120, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

static const char qt_meta_stringdata_QtLeapMotion__QtLeapTapGesture[] = {
    "QtLeapMotion::QtLeapTapGesture\0\0"
    "directionChanged()\0positionChanged()\0"
    "stateChanged()\0int\0id\0QVector3D\0"
    "direction\0position\0GestureState\0state\0"
};

void QtLeapMotion::QtLeapTapGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtLeapTapGesture *_t = static_cast<QtLeapTapGesture *>(_o);
        switch (_id) {
        case 0: _t->directionChanged(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->stateChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QtLeapMotion::QtLeapTapGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtLeapMotion::QtLeapTapGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtLeapMotion__QtLeapTapGesture,
      qt_meta_data_QtLeapMotion__QtLeapTapGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtLeapMotion::QtLeapTapGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtLeapMotion::QtLeapTapGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtLeapMotion::QtLeapTapGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__QtLeapTapGesture))
        return static_cast<void*>(const_cast< QtLeapTapGesture*>(this));
    if (!strcmp(_clname, "QtLeapGesture"))
        return static_cast< QtLeapGesture*>(const_cast< QtLeapTapGesture*>(this));
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
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = getId(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = getDirection(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = getPosition(); break;
        case 3: *reinterpret_cast< GestureState*>(_v) = getState(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
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
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QtLeapMotion::QtLeapTapGesture::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QtLeapMotion::QtLeapTapGesture::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
