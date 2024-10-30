/****************************************************************************
** Meta object code from reading C++ file 'DatabaseSetting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../DatabaseSetting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseSetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatabaseSetting_t {
    QByteArrayData data[10];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseSetting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseSetting_t qt_meta_stringdata_DatabaseSetting = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DatabaseSetting"
QT_MOC_LITERAL(1, 16, 21), // "onDatabaseTypeChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 10), // "showSQLite"
QT_MOC_LITERAL(5, 56, 10), // "hideSQLite"
QT_MOC_LITERAL(6, 67, 9), // "showMySQL"
QT_MOC_LITERAL(7, 77, 9), // "hideMySQL"
QT_MOC_LITERAL(8, 87, 13), // "handleConnect"
QT_MOC_LITERAL(9, 101, 12) // "handleCancel"

    },
    "DatabaseSetting\0onDatabaseTypeChanged\0"
    "\0index\0showSQLite\0hideSQLite\0showMySQL\0"
    "hideMySQL\0handleConnect\0handleCancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseSetting[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DatabaseSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DatabaseSetting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDatabaseTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->showSQLite(); break;
        case 2: _t->hideSQLite(); break;
        case 3: _t->showMySQL(); break;
        case 4: _t->hideMySQL(); break;
        case 5: _t->handleConnect(); break;
        case 6: _t->handleCancel(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DatabaseSetting::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_DatabaseSetting.data,
    qt_meta_data_DatabaseSetting,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DatabaseSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseSetting.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DatabaseSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
