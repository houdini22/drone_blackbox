/****************************************************************************
** Meta object code from reading C++ file 'QtLeapMotionController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtLeapMotion/QtLeapDevice/QtLeapMotionController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtLeapMotionController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtLeapMotion__QtLeapMotionController_t {
    QByteArrayData data[16];
    char stringdata0[381];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtLeapMotion__QtLeapMotionController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtLeapMotion__QtLeapMotionController_t qt_meta_stringdata_QtLeapMotion__QtLeapMotionController = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QtLeapMotion::QtLeapMotionCon..."
QT_MOC_LITERAL(1, 37, 21), // "registerMouseListener"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 14), // "motionListener"
QT_MOC_LITERAL(4, 75, 21), // "registerTouchListener"
QT_MOC_LITERAL(5, 97, 23), // "registerGestureListener"
QT_MOC_LITERAL(6, 121, 31), // "QtLeapGestureListenerInterface*"
QT_MOC_LITERAL(7, 153, 20), // "registerHandListener"
QT_MOC_LITERAL(8, 174, 29), // "QtLeapHandsListenerInterface*"
QT_MOC_LITERAL(9, 204, 22), // "registerFingerListener"
QT_MOC_LITERAL(10, 227, 31), // "QtLeapFingersListenerInterface*"
QT_MOC_LITERAL(11, 259, 23), // "unregisterMouseListener"
QT_MOC_LITERAL(12, 283, 23), // "unregisterTouchListener"
QT_MOC_LITERAL(13, 307, 25), // "unregisterGestureListener"
QT_MOC_LITERAL(14, 333, 22), // "unregisterHandListener"
QT_MOC_LITERAL(15, 356, 24) // "unregisterFingerListener"

    },
    "QtLeapMotion::QtLeapMotionController\0"
    "registerMouseListener\0\0motionListener\0"
    "registerTouchListener\0registerGestureListener\0"
    "QtLeapGestureListenerInterface*\0"
    "registerHandListener\0QtLeapHandsListenerInterface*\0"
    "registerFingerListener\0"
    "QtLeapFingersListenerInterface*\0"
    "unregisterMouseListener\0unregisterTouchListener\0"
    "unregisterGestureListener\0"
    "unregisterHandListener\0unregisterFingerListener"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtLeapMotion__QtLeapMotionController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    1,   67,    2, 0x0a /* Public */,
       5,    1,   70,    2, 0x0a /* Public */,
       7,    1,   73,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      12,    1,   82,    2, 0x0a /* Public */,
      13,    1,   85,    2, 0x0a /* Public */,
      14,    1,   88,    2, 0x0a /* Public */,
      15,    1,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, 0x80000000 | 6,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 10,    3,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, 0x80000000 | 6,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 10,    3,

       0        // eod
};

void QtLeapMotion::QtLeapMotionController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtLeapMotionController *_t = static_cast<QtLeapMotionController *>(_o);
        Q_UNUSED(_t)
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

QT_INIT_METAOBJECT const QMetaObject QtLeapMotion::QtLeapMotionController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtLeapMotion__QtLeapMotionController.data,
      qt_meta_data_QtLeapMotion__QtLeapMotionController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtLeapMotion::QtLeapMotionController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtLeapMotion::QtLeapMotionController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__QtLeapMotionController.stringdata0))
        return static_cast<void*>(this);
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
