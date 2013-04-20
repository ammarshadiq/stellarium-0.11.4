/****************************************************************************
** Meta object code from reading C++ file 'Satellites.hpp'
**
** Created: Sat Apr 20 14:27:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Satellites/src/Satellites.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Satellites.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Satellites[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x05,
      84,   62,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,  115,   11,   11, 0x0a,
     141,   11,  136,   11, 0x0a,
     160,   11,  156,   11, 0x0a,
     184,  179,   11,   11, 0x0a,
     206,   11,  136,   11, 0x0a,
     222,  115,   11,   11, 0x0a,
     242,   11,   11,   11, 0x0a,
     255,  115,   11,   11, 0x0a,
     279,   11,  136,   11, 0x0a,
     299,   11,   11,   11, 0x0a,
     340,  323,   11,   11, 0x0a,
     380,  372,   11,   11, 0x2a,
     404,   11,   11,   11, 0x0a,
     426,  421,   11,   11, 0x0a,
     447,   11,   11,   11, 0x2a,
     469,  461,   11,   11, 0x08,
     491,   11,   11,   11, 0x08,
     514,  508,   11,   11, 0x08,
     557,  553,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Satellites[] = {
    "Satellites\0\0state\0"
    "updateStateChanged(Satellites::UpdateState)\0"
    "updates,total,missing\0"
    "tleUpdateComplete(int,int,int)\0b\0"
    "setFlagHints(bool)\0bool\0getFlagHints()\0"
    "int\0getLabelFontSize()\0size\0"
    "setLabelFontSize(int)\0getFlagLabels()\0"
    "setFlagLabels(bool)\0updateTLEs()\0"
    "setOrbitLinesFlag(bool)\0getOrbitLinesFlag()\0"
    "recalculateOrbitLines()\0message,hexColor\0"
    "displayMessage(QString,QString)\0message\0"
    "displayMessage(QString)\0messageTimeout()\0"
    "path\0saveTleData(QString)\0saveTleData()\0"
    "section\0setStelStyle(QString)\0"
    "checkForUpdate()\0reply\0"
    "updateDownloadComplete(QNetworkReply*)\0"
    "loc\0observerLocationChanged(StelLocation)\0"
};

void Satellites::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Satellites *_t = static_cast<Satellites *>(_o);
        switch (_id) {
        case 0: _t->updateStateChanged((*reinterpret_cast< Satellites::UpdateState(*)>(_a[1]))); break;
        case 1: _t->tleUpdateComplete((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->setFlagHints((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { bool _r = _t->getFlagHints();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->getLabelFontSize();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->setLabelFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: { bool _r = _t->getFlagLabels();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->setFlagLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateTLEs(); break;
        case 9: _t->setOrbitLinesFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: { bool _r = _t->getOrbitLinesFlag();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->recalculateOrbitLines(); break;
        case 12: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->messageTimeout(); break;
        case 15: _t->saveTleData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->saveTleData(); break;
        case 17: _t->setStelStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->checkForUpdate(); break;
        case 19: _t->updateDownloadComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 20: _t->observerLocationChanged((*reinterpret_cast< StelLocation(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Satellites::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Satellites::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_Satellites,
      qt_meta_data_Satellites, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Satellites::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Satellites::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Satellites::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Satellites))
        return static_cast<void*>(const_cast< Satellites*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int Satellites::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void Satellites::updateStateChanged(Satellites::UpdateState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Satellites::tleUpdateComplete(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_SatellitesStelPluginInterface[] = {

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

static const char qt_meta_stringdata_SatellitesStelPluginInterface[] = {
    "SatellitesStelPluginInterface\0"
};

void SatellitesStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SatellitesStelPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SatellitesStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SatellitesStelPluginInterface,
      qt_meta_data_SatellitesStelPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SatellitesStelPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SatellitesStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SatellitesStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SatellitesStelPluginInterface))
        return static_cast<void*>(const_cast< SatellitesStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< SatellitesStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< SatellitesStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int SatellitesStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
