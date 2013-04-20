/****************************************************************************
** Meta object code from reading C++ file 'MeteorMgr.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/core/modules/MeteorMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MeteorMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeteorMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   10,   27,   10, 0x0a,
      44,   40,   10,   10, 0x0a,
      58,   56,   10,   10, 0x0a,
      81,   10,   76,   10, 0x0a,
     100,   95,   10,   10, 0x0a,

 // properties: name, type, flags
     120,   27, 0x02495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_MeteorMgr[] = {
    "MeteorMgr\0\0zhrChanged(int)\0int\0getZHR()\0"
    "zhr\0setZHR(int)\0b\0setFlagShow(bool)\0"
    "bool\0getFlagShow()\0maxv\0setMaxVelocity(int)\0"
    "ZHR\0"
};

void MeteorMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeteorMgr *_t = static_cast<MeteorMgr *>(_o);
        switch (_id) {
        case 0: _t->zhrChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { int _r = _t->getZHR();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->setZHR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setFlagShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->getFlagShow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setMaxVelocity((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeteorMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeteorMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_MeteorMgr,
      qt_meta_data_MeteorMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeteorMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeteorMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeteorMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeteorMgr))
        return static_cast<void*>(const_cast< MeteorMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int MeteorMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = getZHR(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setZHR(*reinterpret_cast< int*>(_v)); break;
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
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MeteorMgr::zhrChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
