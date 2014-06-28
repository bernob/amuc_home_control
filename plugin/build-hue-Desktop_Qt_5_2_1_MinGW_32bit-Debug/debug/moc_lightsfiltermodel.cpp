/****************************************************************************
** Meta object code from reading C++ file 'lightsfiltermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libhue/lightsfiltermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightsfiltermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LightsFilterModel_t {
    QByteArrayData data[18];
    char stringdata[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_LightsFilterModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_LightsFilterModel_t qt_meta_stringdata_LightsFilterModel = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 14),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 13),
QT_MOC_LITERAL(4, 48, 12),
QT_MOC_LITERAL(5, 61, 5),
QT_MOC_LITERAL(6, 67, 4),
QT_MOC_LITERAL(7, 72, 12),
QT_MOC_LITERAL(8, 85, 5),
QT_MOC_LITERAL(9, 91, 11),
QT_MOC_LITERAL(10, 103, 6),
QT_MOC_LITERAL(11, 110, 11),
QT_MOC_LITERAL(12, 122, 3),
QT_MOC_LITERAL(13, 126, 6),
QT_MOC_LITERAL(14, 133, 3),
QT_MOC_LITERAL(15, 137, 7),
QT_MOC_LITERAL(16, 145, 6),
QT_MOC_LITERAL(17, 152, 7)
    },
    "LightsFilterModel\0groupIdChanged\0\0"
    "lightsChanged\0groupChanged\0first\0last\0"
    "QVector<int>\0roles\0groupsAdded\0parent\0"
    "groupsReset\0get\0Light*\0row\0groupId\0"
    "lights\0Lights*\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LightsFilterModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06,
       3,    0,   45,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    3,   46,    2, 0x08,
       9,    3,   53,    2, 0x08,
      11,    0,   60,    2, 0x08,

 // methods: name, argc, parameters, tag, flags
      12,    1,   61,    2, 0x02,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   10,    5,    6,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 13, QMetaType::Int,   14,

 // properties: name, type, flags
      15, QMetaType::Int, 0x00495103,
      16, 0x80000000 | 17, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void LightsFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LightsFilterModel *_t = static_cast<LightsFilterModel *>(_o);
        switch (_id) {
        case 0: _t->groupIdChanged(); break;
        case 1: _t->lightsChanged(); break;
        case 2: _t->groupChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 3: _t->groupsAdded((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->groupsReset(); break;
        case 5: { Light* _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Light**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LightsFilterModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LightsFilterModel::groupIdChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (LightsFilterModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LightsFilterModel::lightsChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject LightsFilterModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_LightsFilterModel.data,
      qt_meta_data_LightsFilterModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *LightsFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LightsFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LightsFilterModel.stringdata))
        return static_cast<void*>(const_cast< LightsFilterModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int LightsFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = groupId(); break;
        case 1: *reinterpret_cast< Lights**>(_v) = lights(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setGroupId(*reinterpret_cast< int*>(_v)); break;
        case 1: setLights(*reinterpret_cast< Lights**>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LightsFilterModel::groupIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void LightsFilterModel::lightsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
