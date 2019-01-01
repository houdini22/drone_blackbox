/****************************************************************************
** Meta object code from reading C++ file 'QtLeapSwipeGesture.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtLeapMotion/QtLeapGestures/QtLeapSwipeGesture.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtLeapSwipeGesture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtLeapMotion__QtLeapSwipeGesture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x05,
      53,   33,   33,   33, 0x05,
      71,   33,   33,   33, 0x05,
      94,   33,   33,   33, 0x05,
     109,   33,   33,   33, 0x05,

 // properties: name, type, flags
     128,  124, 0x02095001,
     141,  131, 0x54495001,
     151,  131, 0x54495001,
     160,  131, 0x54495001,
     180,  174, ((uint)QMetaType::QReal << 24) | 0x00495001,
     199,  186, 0x00495009,

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

static const char qt_meta_stringdata_QtLeapMotion__QtLeapSwipeGesture[] = {
    "QtLeapMotion::QtLeapSwipeGesture\0\0"
    "directionChanged()\0positionChanged()\0"
    "startPositionChanged()\0speedChanged()\0"
    "stateChanged()\0int\0id\0QVector3D\0"
    "direction\0position\0startPosition\0qreal\0"
    "speed\0GestureState\0state\0"
};

void QtLeapMotion::QtLeapSwipeGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtLeapSwipeGesture *_t = static_cast<QtLeapSwipeGesture *>(_o);
        switch (_id) {
        case 0: _t->directionChanged(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->startPositionChanged(); break;
        case 3: _t->speedChanged(); break;
        case 4: _t->stateChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QtLeapMotion::QtLeapSwipeGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtLeapMotion::QtLeapSwipeGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtLeapMotion__QtLeapSwipeGesture,
      qt_meta_data_QtLeapMotion__QtLeapSwipeGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtLeapMotion::QtLeapSwipeGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtLeapMotion::QtLeapSwipeGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtLeapMotion::QtLeapSwipeGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__QtLeapSwipeGesture))
        return static_cast<void*>(const_cast< QtLeapSwipeGesture*>(this));
    if (!strcmp(_clname, "QtLeapGesture"))
        return static_cast< QtLeapGesture*>(const_cast< QtLeapSwipeGesture*>(this));
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
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = getId(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = getDirection(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = getPosition(); break;
        case 3: *reinterpret_cast< QVector3D*>(_v) = getStartPosition(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = getSpeed(); break;
        case 5: *reinterpret_cast< GestureState*>(_v) = getState(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
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
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QtLeapMotion::QtLeapSwipeGesture::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QtLeapMotion::QtLeapSwipeGesture::startPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QtLeapMotion::QtLeapSwipeGesture::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QtLeapMotion::QtLeapSwipeGesture::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
