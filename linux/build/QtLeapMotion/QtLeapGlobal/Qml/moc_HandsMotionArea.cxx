/****************************************************************************
** Meta object code from reading C++ file 'HandsMotionArea.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtLeapMotion/QtLeapGlobal/Qml/HandsMotionArea.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HandsMotionArea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtLeapMotion__HandsMotionArea[] = {

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
      36,   31,   30,   30, 0x05,
      75,   31,   30,   30, 0x05,
     112,   31,   30,   30, 0x05,
     151,   30,   30,   30, 0x05,

 // properties: name, type, flags
     199,  166, 0x00495009,

 // properties: notify_signal_id
       3,

       0        // eod
};

static const char qt_meta_stringdata_QtLeapMotion__HandsMotionArea[] = {
    "QtLeapMotion::HandsMotionArea\0\0hand\0"
    "handUpdated(QtLeapMotion::QtLeapHand*)\0"
    "handAdded(QtLeapMotion::QtLeapHand*)\0"
    "handRemoved(QtLeapMotion::QtLeapHand*)\0"
    "handsChanged()\0QList<QtLeapMotion::QtLeapHand*>\0"
    "hands\0"
};

void QtLeapMotion::HandsMotionArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HandsMotionArea *_t = static_cast<HandsMotionArea *>(_o);
        switch (_id) {
        case 0: _t->handUpdated((*reinterpret_cast< QtLeapMotion::QtLeapHand*(*)>(_a[1]))); break;
        case 1: _t->handAdded((*reinterpret_cast< QtLeapMotion::QtLeapHand*(*)>(_a[1]))); break;
        case 2: _t->handRemoved((*reinterpret_cast< QtLeapMotion::QtLeapHand*(*)>(_a[1]))); break;
        case 3: _t->handsChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtLeapMotion::HandsMotionArea::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtLeapMotion::HandsMotionArea::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QtLeapMotion__HandsMotionArea,
      qt_meta_data_QtLeapMotion__HandsMotionArea, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtLeapMotion::HandsMotionArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtLeapMotion::HandsMotionArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtLeapMotion::HandsMotionArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__HandsMotionArea))
        return static_cast<void*>(const_cast< HandsMotionArea*>(this));
    if (!strcmp(_clname, "QtLeapHandsListenerInterface"))
        return static_cast< QtLeapHandsListenerInterface*>(const_cast< HandsMotionArea*>(this));
    if (!strcmp(_clname, "org.qtproject.QtLeapMotion.QtLeapHandsListenerInterface/1.0"))
        return static_cast< QtLeapMotion::QtLeapHandsListenerInterface*>(const_cast< HandsMotionArea*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int QtLeapMotion::HandsMotionArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QList<QtLeapMotion::QtLeapHand*>*>(_v) = getHands(); break;
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
void QtLeapMotion::HandsMotionArea::handUpdated(QtLeapMotion::QtLeapHand * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtLeapMotion::HandsMotionArea::handAdded(QtLeapMotion::QtLeapHand * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtLeapMotion::HandsMotionArea::handRemoved(QtLeapMotion::QtLeapHand * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtLeapMotion::HandsMotionArea::handsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
