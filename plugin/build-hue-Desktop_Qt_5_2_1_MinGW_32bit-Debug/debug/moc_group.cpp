/****************************************************************************
** Meta object code from reading C++ file 'group.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libhue/group.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'group.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Group_t {
    QByteArrayData data[29];
    char stringdata[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Group_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Group_t qt_meta_stringdata_Group = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 11),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 13),
QT_MOC_LITERAL(4, 33, 7),
QT_MOC_LITERAL(5, 41, 5),
QT_MOC_LITERAL(6, 47, 2),
QT_MOC_LITERAL(7, 50, 6),
QT_MOC_LITERAL(8, 57, 3),
QT_MOC_LITERAL(9, 61, 6),
QT_MOC_LITERAL(10, 68, 3),
QT_MOC_LITERAL(11, 72, 6),
QT_MOC_LITERAL(12, 79, 3),
QT_MOC_LITERAL(13, 83, 8),
QT_MOC_LITERAL(14, 92, 5),
QT_MOC_LITERAL(15, 98, 5),
QT_MOC_LITERAL(16, 104, 2),
QT_MOC_LITERAL(17, 107, 5),
QT_MOC_LITERAL(18, 113, 2),
QT_MOC_LITERAL(19, 116, 8),
QT_MOC_LITERAL(20, 125, 5),
QT_MOC_LITERAL(21, 131, 9),
QT_MOC_LITERAL(22, 141, 6),
QT_MOC_LITERAL(23, 148, 16),
QT_MOC_LITERAL(24, 165, 2),
QT_MOC_LITERAL(25, 168, 8),
QT_MOC_LITERAL(26, 177, 22),
QT_MOC_LITERAL(27, 200, 16),
QT_MOC_LITERAL(28, 217, 4)
    },
    "Group\0nameChanged\0\0lightsChanged\0"
    "refresh\0setOn\0on\0setBri\0bri\0setHue\0"
    "hue\0setSat\0sat\0setColor\0color\0setXy\0"
    "xy\0setCt\0ct\0setAlert\0alert\0setEffect\0"
    "effect\0responseReceived\0id\0response\0"
    "setDescriptionFinished\0setStateFinished\0"
    "name\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Group[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       1,  134, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06,
       3,    0,   90,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   91,    2, 0x0a,
       5,    1,   92,    2, 0x0a,
       7,    1,   95,    2, 0x0a,
       9,    1,   98,    2, 0x0a,
      11,    1,  101,    2, 0x0a,
      13,    1,  104,    2, 0x0a,
      15,    1,  107,    2, 0x0a,
      17,    1,  110,    2, 0x0a,
      19,    1,  113,    2, 0x0a,
      21,    1,  116,    2, 0x0a,
      23,    2,  119,    2, 0x08,
      26,    2,  124,    2, 0x08,
      27,    2,  129,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::UChar,    8,
    QMetaType::Void, QMetaType::UShort,   10,
    QMetaType::Void, QMetaType::UChar,   12,
    QMetaType::Void, QMetaType::QColor,   14,
    QMetaType::Void, QMetaType::QPointF,   16,
    QMetaType::Void, QMetaType::UShort,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,   24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,   24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,   24,   25,

 // properties: name, type, flags
      28, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Group::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Group *_t = static_cast<Group *>(_o);
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->lightsChanged(); break;
        case 2: _t->refresh(); break;
        case 3: _t->setOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setBri((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 5: _t->setHue((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 6: _t->setSat((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 7: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->setXy((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 9: _t->setCt((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 10: _t->setAlert((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setEffect((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->responseReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 13: _t->setDescriptionFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 14: _t->setStateFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Group::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::nameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Group::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::lightsChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Group::staticMetaObject = {
    { &LightInterface::staticMetaObject, qt_meta_stringdata_Group.data,
      qt_meta_data_Group,  qt_static_metacall, 0, 0}
};


const QMetaObject *Group::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Group::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Group.stringdata))
        return static_cast<void*>(const_cast< Group*>(this));
    return LightInterface::qt_metacast(_clname);
}

int Group::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LightInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
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
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Group::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Group::lightsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
