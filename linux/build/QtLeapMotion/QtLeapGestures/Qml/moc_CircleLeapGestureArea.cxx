/****************************************************************************
** Meta object code from reading C++ file 'CircleLeapGestureArea.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtLeapMotion/QtLeapGestures/Qml/CircleLeapGestureArea.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CircleLeapGestureArea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtLeapMotion__CircleLeapGestureArea[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x05,
      67,   59,   36,   36, 0x05,
     118,   59,   36,   36, 0x05,
     169,   59,   36,   36, 0x05,

 // properties: name, type, flags
     260,  218, 0x00495009,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_QtLeapMotion__CircleLeapGestureArea[] = {
    "QtLeapMotion::CircleLeapGestureArea\0"
    "\0gesturesListChanged()\0gesture\0"
    "gestureStarted(QtLeapMotion::QtLeapCircleGesture*)\0"
    "gestureUpdated(QtLeapMotion::QtLeapCircleGesture*)\0"
    "gestureEnded(QtLeapMotion::QtLeapCircleGesture*)\0"
    "QList<QtLeapMotion::QtLeapCircleGesture*>\0"
    "gesturesList\0"
};

void QtLeapMotion::CircleLeapGestureArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CircleLeapGestureArea *_t = static_cast<CircleLeapGestureArea *>(_o);
        switch (_id) {
        case 0: _t->gesturesListChanged(); break;
        case 1: _t->gestureStarted((*reinterpret_cast< QtLeapMotion::QtLeapCircleGesture*(*)>(_a[1]))); break;
        case 2: _t->gestureUpdated((*reinterpret_cast< QtLeapMotion::QtLeapCircleGesture*(*)>(_a[1]))); break;
        case 3: _t->gestureEnded((*reinterpret_cast< QtLeapMotion::QtLeapCircleGesture*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtLeapMotion::CircleLeapGestureArea::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtLeapMotion::CircleLeapGestureArea::staticMetaObject = {
    { &AbstractGestureArea::staticMetaObject, qt_meta_stringdata_QtLeapMotion__CircleLeapGestureArea,
      qt_meta_data_QtLeapMotion__CircleLeapGestureArea, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtLeapMotion::CircleLeapGestureArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtLeapMotion::CircleLeapGestureArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtLeapMotion::CircleLeapGestureArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__CircleLeapGestureArea))
        return static_cast<void*>(const_cast< CircleLeapGestureArea*>(this));
    return AbstractGestureArea::qt_metacast(_clname);
}

int QtLeapMotion::CircleLeapGestureArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractGestureArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QtLeapMotion::QtLeapCircleGesture*>*>(_v) = getGesturesList(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtLeapMotion::CircleLeapGestureArea::gesturesListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QtLeapMotion::CircleLeapGestureArea::gestureStarted(QtLeapMotion::QtLeapCircleGesture * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtLeapMotion::CircleLeapGestureArea::gestureUpdated(QtLeapMotion::QtLeapCircleGesture * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtLeapMotion::CircleLeapGestureArea::gestureEnded(QtLeapMotion::QtLeapCircleGesture * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
