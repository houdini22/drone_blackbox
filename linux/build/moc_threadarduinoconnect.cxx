/****************************************************************************
** Meta object code from reading C++ file 'threadarduinoconnect.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../threadarduinoconnect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadarduinoconnect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ThreadArduinoConnect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   77,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ThreadArduinoConnect[] = {
    "ThreadArduinoConnect\0\0value,arduino\0"
    "signalArduinoConnected(bool,SerialPort*)\0"
    "sendingData\0slotSendingDataChanged(SendingData*)\0"
};

void ThreadArduinoConnect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ThreadArduinoConnect *_t = static_cast<ThreadArduinoConnect *>(_o);
        switch (_id) {
        case 0: _t->signalArduinoConnected((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< SerialPort*(*)>(_a[2]))); break;
        case 1: _t->slotSendingDataChanged((*reinterpret_cast< SendingData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ThreadArduinoConnect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ThreadArduinoConnect::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThreadArduinoConnect,
      qt_meta_data_ThreadArduinoConnect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ThreadArduinoConnect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ThreadArduinoConnect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ThreadArduinoConnect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadArduinoConnect))
        return static_cast<void*>(const_cast< ThreadArduinoConnect*>(this));
    return QThread::qt_metacast(_clname);
}

int ThreadArduinoConnect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ThreadArduinoConnect::signalArduinoConnected(bool _t1, SerialPort * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
