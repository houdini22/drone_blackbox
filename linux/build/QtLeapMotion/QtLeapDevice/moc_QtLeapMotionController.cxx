/****************************************************************************
** Meta object code from reading C++ file 'QtLeapMotionController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtLeapMotion/QtLeapDevice/QtLeapMotionController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtLeapMotionController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtLeapMotion__QtLeapMotionController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   38,   37,   37, 0x0a,
      85,   38,   37,   37, 0x0a,
     117,   38,   37,   37, 0x0a,
     174,   38,   37,   37, 0x0a,
     226,   38,   37,   37, 0x0a,
     282,   38,   37,   37, 0x0a,
     316,   38,   37,   37, 0x0a,
     350,   38,   37,   37, 0x0a,
     409,   38,   37,   37, 0x0a,
     463,   38,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QtLeapMotion__QtLeapMotionController[] = {
    "QtLeapMotion::QtLeapMotionController\0"
    "\0motionListener\0registerMouseListener(QObject*)\0"
    "registerTouchListener(QObject*)\0"
    "registerGestureListener(QtLeapGestureListenerInterface*)\0"
    "registerHandListener(QtLeapHandsListenerInterface*)\0"
    "registerFingerListener(QtLeapFingersListenerInterface*)\0"
    "unregisterMouseListener(QObject*)\0"
    "unregisterTouchListener(QObject*)\0"
    "unregisterGestureListener(QtLeapGestureListenerInterface*)\0"
    "unregisterHandListener(QtLeapHandsListenerInterface*)\0"
    "unregisterFingerListener(QtLeapFingersListenerInterface*)\0"
};

void QtLeapMotion::QtLeapMotionController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtLeapMotionController *_t = static_cast<QtLeapMotionController *>(_o);
        switch (_id) {
        case 0: _t->registerMouseListener((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->registerTouchListener((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->registerGestureListener((*reinterpret_cast< QtLeapGestureListenerInterface*(*)>(_a[1]))); break;
        case 3: _t->registerHandListener((*reinterpret_cast< QtLeapHandsListenerInterface*(*)>(_a[1]))); break;
        case 4: _t->registerFingerListener((*reinterpret_cast< QtLeapFingersListenerInterface*(*)>(_a[1]))); break;
        case 5: _t->unregisterMouseListener((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->unregisterTouchListener((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 7: _t->unregisterGestureListener((*reinterpret_cast< QtLeapGestureListenerInterface*(*)>(_a[1]))); break;
        case 8: _t->unregisterHandListener((*reinterpret_cast< QtLeapHandsListenerInterface*(*)>(_a[1]))); break;
        case 9: _t->unregisterFingerListener((*reinterpret_cast< QtLeapFingersListenerInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtLeapMotion::QtLeapMotionController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtLeapMotion::QtLeapMotionController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtLeapMotion__QtLeapMotionController,
      qt_meta_data_QtLeapMotion__QtLeapMotionController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtLeapMotion::QtLeapMotionController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtLeapMotion::QtLeapMotionController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtLeapMotion::QtLeapMotionController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__QtLeapMotionController))
        return static_cast<void*>(const_cast< QtLeapMotionController*>(this));
    return QObject::qt_metacast(_clname);
}

int QtLeapMotion::QtLeapMotionController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
