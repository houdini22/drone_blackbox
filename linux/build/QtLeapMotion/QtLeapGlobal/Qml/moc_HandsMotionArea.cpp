/****************************************************************************
** Meta object code from reading C++ file 'HandsMotionArea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtLeapMotion/QtLeapGlobal/Qml/HandsMotionArea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HandsMotionArea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtLeapMotion__HandsMotionArea_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtLeapMotion__HandsMotionArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtLeapMotion__HandsMotionArea_t qt_meta_stringdata_QtLeapMotion__HandsMotionArea = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QtLeapMotion::HandsMotionArea"
QT_MOC_LITERAL(1, 30, 11), // "handUpdated"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "QtLeapMotion::QtLeapHand*"
QT_MOC_LITERAL(4, 69, 4), // "hand"
QT_MOC_LITERAL(5, 74, 9), // "handAdded"
QT_MOC_LITERAL(6, 84, 11), // "handRemoved"
QT_MOC_LITERAL(7, 96, 12), // "handsChanged"
QT_MOC_LITERAL(8, 109, 5), // "hands"
QT_MOC_LITERAL(9, 115, 32) // "QList<QtLeapMotion::QtLeapHand*>"

    },
    "QtLeapMotion::HandsMotionArea\0handUpdated\0"
    "\0QtLeapMotion::QtLeapHand*\0hand\0"
    "handAdded\0handRemoved\0handsChanged\0"
    "hands\0QList<QtLeapMotion::QtLeapHand*>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtLeapMotion__HandsMotionArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       7,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00495009,

 // properties: notify_signal_id
       3,

       0        // eod
};

void QtLeapMotion::HandsMotionArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HandsMotionArea *_t = static_cast<HandsMotionArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handUpdated((*reinterpret_cast< QtLeapMotion::QtLeapHand*(*)>(_a[1]))); break;
        case 1: _t->handAdded((*reinterpret_cast< QtLeapMotion::QtLeapHand*(*)>(_a[1]))); break;
        case 2: _t->handRemoved((*reinterpret_cast< QtLeapMotion::QtLeapHand*(*)>(_a[1]))); break;
        case 3: _t->handsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HandsMotionArea::*)(QtLeapMotion::QtLeapHand * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandsMotionArea::handUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HandsMotionArea::*)(QtLeapMotion::QtLeapHand * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandsMotionArea::handAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HandsMotionArea::*)(QtLeapMotion::QtLeapHand * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandsMotionArea::handRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HandsMotionArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandsMotionArea::handsChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HandsMotionArea *_t = static_cast<HandsMotionArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QtLeapMotion::QtLeapHand*>*>(_v) = _t->getHands(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QtLeapMotion::HandsMotionArea::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QtLeapMotion__HandsMotionArea.data,
      qt_meta_data_QtLeapMotion__HandsMotionArea,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtLeapMotion::HandsMotionArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtLeapMotion::HandsMotionArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__HandsMotionArea.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QtLeapHandsListenerInterface"))
        return static_cast< QtLeapHandsListenerInterface*>(this);
    if (!strcmp(_clname, "org.qtproject.QtLeapMotion.QtLeapHandsListenerInterface/1.0"))
        return static_cast< QtLeapMotion::QtLeapHandsListenerInterface*>(this);
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
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
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtLeapMotion::HandsMotionArea::handAdded(QtLeapMotion::QtLeapHand * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtLeapMotion::HandsMotionArea::handRemoved(QtLeapMotion::QtLeapHand * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtLeapMotion::HandsMotionArea::handsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
