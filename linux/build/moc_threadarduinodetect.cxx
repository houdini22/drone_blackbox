/****************************************************************************
** Meta object code from reading C++ file 'threadarduinodetect.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../threadarduinodetect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadarduinodetect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ThreadArduinoDetect[] = {

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
      40,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ThreadArduinoDetect[] = {
    "ThreadArduinoDetect\0\0value,deviceString\0"
    "signalArduinoStatusChanged(int,QString)\0"
    "slotSendingDataChanged(SendingData*)\0"
};

void ThreadArduinoDetect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ThreadArduinoDetect *_t = static_cast<ThreadArduinoDetect *>(_o);
        switch (_id) {
        case 0: _t->signalArduinoStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->slotSendingDataChanged((*reinterpret_cast< SendingData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ThreadArduinoDetect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ThreadArduinoDetect::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThreadArduinoDetect,
      qt_meta_data_ThreadArduinoDetect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ThreadArduinoDetect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ThreadArduinoDetect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ThreadArduinoDetect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadArduinoDetect))
        return static_cast<void*>(const_cast< ThreadArduinoDetect*>(this));
    return QThread::qt_metacast(_clname);
}

int ThreadArduinoDetect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ThreadArduinoDetect::signalArduinoStatusChanged(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
