/****************************************************************************
** Meta object code from reading C++ file 'huebridgeconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libhue/huebridgeconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'huebridgeconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HueBridgeConnection_t {
    QByteArrayData data[23];
    char stringdata[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_HueBridgeConnection_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_HueBridgeConnection_t qt_meta_stringdata_HueBridgeConnection = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 13),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 21),
QT_MOC_LITERAL(4, 57, 18),
QT_MOC_LITERAL(5, 76, 22),
QT_MOC_LITERAL(6, 99, 12),
QT_MOC_LITERAL(7, 112, 16),
QT_MOC_LITERAL(8, 129, 12),
QT_MOC_LITERAL(9, 142, 16),
QT_MOC_LITERAL(10, 159, 13),
QT_MOC_LITERAL(11, 173, 12),
QT_MOC_LITERAL(12, 186, 6),
QT_MOC_LITERAL(13, 193, 16),
QT_MOC_LITERAL(14, 210, 18),
QT_MOC_LITERAL(15, 229, 14),
QT_MOC_LITERAL(16, 244, 10),
QT_MOC_LITERAL(17, 255, 10),
QT_MOC_LITERAL(18, 266, 8),
QT_MOC_LITERAL(19, 275, 6),
QT_MOC_LITERAL(20, 282, 14),
QT_MOC_LITERAL(21, 297, 11),
QT_MOC_LITERAL(22, 309, 15)
    },
    "HueBridgeConnection\0apiKeyChanged\0\0"
    "discoveryErrorChanged\0bridgeFoundChanged\0"
    "connectedBridgeChanged\0stateChanged\0"
    "createUserFailed\0errorMessage\0"
    "onDiscoveryError\0onFoundBridge\0"
    "QHostAddress\0bridge\0onNoBridgesFound\0"
    "createUserFinished\0slotOpFinished\0"
    "createUser\0devicetype\0username\0apiKey\0"
    "discoveryError\0bridgeFound\0connectedBridge\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HueBridgeConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       4,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06,
       3,    0,   75,    2, 0x06,
       4,    0,   76,    2, 0x06,
       5,    0,   77,    2, 0x06,
       6,    0,   78,    2, 0x06,
       7,    1,   79,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    0,   82,    2, 0x08,
      10,    1,   83,    2, 0x08,
      13,    0,   86,    2, 0x08,
      14,    0,   87,    2, 0x08,
      15,    0,   88,    2, 0x08,

 // methods: name, argc, parameters, tag, flags
      16,    2,   89,    2, 0x02,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   18,

 // properties: name, type, flags
      19, QMetaType::QString, 0x00495103,
      20, QMetaType::Bool, 0x00495001,
      21, QMetaType::Bool, 0x00495001,
      22, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void HueBridgeConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HueBridgeConnection *_t = static_cast<HueBridgeConnection *>(_o);
        switch (_id) {
        case 0: _t->apiKeyChanged(); break;
        case 1: _t->discoveryErrorChanged(); break;
        case 2: _t->bridgeFoundChanged(); break;
        case 3: _t->connectedBridgeChanged(); break;
        case 4: _t->stateChanged(); break;
        case 5: _t->createUserFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onDiscoveryError(); break;
        case 7: _t->onFoundBridge((*reinterpret_cast< QHostAddress(*)>(_a[1]))); break;
        case 8: _t->onNoBridgesFound(); break;
        case 9: _t->createUserFinished(); break;
        case 10: _t->slotOpFinished(); break;
        case 11: _t->createUser((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HueBridgeConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HueBridgeConnection::apiKeyChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (HueBridgeConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HueBridgeConnection::discoveryErrorChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (HueBridgeConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HueBridgeConnection::bridgeFoundChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (HueBridgeConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HueBridgeConnection::connectedBridgeChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (HueBridgeConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HueBridgeConnection::stateChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (HueBridgeConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HueBridgeConnection::createUserFailed)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject HueBridgeConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HueBridgeConnection.data,
      qt_meta_data_HueBridgeConnection,  qt_static_metacall, 0, 0}
};


const QMetaObject *HueBridgeConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HueBridgeConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HueBridgeConnection.stringdata))
        return static_cast<void*>(const_cast< HueBridgeConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int HueBridgeConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = apiKey(); break;
        case 1: *reinterpret_cast< bool*>(_v) = discoveryError(); break;
        case 2: *reinterpret_cast< bool*>(_v) = bridgeFound(); break;
        case 3: *reinterpret_cast< QString*>(_v) = connectedBridge(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setApiKey(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void HueBridgeConnection::apiKeyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void HueBridgeConnection::discoveryErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void HueBridgeConnection::bridgeFoundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void HueBridgeConnection::connectedBridgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void HueBridgeConnection::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void HueBridgeConnection::createUserFailed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
