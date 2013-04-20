/****************************************************************************
** Meta object code from reading C++ file 'Exoplanets.hpp'
**
** Created: Sat Apr 20 14:25:38 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Exoplanets/src/Exoplanets.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Exoplanets.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Exoplanets[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x05,
      62,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   11,   11,   11, 0x0a,
      98,   96,   11,   11, 0x0a,
     131,   11,  126,   11, 0x0a,
     172,  155,   11,   11, 0x0a,
     212,  204,   11,   11, 0x2a,
     236,   11,   11,   11, 0x0a,
     253,   11,   11,   11, 0x08,
     276,  270,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Exoplanets[] = {
    "Exoplanets\0\0state\0"
    "updateStateChanged(Exoplanets::UpdateState)\0"
    "jsonUpdateComplete()\0updateJSON()\0b\0"
    "setFlagShowExoplanets(bool)\0bool\0"
    "getFlagShowExoplanets()\0message,hexColor\0"
    "displayMessage(QString,QString)\0message\0"
    "displayMessage(QString)\0messageTimeout()\0"
    "checkForUpdate()\0reply\0"
    "updateDownloadComplete(QNetworkReply*)\0"
};

void Exoplanets::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Exoplanets *_t = static_cast<Exoplanets *>(_o);
        switch (_id) {
        case 0: _t->updateStateChanged((*reinterpret_cast< Exoplanets::UpdateState(*)>(_a[1]))); break;
        case 1: _t->jsonUpdateComplete(); break;
        case 2: _t->updateJSON(); break;
        case 3: _t->setFlagShowExoplanets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->getFlagShowExoplanets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->messageTimeout(); break;
        case 8: _t->checkForUpdate(); break;
        case 9: _t->updateDownloadComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Exoplanets::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Exoplanets::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_Exoplanets,
      qt_meta_data_Exoplanets, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Exoplanets::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Exoplanets::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Exoplanets::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Exoplanets))
        return static_cast<void*>(const_cast< Exoplanets*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int Exoplanets::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Exoplanets::updateStateChanged(Exoplanets::UpdateState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Exoplanets::jsonUpdateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_ExoplanetsStelPluginInterface[] = {

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

static const char qt_meta_stringdata_ExoplanetsStelPluginInterface[] = {
    "ExoplanetsStelPluginInterface\0"
};

void ExoplanetsStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ExoplanetsStelPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExoplanetsStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ExoplanetsStelPluginInterface,
      qt_meta_data_ExoplanetsStelPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExoplanetsStelPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExoplanetsStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExoplanetsStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExoplanetsStelPluginInterface))
        return static_cast<void*>(const_cast< ExoplanetsStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< ExoplanetsStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< ExoplanetsStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int ExoplanetsStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
