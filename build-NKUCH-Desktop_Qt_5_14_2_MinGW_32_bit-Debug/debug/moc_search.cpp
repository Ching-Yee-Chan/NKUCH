/****************************************************************************
** Meta object code from reading C++ file 'search.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../NKUCH/search.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'search.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_search_t {
    QByteArrayData data[12];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_search_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_search_t qt_meta_stringdata_search = {
    {
QT_MOC_LITERAL(0, 0, 6), // "search"
QT_MOC_LITERAL(1, 7, 14), // "on_run_clicked"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 23), // "on_campus0_stateChanged"
QT_MOC_LITERAL(4, 47, 4), // "arg1"
QT_MOC_LITERAL(5, 52, 23), // "on_campus1_stateChanged"
QT_MOC_LITERAL(6, 76, 23), // "on_campus2_stateChanged"
QT_MOC_LITERAL(7, 100, 17), // "on_result_clicked"
QT_MOC_LITERAL(8, 118, 17), // "on_cancel_clicked"
QT_MOC_LITERAL(9, 136, 31), // "on_courseList_itemDoubleClicked"
QT_MOC_LITERAL(10, 168, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(11, 185, 4) // "item"

    },
    "search\0on_run_clicked\0\0on_campus0_stateChanged\0"
    "arg1\0on_campus1_stateChanged\0"
    "on_campus2_stateChanged\0on_result_clicked\0"
    "on_cancel_clicked\0on_courseList_itemDoubleClicked\0"
    "QListWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_search[] = {

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
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       6,    1,   56,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void search::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<search *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_run_clicked(); break;
        case 1: _t->on_campus0_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_campus1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_campus2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_result_clicked(); break;
        case 5: _t->on_cancel_clicked(); break;
        case 6: _t->on_courseList_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject search::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_search.data,
    qt_meta_data_search,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *search::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *search::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_search.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int search::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
