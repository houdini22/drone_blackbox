/****************************************************************************
** Meta object code from reading C++ file 'DefaultQtLeapTapGestureHandler.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtLeapMotion/QtLeapGestures/Handlers/DefaultQtLeapTapGestureHandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DefaultQtLeapTapGestureHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtLeapMotion__DefaultQtLeapTapGestureHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QtLeapMotion__DefaultQtLeapTapGestureHandler[] = {
    "QtLeapMotion::DefaultQtLeapTapGestureHandler\0"
};

void QtLeapMotion::DefaultQtLeapTapGestureHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QtLeapMotion::DefaultQtLeapTapGestureHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtLeapMotion::DefaultQtLeapTapGestureHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtLeapMotion__DefaultQtLeapTapGestureHandler,
      qt_meta_data_QtLeapMotion__DefaultQtLeapTapGestureHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtLeapMotion::DefaultQtLeapTapGestureHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtLeapMotion::DefaultQtLeapTapGestureHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtLeapMotion::DefaultQtLeapTapGestureHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtLeapMotion__DefaultQtLeapTapGestureHandler))
        return static_cast<void*>(const_cast< DefaultQtLeapTapGestureHandler*>(this));
    if (!strcmp(_clname, "QtLeapGestureHandlerInterface"))
        return static_cast< QtLeapGestureHandlerInterface*>(const_cast< DefaultQtLeapTapGestureHandler*>(this));
    if (!strcmp(_clname, "org.qtproject.QtLeapMotion.QtLeapMotionHandler/1.0"))
        return static_cast< QtLeapMotion::QtLeapMotionHandler*>(const_cast< DefaultQtLeapTapGestureHandler*>(this));
    if (!strcmp(_clname, "org.qtproject.QtLeapMotion.QtLeapGestureHandlerInterface/1.0"))
        return static_cast< QtLeapMotion::QtLeapGestureHandlerInterface*>(const_cast< DefaultQtLeapTapGestureHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int QtLeapMotion::DefaultQtLeapTapGestureHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
