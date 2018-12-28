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
    QByteArrayData data[25];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "setArduinoStatus"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "value"
QT_MOC_LITERAL(4, 35, 8), // "setModes"
QT_MOC_LITERAL(5, 44, 5), // "Modes"
QT_MOC_LITERAL(6, 50, 5), // "modes"
QT_MOC_LITERAL(7, 56, 18), // "cameraFrameChanged"
QT_MOC_LITERAL(8, 75, 5), // "MyMat"
QT_MOC_LITERAL(9, 81, 15), // "setHandPosition"
QT_MOC_LITERAL(10, 97, 12), // "HandPosition"
QT_MOC_LITERAL(11, 110, 24), // "slotSteeringsDataChanged"
QT_MOC_LITERAL(12, 135, 29), // "QHash<QString,SteeringData*>*"
QT_MOC_LITERAL(13, 165, 29), // "on_recordingAddButton_clicked"
QT_MOC_LITERAL(14, 195, 32), // "on_recordingDeleteButton_clicked"
QT_MOC_LITERAL(15, 228, 27), // "recordingCurrentItemChanged"
QT_MOC_LITERAL(16, 256, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(17, 273, 4), // "item"
QT_MOC_LITERAL(18, 278, 4), // "prev"
QT_MOC_LITERAL(19, 283, 23), // "onRecordingValueChanged"
QT_MOC_LITERAL(20, 307, 12), // "setListItems"
QT_MOC_LITERAL(21, 320, 11), // "RecordsList"
QT_MOC_LITERAL(22, 332, 7), // "records"
QT_MOC_LITERAL(23, 340, 17), // "setStartRecording"
QT_MOC_LITERAL(24, 358, 4) // "name"

    },
    "MainWindow\0setArduinoStatus\0\0value\0"
    "setModes\0Modes\0modes\0cameraFrameChanged\0"
    "MyMat\0setHandPosition\0HandPosition\0"
    "slotSteeringsDataChanged\0"
    "QHash<QString,SteeringData*>*\0"
    "on_recordingAddButton_clicked\0"
    "on_recordingDeleteButton_clicked\0"
    "recordingCurrentItemChanged\0"
    "QListWidgetItem*\0item\0prev\0"
    "onRecordingValueChanged\0setListItems\0"
    "RecordsList\0records\0setStartRecording\0"
    "name"
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
       4,    1,   72,    2, 0x0a /* Public */,
       7,    1,   75,    2, 0x0a /* Public */,
       9,    1,   78,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,
      15,    2,   86,    2, 0x08 /* Private */,
      19,    1,   91,    2, 0x08 /* Private */,
      20,    1,   94,    2, 0x08 /* Private */,
      23,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::QString,   24,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setArduinoStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setModes((*reinterpret_cast< Modes(*)>(_a[1]))); break;
        case 2: _t->cameraFrameChanged((*reinterpret_cast< MyMat(*)>(_a[1]))); break;
        case 3: _t->setHandPosition((*reinterpret_cast< HandPosition(*)>(_a[1]))); break;
        case 4: _t->slotSteeringsDataChanged((*reinterpret_cast< QHash<QString,SteeringData*>*(*)>(_a[1]))); break;
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
        case 2:
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
