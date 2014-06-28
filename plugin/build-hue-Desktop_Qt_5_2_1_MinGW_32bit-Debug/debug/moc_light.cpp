/****************************************************************************
** Meta object code from reading C++ file 'light.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libhue/light.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'light.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Light_t {
    QByteArrayData data[32];
    char stringdata[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Light_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Light_t qt_meta_stringdata_Light = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 14),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 11),
QT_MOC_LITERAL(4, 34, 16),
QT_MOC_LITERAL(5, 51, 7),
QT_MOC_LITERAL(6, 59, 5),
QT_MOC_LITERAL(7, 65, 2),
QT_MOC_LITERAL(8, 68, 6),
QT_MOC_LITERAL(9, 75, 3),
QT_MOC_LITERAL(10, 79, 6),
QT_MOC_LITERAL(11, 86, 3),
QT_MOC_LITERAL(12, 90, 6),
QT_MOC_LITERAL(13, 97, 3),
QT_MOC_LITERAL(14, 101, 8),
QT_MOC_LITERAL(15, 110, 5),
QT_MOC_LITERAL(16, 116, 5),
QT_MOC_LITERAL(17, 122, 2),
QT_MOC_LITERAL(18, 125, 5),
QT_MOC_LITERAL(19, 131, 2),
QT_MOC_LITERAL(20, 134, 8),
QT_MOC_LITERAL(21, 143, 5),
QT_MOC_LITERAL(22, 149, 9),
QT_MOC_LITERAL(23, 159, 6),
QT_MOC_LITERAL(24, 166, 16),
QT_MOC_LITERAL(25, 183, 2),
QT_MOC_LITERAL(26, 186, 8),
QT_MOC_LITERAL(27, 195, 22),
QT_MOC_LITERAL(28, 218, 16),
QT_MOC_LITERAL(29, 235, 7),
QT_MOC_LITERAL(30, 243, 4),
QT_MOC_LITERAL(31, 248, 9)
    },
    "Light\0modelIdChanged\0\0typeChanged\0"
    "swversionChanged\0refresh\0setOn\0on\0"
    "setBri\0bri\0setHue\0hue\0setSat\0sat\0"
    "setColor\0color\0setXy\0xy\0setCt\0ct\0"
    "setAlert\0alert\0setEffect\0effect\0"
    "responseReceived\0id\0response\0"
    "setDescriptionFinished\0setStateFinished\0"
    "modelId\0type\0swversion\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Light[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       3,  140, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06,
       3,    0,   95,    2, 0x06,
       4,    0,   96,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   97,    2, 0x0a,
       6,    1,   98,    2, 0x0a,
       8,    1,  101,    2, 0x0a,
      10,    1,  104,    2, 0x0a,
      12,    1,  107,    2, 0x0a,
      14,    1,  110,    2, 0x0a,
      16,    1,  113,    2, 0x0a,
      18,    1,  116,    2, 0x0a,
      20,    1,  119,    2, 0x0a,
      22,    1,  122,    2, 0x0a,
      24,    2,  125,    2, 0x08,
      27,    2,  130,    2, 0x08,
      28,    2,  135,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::UChar,    9,
    QMetaType::Void, QMetaType::UShort,   11,
    QMetaType::Void, QMetaType::UChar,   13,
    QMetaType::Void, QMetaType::QColor,   15,
    QMetaType::Void, QMetaType::QPointF,   17,
    QMetaType::Void, QMetaType::UShort,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,   25,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,   25,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,   25,   26,

 // properties: name, type, flags
      29, QMetaType::QString, 0x00495001,
      30, QMetaType::QString, 0x00495001,
      31, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Light::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Light *_t = static_cast<Light *>(_o);
        switch (_id) {
        case 0: _t->modelIdChanged(); break;
        case 1: _t->typeChanged(); break;
        case 2: _t->swversionChanged(); break;
        case 3: _t->refresh(); break;
        case 4: _t->setOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setBri((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->setHue((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 7: _t->setSat((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 9: _t->setXy((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 10: _t->setCt((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 11: _t->setAlert((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setEffect((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->responseReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 14: _t->setDescriptionFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 15: _t->setStateFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Light::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Light::modelIdChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Light::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Light::typeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Light::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Light::swversionChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Light::staticMetaObject = {
    { &LightInterface::staticMetaObject, qt_meta_stringdata_Light.data,
      qt_meta_data_Light,  qt_static_metacall, 0, 0}
};


const QMetaObject *Light::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Light::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Light.stringdata))
        return static_cast<void*>(const_cast< Light*>(this));
    return LightInterface::qt_metacast(_clname);
}

int Light::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LightInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = modelId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = type(); break;
        case 2: *reinterpret_cast< QString*>(_v) = swversion(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Light::modelIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Light::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Light::swversionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
