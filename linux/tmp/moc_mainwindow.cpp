/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[399];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "setModes"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "Modes"
QT_MOC_LITERAL(4, 27, 5), // "modes"
QT_MOC_LITERAL(5, 33, 18), // "cameraFrameChanged"
QT_MOC_LITERAL(6, 52, 5), // "MyMat"
QT_MOC_LITERAL(7, 58, 15), // "setHandPosition"
QT_MOC_LITERAL(8, 74, 12), // "HandPosition"
QT_MOC_LITERAL(9, 87, 24), // "slotSteeringsDataChanged"
QT_MOC_LITERAL(10, 112, 29), // "QHash<QString,SteeringData*>*"
QT_MOC_LITERAL(11, 142, 23), // "slotSendingsDataChanged"
QT_MOC_LITERAL(12, 166, 28), // "QHash<QString,SendingData*>*"
QT_MOC_LITERAL(13, 195, 29), // "on_recordingAddButton_clicked"
QT_MOC_LITERAL(14, 225, 32), // "on_recordingDeleteButton_clicked"
QT_MOC_LITERAL(15, 258, 27), // "recordingCurrentItemChanged"
QT_MOC_LITERAL(16, 286, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(17, 303, 4), // "item"
QT_MOC_LITERAL(18, 308, 4), // "prev"
QT_MOC_LITERAL(19, 313, 23), // "onRecordingValueChanged"
QT_MOC_LITERAL(20, 337, 5), // "value"
QT_MOC_LITERAL(21, 343, 12), // "setListItems"
QT_MOC_LITERAL(22, 356, 11), // "RecordsList"
QT_MOC_LITERAL(23, 368, 7), // "records"
QT_MOC_LITERAL(24, 376, 17), // "setStartRecording"
QT_MOC_LITERAL(25, 394, 4) // "name"

    },
    "MainWindow\0setModes\0\0Modes\0modes\0"
    "cameraFrameChanged\0MyMat\0setHandPosition\0"
    "HandPosition\0slotSteeringsDataChanged\0"
    "QHash<QString,SteeringData*>*\0"
    "slotSendingsDataChanged\0"
    "QHash<QString,SendingData*>*\0"
    "on_recordingAddButton_clicked\0"
    "on_recordingDeleteButton_clicked\0"
    "recordingCurrentItemChanged\0"
    "QListWidgetItem*\0item\0prev\0"
    "onRecordingValueChanged\0value\0"
    "setListItems\0RecordsList\0records\0"
    "setStartRecording\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x0a /* Public */,
       7,    1,   75,    2, 0x0a /* Public */,
       9,    1,   78,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,
      15,    2,   86,    2, 0x08 /* Private */,
      19,    1,   91,    2, 0x08 /* Private */,
      21,    1,   94,    2, 0x08 /* Private */,
      24,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, QMetaType::QString,   25,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setModes((*reinterpret_cast< Modes(*)>(_a[1]))); break;
        case 1: _t->cameraFrameChanged((*reinterpret_cast< MyMat(*)>(_a[1]))); break;
        case 2: _t->setHandPosition((*reinterpret_cast< HandPosition(*)>(_a[1]))); break;
        case 3: _t->slotSteeringsDataChanged((*reinterpret_cast< QHash<QString,SteeringData*>*(*)>(_a[1]))); break;
        case 4: _t->slotSendingsDataChanged((*reinterpret_cast< QHash<QString,SendingData*>*(*)>(_a[1]))); break;
        case 5: _t->on_recordingAddButton_clicked(); break;
        case 6: _t->on_recordingDeleteButton_clicked(); break;
        case 7: _t->recordingCurrentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 8: _t->onRecordingValueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setListItems((*reinterpret_cast< RecordsList(*)>(_a[1]))); break;
        case 10: _t->setStartRecording((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MyMat >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
