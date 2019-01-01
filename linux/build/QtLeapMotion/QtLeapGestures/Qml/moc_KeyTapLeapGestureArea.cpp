/****************************************************************************
** Meta object code from reading C++ file 'KeyTapLeapGestureArea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtLeapMotion/QtLeapGestures/Qml/KeyTapLeapGestureArea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeyTapLeapGestureArea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtLeapMotion__KeyTapLeapGestureArea_t {
    QByteArrayData data[10];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtLeapMotion__KeyTapLeapGestureArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtLeapMotion__KeyTapLeapGestureArea_t qt_meta_stringdata_QtLeapMotion__KeyTapLeapGestureArea = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QtLeapMotion::KeyTapLeapGestu..."
QT_MOC_LITERAL(1, 36, 19), // "gesturesListChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 14), // "gestureStarted"
QT_MOC_LITERAL(4, 72, 31), // "QtLeapMotion::QtLeapTapGesture*"
QT_MOC_LITERAL(5, 104, 7), // "gesture"
QT_MOC_LITERAL(6, 112, 14), // "gestureUpdated"
QT_MOC_LITERAL(7, 127, 12), // "gestureEnded"
QT_MOC_LITERAL(8, 140, 12), // "gesturesList"
QT_MOC_LITERAL(9, 153, 38) // "QList<QtLeapMotion::QtLeapTap..."

    },
    "QtLeapMotion::KeyTapLeapGestureArea\0"
    "gesturesListChanged\0\0gestureStarted\0"
    "QtLeapMotion::QtLeapTapGesture*\0gesture\0"
    "gestureUpdated\0gestureEnded\0gesturesList\0"
    "QList<QtLeapMotion::QtLeapTapGesture*>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtLeapMotion__KeyTapLeapGestureArea[] = {

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

void QtLeapMotion::KeyTapLeapGestureArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyTapLeapGestureArea *_t = static_cast<KeyTapLeapGestureArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gesturesListChanged(); break;
        case 1: _t->gestureStarted((*reinterpret_cast< QtLeapMotion::QtLeapTapGesture*(*)>(_a[1]))); break;
        case 2: _t->gestureUpdated((*reinterpret_cast< QtLeapMotion::QtLeapTapGesture*(*)>(_a[1]))); break;
        case 3: _t->gestureEnded((*reinterpret_cast< QtLeapMotion::QtLeapTapGesture*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtLeapMotion::QtLeapTapGesture* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtLeapMotion::QtLeapTapGesture* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtLeapMotion::QtLeapTapGesture* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KeyTapLeapGestureArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyTapLeapGestureArea::gesturesListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KeyTapLeapGestureArea::*)(QtLeapMotion::QtLeapTapGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyTapLeapGestureArea::gestureStarted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KeyTapLeapGestureArea::*)(QtLeapMotion::QtLeapTapGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyTapLeapGestureArea::gestureUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KeyTapLeapGestureArea::*)(QtLeapMotion::QtLeapTapGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyTapLeapGestureArea::gestureEnded)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QtLeapMotion::QtLeapTapGesture*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        KeyTapLeapGestureArea *_t = static_cast<KeyTapLeapGestureArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QtLeapMotion::QtLeapTapGesture*>*>(_v) = _t->getGesturesList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QtLeapMotion::KeyTapLeapGestureArea::staticMetaObject = {
    { &AbstractGestureArea::staticMetaObject, qt_meta_stringdata_QtLeapMotion__KeyTapLeapGestureArea.data,
      qt_meta_data_QtLeapMotion__KeyTapLeapGestureArea,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtLeapMotion::KeyTapLeapGestureArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtLeapMotion::KeyTapLeapGestureArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__KeyTapLeapGestureArea.stringdata0))
        return static_cast<void*>(this);
    return AbstractGestureArea::qt_metacast(_clname);
}

int QtLeapMotion::KeyTapLeapGestureArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QtLeapMotion::KeyTapLeapGestureArea::gesturesListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtLeapMotion::KeyTapLeapGestureArea::gestureStarted(QtLeapMotion::QtLeapTapGesture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtLeapMotion::KeyTapLeapGestureArea::gestureUpdated(QtLeapMotion::QtLeapTapGesture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtLeapMotion::KeyTapLeapGestureArea::gestureEnded(QtLeapMotion::QtLeapTapGesture * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
