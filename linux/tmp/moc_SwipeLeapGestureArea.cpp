/****************************************************************************
** Meta object code from reading C++ file 'SwipeLeapGestureArea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtLeapMotion/QtLeapGestures/Qml/SwipeLeapGestureArea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SwipeLeapGestureArea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtLeapMotion__SwipeLeapGestureArea_t {
    QByteArrayData data[10];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtLeapMotion__SwipeLeapGestureArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtLeapMotion__SwipeLeapGestureArea_t qt_meta_stringdata_QtLeapMotion__SwipeLeapGestureArea = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QtLeapMotion::SwipeLeapGestur..."
QT_MOC_LITERAL(1, 35, 19), // "gesturesListChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 14), // "gestureStarted"
QT_MOC_LITERAL(4, 71, 33), // "QtLeapMotion::QtLeapSwipeGest..."
QT_MOC_LITERAL(5, 105, 7), // "gesture"
QT_MOC_LITERAL(6, 113, 14), // "gestureUpdated"
QT_MOC_LITERAL(7, 128, 12), // "gestureEnded"
QT_MOC_LITERAL(8, 141, 12), // "gesturesList"
QT_MOC_LITERAL(9, 154, 40) // "QList<QtLeapMotion::QtLeapSwi..."

    },
    "QtLeapMotion::SwipeLeapGestureArea\0"
    "gesturesListChanged\0\0gestureStarted\0"
    "QtLeapMotion::QtLeapSwipeGesture*\0"
    "gesture\0gestureUpdated\0gestureEnded\0"
    "gesturesList\0QList<QtLeapMotion::QtLeapSwipeGesture*>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtLeapMotion__SwipeLeapGestureArea[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       6,    1,   38,    2, 0x06 /* Public */,
       7,    1,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00495009,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QtLeapMotion::SwipeLeapGestureArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SwipeLeapGestureArea *_t = static_cast<SwipeLeapGestureArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gesturesListChanged(); break;
        case 1: _t->gestureStarted((*reinterpret_cast< QtLeapMotion::QtLeapSwipeGesture*(*)>(_a[1]))); break;
        case 2: _t->gestureUpdated((*reinterpret_cast< QtLeapMotion::QtLeapSwipeGesture*(*)>(_a[1]))); break;
        case 3: _t->gestureEnded((*reinterpret_cast< QtLeapMotion::QtLeapSwipeGesture*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtLeapMotion::QtLeapSwipeGesture* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtLeapMotion::QtLeapSwipeGesture* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtLeapMotion::QtLeapSwipeGesture* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SwipeLeapGestureArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SwipeLeapGestureArea::gesturesListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SwipeLeapGestureArea::*)(QtLeapMotion::QtLeapSwipeGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SwipeLeapGestureArea::gestureStarted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SwipeLeapGestureArea::*)(QtLeapMotion::QtLeapSwipeGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SwipeLeapGestureArea::gestureUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SwipeLeapGestureArea::*)(QtLeapMotion::QtLeapSwipeGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SwipeLeapGestureArea::gestureEnded)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QtLeapMotion::QtLeapSwipeGesture*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SwipeLeapGestureArea *_t = static_cast<SwipeLeapGestureArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QtLeapMotion::QtLeapSwipeGesture*>*>(_v) = _t->getGesturesList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QtLeapMotion::SwipeLeapGestureArea::staticMetaObject = {
    { &AbstractGestureArea::staticMetaObject, qt_meta_stringdata_QtLeapMotion__SwipeLeapGestureArea.data,
      qt_meta_data_QtLeapMotion__SwipeLeapGestureArea,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtLeapMotion::SwipeLeapGestureArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtLeapMotion::SwipeLeapGestureArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__SwipeLeapGestureArea.stringdata0))
        return static_cast<void*>(this);
    return AbstractGestureArea::qt_metacast(_clname);
}

int QtLeapMotion::SwipeLeapGestureArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractGestureArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
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
void QtLeapMotion::SwipeLeapGestureArea::gesturesListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtLeapMotion::SwipeLeapGestureArea::gestureStarted(QtLeapMotion::QtLeapSwipeGesture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtLeapMotion::SwipeLeapGestureArea::gestureUpdated(QtLeapMotion::QtLeapSwipeGesture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtLeapMotion::SwipeLeapGestureArea::gestureEnded(QtLeapMotion::QtLeapSwipeGesture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
