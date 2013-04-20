/****************************************************************************
** Meta object code from reading C++ file 'StelCore.hpp'
**
** Created: Sat Apr 20 14:30:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelCore.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelCore.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelCore[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       1,  289, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      45,   40,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   69,    9,    9, 0x0a,
     130,    9,  115,    9, 0x0a,
     165,    9,  157,    9, 0x0a,
     195,   69,    9,    9, 0x0a,
     244,    9,  232,    9, 0x0a,
     273,  271,    9,    9, 0x0a,
     331,  323,    9,    9, 0x0a,
     360,  358,    9,    9, 0x0a,
     401,  396,    9,    9, 0x0a,
     419,  396,    9,    9, 0x0a,
     442,    9,  437,    9, 0x0a,
     456,    9,  437,    9, 0x0a,
     470,    9,  157,    9, 0x0a,
     496,  493,    9,    9, 0x0a,
     526,    9,    9,    9, 0x0a,
     552,    9,    9,    9, 0x0a,
     570,  567,    9,    9, 0x0a,
     593,    9,  586,    9, 0x0a,
     603,    9,  586,    9, 0x0a,
     624,  622,    9,    9, 0x0a,
     652,  649,    9,    9, 0x0a,
     672,    9,  586,    9, 0x0a,
     686,    9,    9,    9, 0x0a,
     706,    9,    9,    9, 0x0a,
     726,    9,    9,    9, 0x0a,
     750,    9,    9,    9, 0x0a,
     774,    9,    9,    9, 0x0a,
     793,    9,    9,    9, 0x0a,
     812,    9,    9,    9, 0x0a,
     834,    9,  437,    9, 0x0a,
     853,    9,    9,    9, 0x0a,
     873,  866,    9,    9, 0x0a,
     893,    9,  437,    9, 0x0a,
     914,    9,  908,    9, 0x0a,
     935,  933,    9,    9, 0x0a,
     962,  959,    9,    9, 0x0a,
     990,    9,    9,    9, 0x0a,
    1000,    9,    9,    9, 0x0a,
    1009,    9,    9,    9, 0x0a,
    1019,    9,    9,    9, 0x0a,
    1036,    9,    9,    9, 0x0a,
    1054,    9,    9,    9, 0x0a,
    1073,    9,    9,    9, 0x0a,
    1091,    9,    9,    9, 0x0a,
    1106,    9,    9,    9, 0x0a,
    1120,    9,    9,    9, 0x0a,
    1135,    9,    9,    9, 0x0a,
    1157,    9,    9,    9, 0x0a,
    1180,    9,    9,    9, 0x0a,
    1204,    9,    9,    9, 0x0a,
    1227,  622,    9,    9, 0x0a,
    1248,  622,    9,    9, 0x0a,
    1272,    9,    9,    9, 0x0a,

 // enums: name, flags, count, data
     115, 0x0,    8,  293,

 // enum data: key, value
    1297, uint(StelCore::ProjectionPerspective),
    1319, uint(StelCore::ProjectionEqualArea),
    1339, uint(StelCore::ProjectionStereographic),
    1363, uint(StelCore::ProjectionFisheye),
    1381, uint(StelCore::ProjectionHammer),
    1398, uint(StelCore::ProjectionCylinder),
    1417, uint(StelCore::ProjectionMercator),
    1436, uint(StelCore::ProjectionOrthographic),

       0        // eod
};

static const char qt_meta_stringdata_StelCore[] = {
    "StelCore\0\0locationChanged(StelLocation)\0"
    "rate\0timeRateChanged(double)\0type\0"
    "setCurrentProjectionType(ProjectionType)\0"
    "ProjectionType\0getCurrentProjectionType()\0"
    "QString\0getCurrentProjectionTypeKey()\0"
    "setCurrentProjectionTypeKey(QString)\0"
    "QStringList\0getAllProjectionTypeKeys()\0"
    "m\0setMaskType(StelProjector::StelProjectorMaskType)\0"
    "gravity\0setFlagGravityLabels(bool)\0a\0"
    "setDefautAngleForGravityText(float)\0"
    "flip\0setFlipHorz(bool)\0setFlipVert(bool)\0"
    "bool\0getFlipHorz()\0getFlipVert()\0"
    "getDefaultLocationID()\0id\0"
    "setDefaultLocationID(QString)\0"
    "returnToDefaultLocation()\0returnToHome()\0"
    "JD\0setJDay(double)\0double\0getJDay()\0"
    "getPresetSkyTime()\0d\0setPresetSkyTime(double)\0"
    "ts\0setTimeRate(double)\0getTimeRate()\0"
    "increaseTimeSpeed()\0decreaseTimeSpeed()\0"
    "increaseTimeSpeedLess()\0decreaseTimeSpeedLess()\0"
    "setZeroTimeSpeed()\0setRealTimeSpeed()\0"
    "toggleRealTimeSpeed()\0getRealTimeSpeed()\0"
    "setTimeNow()\0target\0setTodayTime(QTime)\0"
    "getIsTimeNow()\0QTime\0getInitTodayTime()\0"
    "t\0setInitTodayTime(QTime)\0dt\0"
    "setPresetSkyTime(QDateTime)\0addHour()\0"
    "addDay()\0addWeek()\0addSiderealDay()\0"
    "addSiderealWeek()\0addSiderealMonth()\0"
    "addSiderealYear()\0subtractHour()\0"
    "subtractDay()\0subtractWeek()\0"
    "subtractSiderealDay()\0subtractSiderealWeek()\0"
    "subtractSiderealMonth()\0subtractSiderealYear()\0"
    "addSolarDays(double)\0addSiderealDays(double)\0"
    "moveObserverToSelected()\0ProjectionPerspective\0"
    "ProjectionEqualArea\0ProjectionStereographic\0"
    "ProjectionFisheye\0ProjectionHammer\0"
    "ProjectionCylinder\0ProjectionMercator\0"
    "ProjectionOrthographic\0"
};

void StelCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelCore *_t = static_cast<StelCore *>(_o);
        switch (_id) {
        case 0: _t->locationChanged((*reinterpret_cast< StelLocation(*)>(_a[1]))); break;
        case 1: _t->timeRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setCurrentProjectionType((*reinterpret_cast< ProjectionType(*)>(_a[1]))); break;
        case 3: { ProjectionType _r = _t->getCurrentProjectionType();
            if (_a[0]) *reinterpret_cast< ProjectionType*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->getCurrentProjectionTypeKey();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->setCurrentProjectionTypeKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { QStringList _r = _t->getAllProjectionTypeKeys();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 7: _t->setMaskType((*reinterpret_cast< StelProjector::StelProjectorMaskType(*)>(_a[1]))); break;
        case 8: _t->setFlagGravityLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setDefautAngleForGravityText((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->setFlipHorz((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setFlipVert((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: { bool _r = _t->getFlipHorz();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->getFlipVert();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->getDefaultLocationID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: _t->setDefaultLocationID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->returnToDefaultLocation(); break;
        case 17: _t->returnToHome(); break;
        case 18: _t->setJDay((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: { double _r = _t->getJDay();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 20: { double _r = _t->getPresetSkyTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 21: _t->setPresetSkyTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->setTimeRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: { double _r = _t->getTimeRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 24: _t->increaseTimeSpeed(); break;
        case 25: _t->decreaseTimeSpeed(); break;
        case 26: _t->increaseTimeSpeedLess(); break;
        case 27: _t->decreaseTimeSpeedLess(); break;
        case 28: _t->setZeroTimeSpeed(); break;
        case 29: _t->setRealTimeSpeed(); break;
        case 30: _t->toggleRealTimeSpeed(); break;
        case 31: { bool _r = _t->getRealTimeSpeed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: _t->setTimeNow(); break;
        case 33: _t->setTodayTime((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 34: { bool _r = _t->getIsTimeNow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { QTime _r = _t->getInitTodayTime();
            if (_a[0]) *reinterpret_cast< QTime*>(_a[0]) = _r; }  break;
        case 36: _t->setInitTodayTime((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 37: _t->setPresetSkyTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 38: _t->addHour(); break;
        case 39: _t->addDay(); break;
        case 40: _t->addWeek(); break;
        case 41: _t->addSiderealDay(); break;
        case 42: _t->addSiderealWeek(); break;
        case 43: _t->addSiderealMonth(); break;
        case 44: _t->addSiderealYear(); break;
        case 45: _t->subtractHour(); break;
        case 46: _t->subtractDay(); break;
        case 47: _t->subtractWeek(); break;
        case 48: _t->subtractSiderealDay(); break;
        case 49: _t->subtractSiderealWeek(); break;
        case 50: _t->subtractSiderealMonth(); break;
        case 51: _t->subtractSiderealYear(); break;
        case 52: _t->addSolarDays((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 53: _t->addSiderealDays((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 54: _t->moveObserverToSelected(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelCore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelCore,
      qt_meta_data_StelCore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelCore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelCore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelCore))
        return static_cast<void*>(const_cast< StelCore*>(this));
    return QObject::qt_metacast(_clname);
}

int StelCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    return _id;
}

// SIGNAL 0
void StelCore::locationChanged(StelLocation _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelCore::timeRateChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
