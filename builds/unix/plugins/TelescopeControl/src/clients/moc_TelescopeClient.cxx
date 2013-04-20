/****************************************************************************
** Meta object code from reading C++ file 'TelescopeClient.hpp'
**
** Created: Sat Apr 20 14:28:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/TelescopeControl/src/clients/TelescopeClient.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TelescopeClient.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TelescopeClient[] = {

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

static const char qt_meta_stringdata_TelescopeClient[] = {
    "TelescopeClient\0"
};

void TelescopeClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TelescopeClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TelescopeClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TelescopeClient,
      qt_meta_data_TelescopeClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TelescopeClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TelescopeClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TelescopeClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeClient))
        return static_cast<void*>(const_cast< TelescopeClient*>(this));
    if (!strcmp(_clname, "StelObject"))
        return static_cast< StelObject*>(const_cast< TelescopeClient*>(this));
    return QObject::qt_metacast(_clname);
}

int TelescopeClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_TelescopeTCP[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   14,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TelescopeTCP[] = {
    "TelescopeTCP\0\0socketError\0"
    "socketFailed(QAbstractSocket::SocketError)\0"
};

void TelescopeTCP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TelescopeTCP *_t = static_cast<TelescopeTCP *>(_o);
        switch (_id) {
        case 0: _t->socketFailed((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TelescopeTCP::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TelescopeTCP::staticMetaObject = {
    { &TelescopeClient::staticMetaObject, qt_meta_stringdata_TelescopeTCP,
      qt_meta_data_TelescopeTCP, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TelescopeTCP::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TelescopeTCP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TelescopeTCP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeTCP))
        return static_cast<void*>(const_cast< TelescopeTCP*>(this));
    return TelescopeClient::qt_metacast(_clname);
}

int TelescopeTCP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TelescopeClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
