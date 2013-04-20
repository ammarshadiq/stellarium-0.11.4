/****************************************************************************
** Meta object code from reading C++ file 'StelSkyDrawer.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelSkyDrawer.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelSkyDrawer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelSkyDrawer[] = {

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
      17,   15,   14,   14, 0x0a,
      46,   14,   14,   14, 0x2a,
      75,   14,   69,   14, 0x0a,
      98,   15,   14,   14, 0x0a,
     127,   14,   14,   14, 0x2a,
     150,   14,   69,   14, 0x0a,
     173,   15,   14,   14, 0x0a,
     198,   14,   69,   14, 0x0a,
     217,   15,   14,   14, 0x0a,
     243,   14,  238,   14, 0x0a,
     260,   15,   14,   14, 0x0a,
     283,   14,  238,   14, 0x0a,
     308,  302,   14,   14, 0x0a,
     332,   14,  328,   14, 0x0a,
     349,   14,   69,   14, 0x0a,
     369,   14,   69,   14, 0x0a,
     389,   15,   14,   14, 0x0a,
     422,   14,  238,   14, 0x0a,
     451,   15,   14,   14, 0x0a,
     478,   14,  238,   14, 0x0a,
     510,  501,   14,   14, 0x0a,
     550,   14,  543,   14, 0x0a,
     585,  577,   14,   14, 0x0a,
     618,   14,  543,   14, 0x0a,
     650,  645,   14,   14, 0x0a,
     680,   14,  543,   14, 0x0a,
     704,   14,   14,   14, 0x0a,
     720,   14,   14,   14, 0x0a,
     736,   14,   69,   14, 0x0a,
     764,  762,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StelSkyDrawer[] = {
    "StelSkyDrawer\0\0b\0setRelativeStarScale(double)\0"
    "setRelativeStarScale()\0float\0"
    "getRelativeStarScale()\0"
    "setAbsoluteStarScale(double)\0"
    "setAbsoluteStarScale()\0getAbsoluteStarScale()\0"
    "setTwinkleAmount(double)\0getTwinkleAmount()\0"
    "setFlagTwinkle(bool)\0bool\0getFlagTwinkle()\0"
    "setFlagPointStar(bool)\0getFlagPointStar()\0"
    "index\0setBortleScale(int)\0int\0"
    "getBortleScale()\0getLimitMagnitude()\0"
    "getLimitLuminance()\0"
    "setFlagLuminanceAdaptation(bool)\0"
    "getFlagLuminanceAdaptation()\0"
    "setFlagHasAtmosphere(bool)\0"
    "getFlagHasAtmosphere()\0extCoeff\0"
    "setExtinctionCoefficient(double)\0"
    "double\0getExtinctionCoefficient()\0"
    "celsius\0setAtmosphereTemperature(double)\0"
    "getAtmosphereTemperature()\0mbar\0"
    "setAtmospherePressure(double)\0"
    "getAtmospherePressure()\0getExtinction()\0"
    "getRefraction()\0getBig3dModelHaloRadius()\0"
    "r\0setBig3dModelHaloRadius(float)\0"
};

void StelSkyDrawer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelSkyDrawer *_t = static_cast<StelSkyDrawer *>(_o);
        switch (_id) {
        case 0: _t->setRelativeStarScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setRelativeStarScale(); break;
        case 2: { float _r = _t->getRelativeStarScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 3: _t->setAbsoluteStarScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setAbsoluteStarScale(); break;
        case 5: { float _r = _t->getAbsoluteStarScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 6: _t->setTwinkleAmount((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: { float _r = _t->getTwinkleAmount();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 8: _t->setFlagTwinkle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: { bool _r = _t->getFlagTwinkle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->setFlagPointStar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { bool _r = _t->getFlagPointStar();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->setBortleScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: { int _r = _t->getBortleScale();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { float _r = _t->getLimitMagnitude();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 15: { float _r = _t->getLimitLuminance();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 16: _t->setFlagLuminanceAdaptation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: { bool _r = _t->getFlagLuminanceAdaptation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->setFlagHasAtmosphere((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: { bool _r = _t->getFlagHasAtmosphere();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->setExtinctionCoefficient((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: { double _r = _t->getExtinctionCoefficient();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 22: _t->setAtmosphereTemperature((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: { double _r = _t->getAtmosphereTemperature();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 24: _t->setAtmospherePressure((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: { double _r = _t->getAtmospherePressure();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 26: _t->getExtinction(); break;
        case 27: _t->getRefraction(); break;
        case 28: { float _r = _t->getBig3dModelHaloRadius();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 29: _t->setBig3dModelHaloRadius((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelSkyDrawer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelSkyDrawer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelSkyDrawer,
      qt_meta_data_StelSkyDrawer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelSkyDrawer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelSkyDrawer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelSkyDrawer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelSkyDrawer))
        return static_cast<void*>(const_cast< StelSkyDrawer*>(this));
    return QObject::qt_metacast(_clname);
}

int StelSkyDrawer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
