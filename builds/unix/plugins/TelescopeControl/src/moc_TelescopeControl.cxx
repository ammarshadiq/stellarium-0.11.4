/****************************************************************************
** Meta object code from reading C++ file 'TelescopeControl.hpp'
**
** Created: Sat Apr 20 14:28:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/TelescopeControl/src/TelescopeControl.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TelescopeControl.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TelescopeControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   18,   17,   17, 0x05,
      62,   57,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      88,   86,   17,   17, 0x0a,
     124,   17,  119,   17, 0x0a,
     151,   86,   17,   17, 0x0a,
     180,   17,  119,   17, 0x0a,
     205,   86,   17,   17, 0x0a,
     235,   17,  119,   17, 0x0a,
     263,  261,   17,   17, 0x0a,
     286,   17,   17,   17, 0x0a,
     304,   17,   17,   17, 0x0a,
     320,  261,   17,   17, 0x0a,
     341,  261,   17,   17, 0x0a,
     363,   17,   17,   17, 0x0a,
     389,  380,   17,   17, 0x0a,
     406,   17,   17,   17, 0x0a,
     438,   17,   17,   17, 0x0a,
     469,   86,   17,   17, 0x0a,
     513,  505,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TelescopeControl[] = {
    "TelescopeControl\0\0slot,name\0"
    "clientConnected(int,QString)\0slot\0"
    "clientDisconnected(int)\0b\0"
    "setFlagTelescopeReticles(bool)\0bool\0"
    "getFlagTelescopeReticles()\0"
    "setFlagTelescopeLabels(bool)\0"
    "getFlagTelescopeLabels()\0"
    "setFlagTelescopeCircles(bool)\0"
    "getFlagTelescopeCircles()\0c\0"
    "setReticleColor(Vec3f)\0getReticleColor()\0"
    "getLabelColor()\0setLabelColor(Vec3f)\0"
    "setCircleColor(Vec3f)\0getCircleColor()\0"
    "fontSize\0setFontSize(int)\0"
    "slewTelescopeToSelectedObject()\0"
    "slewTelescopeToViewDirection()\0"
    "setFlagUseTelescopeServerLogs(bool)\0"
    "section\0setStelStyle(QString)\0"
};

void TelescopeControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TelescopeControl *_t = static_cast<TelescopeControl *>(_o);
        switch (_id) {
        case 0: _t->clientConnected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->clientDisconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setFlagTelescopeReticles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { bool _r = _t->getFlagTelescopeReticles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->setFlagTelescopeLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->getFlagTelescopeLabels();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setFlagTelescopeCircles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->getFlagTelescopeCircles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->setReticleColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 9: _t->getReticleColor(); break;
        case 10: _t->getLabelColor(); break;
        case 11: _t->setLabelColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 12: _t->setCircleColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 13: _t->getCircleColor(); break;
        case 14: _t->setFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->slewTelescopeToSelectedObject(); break;
        case 16: _t->slewTelescopeToViewDirection(); break;
        case 17: _t->setFlagUseTelescopeServerLogs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->setStelStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TelescopeControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TelescopeControl::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_TelescopeControl,
      qt_meta_data_TelescopeControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TelescopeControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TelescopeControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TelescopeControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeControl))
        return static_cast<void*>(const_cast< TelescopeControl*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int TelescopeControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void TelescopeControl::clientConnected(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TelescopeControl::clientDisconnected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_TelescopeControlStelPluginInterface[] = {

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

static const char qt_meta_stringdata_TelescopeControlStelPluginInterface[] = {
    "TelescopeControlStelPluginInterface\0"
};

void TelescopeControlStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TelescopeControlStelPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TelescopeControlStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TelescopeControlStelPluginInterface,
      qt_meta_data_TelescopeControlStelPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TelescopeControlStelPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TelescopeControlStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TelescopeControlStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeControlStelPluginInterface))
        return static_cast<void*>(const_cast< TelescopeControlStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< TelescopeControlStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< TelescopeControlStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int TelescopeControlStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
