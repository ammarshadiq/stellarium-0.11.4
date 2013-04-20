/****************************************************************************
** Meta object code from reading C++ file 'SolarSystem.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/core/modules/SolarSystem.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SolarSystem.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SolarSystem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   13,   12,   12, 0x0a,
      41,   12,   36,   12, 0x0a,
      58,   13,   12,   12, 0x0a,
      78,   12,   36,   12, 0x0a,
      94,   13,   12,   12, 0x0a,
     113,   12,   36,   12, 0x0a,
     128,   13,   12,   12, 0x0a,
     148,   12,   36,   12, 0x0a,
     166,  164,   12,   12, 0x0a,
     195,   12,  189,   12, 0x0a,
     213,   13,   12,   12, 0x0a,
     233,   12,   36,   12, 0x0a,
     249,   13,   12,   12, 0x0a,
     278,   12,   36,   12, 0x0a,
     315,  303,   12,   12, 0x0a,
     336,  334,   12,   12, 0x0a,
     358,   12,   12,   12, 0x0a,
     375,  334,   12,   12, 0x0a,
     403,   12,  397,   12, 0x0a,
     420,  334,   12,   12, 0x0a,
     442,   12,  397,   12, 0x0a,
     459,   13,   12,   12, 0x0a,
     482,   12,   36,   12, 0x0a,
     503,  501,   12,   12, 0x0a,
     523,   12,  189,   12, 0x0a,
     538,   12,   12,   12, 0x0a,
     577,  551,  189,   12, 0x0a,
     622,  611,  189,   12, 0x2a,
     658,  651,   12,   12, 0x08,
     723,  715,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SolarSystem[] = {
    "SolarSystem\0\0b\0setFlagPlanets(bool)\0"
    "bool\0getFlagPlanets()\0setFlagTrails(bool)\0"
    "getFlagTrails()\0setFlagHints(bool)\0"
    "getFlagHints()\0setFlagLabels(bool)\0"
    "getFlagLabels()\0a\0setLabelsAmount(float)\0"
    "float\0getLabelsAmount()\0setFlagOrbits(bool)\0"
    "getFlagOrbits()\0setFlagLightTravelTime(bool)\0"
    "getFlagLightTravelTime()\0newFontSize\0"
    "setFontSize(float)\0c\0setLabelsColor(Vec3f)\0"
    "getLabelsColor()\0setOrbitsColor(Vec3f)\0"
    "Vec3f\0getOrbitsColor()\0setTrailsColor(Vec3f)\0"
    "getTrailsColor()\0setFlagMoonScale(bool)\0"
    "getFlagMoonScale()\0f\0setMoonScale(float)\0"
    "getMoonScale()\0updateI18n()\0"
    "planetName,withExtinction\0"
    "getPlanetVMagnitude(QString,bool)\0"
    "planetName\0getPlanetVMagnitude(QString)\0"
    "action\0selectedObjectChange(StelModule::StelModuleSelectAction)\0"
    "section\0setStelStyle(QString)\0"
};

void SolarSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SolarSystem *_t = static_cast<SolarSystem *>(_o);
        switch (_id) {
        case 0: _t->setFlagPlanets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->getFlagPlanets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->setFlagTrails((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { bool _r = _t->getFlagTrails();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->setFlagHints((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->getFlagHints();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setFlagLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->getFlagLabels();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->setLabelsAmount((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: { float _r = _t->getLabelsAmount();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 10: _t->setFlagOrbits((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { bool _r = _t->getFlagOrbits();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->setFlagLightTravelTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: { bool _r = _t->getFlagLightTravelTime();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->setFontSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 15: _t->setLabelsColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 16: _t->getLabelsColor(); break;
        case 17: _t->setOrbitsColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 18: { Vec3f _r = _t->getOrbitsColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 19: _t->setTrailsColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 20: { Vec3f _r = _t->getTrailsColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 21: _t->setFlagMoonScale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: { bool _r = _t->getFlagMoonScale();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: _t->setMoonScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: { float _r = _t->getMoonScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 25: _t->updateI18n(); break;
        case 26: { float _r = _t->getPlanetVMagnitude((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 27: { float _r = _t->getPlanetVMagnitude((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 28: _t->selectedObjectChange((*reinterpret_cast< StelModule::StelModuleSelectAction(*)>(_a[1]))); break;
        case 29: _t->setStelStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SolarSystem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SolarSystem::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_SolarSystem,
      qt_meta_data_SolarSystem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SolarSystem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SolarSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SolarSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SolarSystem))
        return static_cast<void*>(const_cast< SolarSystem*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int SolarSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
