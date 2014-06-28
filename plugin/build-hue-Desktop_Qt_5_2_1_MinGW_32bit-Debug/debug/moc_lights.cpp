/****************************************************************************
** Meta object code from reading C++ file 'lights.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libhue/lights.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lights.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Lights_t {
    QByteArrayData data[11];
    char stringdata[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Lights_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Lights_t qt_meta_stringdata_Lights = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 7),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 14),
QT_MOC_LITERAL(4, 31, 2),
QT_MOC_LITERAL(5, 34, 7),
QT_MOC_LITERAL(6, 42, 23),
QT_MOC_LITERAL(7, 66, 17),
QT_MOC_LITERAL(8, 84, 3),
QT_MOC_LITERAL(9, 88, 6),
QT_MOC_LITERAL(10, 95, 5)
    },
    "Lights\0refresh\0\0lightsReceived\0id\0"
    "variant\0lightDescriptionChanged\0"
    "lightStateChanged\0get\0Light*\0index\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Lights[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a,
       3,    2,   40,    2, 0x08,
       6,    0,   45,    2, 0x08,
       7,    0,   46,    2, 0x08,

 // methods: name, argc, parameters, tag, flags
       8,    1,   47,    2, 0x02,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 9, QMetaType::Int,   10,

       0        // eod
};

void Lights::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Lights *_t = static_cast<Lights *>(_o);
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->lightsReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 2: _t->lightDescriptionChanged(); break;
        case 3: _t->lightStateChanged(); break;
        case 4: { Light* _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Light**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject Lights::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_Lights.data,
      qt_meta_data_Lights,  qt_static_metacall, 0, 0}
};


const QMetaObject *Lights::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lights::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Lights.stringdata))
        return static_cast<void*>(const_cast< Lights*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int Lights::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
