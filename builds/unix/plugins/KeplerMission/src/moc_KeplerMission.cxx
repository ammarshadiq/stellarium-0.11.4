/****************************************************************************
** Meta object code from reading C++ file 'KeplerMission.hpp'
**
** Created: Sat Apr 20 14:27:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/KeplerMission/src/KeplerMission.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeplerMission.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_KeplerMission[] = {

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
      17,   15,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_KeplerMission[] = {
    "KeplerMission\0\0b\0enableKeplerMission(bool)\0"
};

void KeplerMission::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KeplerMission *_t = static_cast<KeplerMission *>(_o);
        switch (_id) {
        case 0: _t->enableKeplerMission((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData KeplerMission::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KeplerMission::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_KeplerMission,
      qt_meta_data_KeplerMission, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KeplerMission::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KeplerMission::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KeplerMission::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeplerMission))
        return static_cast<void*>(const_cast< KeplerMission*>(this));
    return StelModule::qt_metacast(_clname);
}

int KeplerMission::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_KeplerMissionStelPluginInterface[] = {

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

static const char qt_meta_stringdata_KeplerMissionStelPluginInterface[] = {
    "KeplerMissionStelPluginInterface\0"
};

void KeplerMissionStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData KeplerMissionStelPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KeplerMissionStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KeplerMissionStelPluginInterface,
      qt_meta_data_KeplerMissionStelPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KeplerMissionStelPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KeplerMissionStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KeplerMissionStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeplerMissionStelPluginInterface))
        return static_cast<void*>(const_cast< KeplerMissionStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< KeplerMissionStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< KeplerMissionStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int KeplerMissionStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
