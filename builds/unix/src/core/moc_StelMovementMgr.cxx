/****************************************************************************
** Meta object code from reading C++ file 'StelMovementMgr.hpp'
**
** Created: Sat Apr 20 14:30:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelMovementMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelMovementMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelMovementMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      56,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      37,   35,   16,   16, 0x0a,
      62,   35,   16,   16, 0x0a,
      84,   16,   16,   16, 0x2a,
     107,   16,  102,   16, 0x0a,
     125,   35,   16,   16, 0x0a,
     149,   16,  102,   16, 0x0a,
     186,  169,   16,   16, 0x0a,
     211,  209,   16,   16, 0x0a,
     244,   16,  238,   16, 0x0a,
     266,   35,   16,   16, 0x0a,
     306,   16,  102,   16, 0x0a,
     342,   16,  102,   16, 0x0a,
     366,   35,   16,   16, 0x0a,
     394,   16,  102,   16, 0x0a,
     418,   35,   16,   16, 0x0a,
     446,   16,  102,   16, 0x0a,
     478,   35,   16,   16, 0x0a,
     514,   16,  102,   16, 0x0a,
     545,   35,   16,   16, 0x0a,
     605,  580,   16,   16, 0x0a,
     651,  634,   16,   16, 0x2a,
     680,  676,   16,   16, 0x2a,
     727,  699,   16,   16, 0x0a,
     783,  763,   16,   16, 0x2a,
     822,  815,   16,   16, 0x2a,
     868,  848,   16,   16, 0x0a,
     896,  889,   16,   16, 0x2a,
     918,   16,  911,   16, 0x0a,
     934,   16,  911,   16, 0x0a,
     951,  947,   16,   16, 0x0a,
     970,   16,   16,   16, 0x0a,
     996,   16,   16,   16, 0x0a,
    1034,   16, 1028,   16, 0x0a,
    1060, 1058,   16,   16, 0x0a,
    1093, 1089,   16,   16, 0x0a,
    1111,   16,  911,   16, 0x0a,
    1152, 1123,   16,   16, 0x0a,
    1188, 1175,   16,   16, 0x2a,
    1206,   16,   16,   16, 0x2a,
    1237, 1219,   16,   16, 0x0a,
    1261, 1175,   16,   16, 0x2a,
    1280,   16,   16,   16, 0x2a,
    1294,   16,  911,   16, 0x0a,
    1306,   16,   16,   16, 0x0a,
    1322,   16,   16,   16, 0x0a,
    1337,   16,   16,   16, 0x0a,
    1350,   16,   16,   16, 0x0a,
    1365,   35,   16,   16, 0x0a,
    1380,   16,   16,   16, 0x0a,
    1393,   16,   16,   16, 0x0a,
    1409, 1407,   16,   16, 0x0a,
    1443,   16, 1433,   16, 0x0a,
    1458,   35,   16,   16, 0x0a,
    1480,   16,  102,   16, 0x0a,
    1505, 1498,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StelMovementMgr[] = {
    "StelMovementMgr\0\0toggleMountMode()\0b\0"
    "setEquatorialMount(bool)\0setFlagTracking(bool)\0"
    "setFlagTracking()\0bool\0getFlagTracking()\0"
    "setFlagLockEquPos(bool)\0getFlagLockEquPos()\0"
    "deltaAz,deltaAlt\0panView(double,double)\0"
    "f\0setAutoMoveDuration(float)\0float\0"
    "getAutoMoveDuration()\0"
    "setFlagAutoZoomOutResetsDirection(bool)\0"
    "getFlagAutoZoomOutResetsDirection()\0"
    "getFlagEnableZoomKeys()\0"
    "setFlagEnableZoomKeys(bool)\0"
    "getFlagEnableMoveKeys()\0"
    "setFlagEnableMoveKeys(bool)\0"
    "getFlagEnableMoveAtScreenEdge()\0"
    "setFlagEnableMoveAtScreenEdge(bool)\0"
    "getFlagEnableMouseNavigation()\0"
    "setFlagEnableMouseNavigation(bool)\0"
    "aim,moveDuration,zooming\0"
    "moveToJ2000(Vec3d,float,int)\0"
    "aim,moveDuration\0moveToJ2000(Vec3d,float)\0"
    "aim\0moveToJ2000(Vec3d)\0"
    "target,moveDuration,zooming\0"
    "moveToObject(StelObjectP,float,int)\0"
    "target,moveDuration\0moveToObject(StelObjectP,float)\0"
    "target\0moveToObject(StelObjectP)\0"
    "aimFov,moveDuration\0zoomTo(double,float)\0"
    "aimFov\0zoomTo(double)\0double\0"
    "getCurrentFov()\0getInitFov()\0fov\0"
    "setInitFov(double)\0getInitViewingDirection()\0"
    "setInitViewDirectionToCurrent()\0Vec3d\0"
    "getViewDirectionJ2000()\0v\0"
    "setViewDirectionJ2000(Vec3d)\0max\0"
    "setMaxFov(double)\0getMaxFov()\0"
    "moveDuration,allowManualZoom\0"
    "autoZoomIn(float,bool)\0moveDuration\0"
    "autoZoomIn(float)\0autoZoomIn()\0"
    "moveDuration,full\0autoZoomOut(float,bool)\0"
    "autoZoomOut(float)\0autoZoomOut()\0"
    "getAimFov()\0turnRight(bool)\0turnLeft(bool)\0"
    "turnUp(bool)\0turnDown(bool)\0moveSlow(bool)\0"
    "zoomIn(bool)\0zoomOut(bool)\0m\0"
    "setMountMode(MountMode)\0MountMode\0"
    "getMountMode()\0setDragTimeMode(bool)\0"
    "getDragTimeMode()\0action\0"
    "selectedObjectChange(StelModule::StelModuleSelectAction)\0"
};

void StelMovementMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelMovementMgr *_t = static_cast<StelMovementMgr *>(_o);
        switch (_id) {
        case 0: _t->toggleMountMode(); break;
        case 1: _t->setEquatorialMount((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setFlagTracking((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setFlagTracking(); break;
        case 4: { bool _r = _t->getFlagTracking();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setFlagLockEquPos((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { bool _r = _t->getFlagLockEquPos();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->panView((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->setAutoMoveDuration((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: { float _r = _t->getAutoMoveDuration();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 10: _t->setFlagAutoZoomOutResetsDirection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { bool _r = _t->getFlagAutoZoomOutResetsDirection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->getFlagEnableZoomKeys();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->setFlagEnableZoomKeys((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: { bool _r = _t->getFlagEnableMoveKeys();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->setFlagEnableMoveKeys((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { bool _r = _t->getFlagEnableMoveAtScreenEdge();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: _t->setFlagEnableMoveAtScreenEdge((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: { bool _r = _t->getFlagEnableMouseNavigation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: _t->setFlagEnableMouseNavigation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->moveToJ2000((*reinterpret_cast< const Vec3d(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 21: _t->moveToJ2000((*reinterpret_cast< const Vec3d(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 22: _t->moveToJ2000((*reinterpret_cast< const Vec3d(*)>(_a[1]))); break;
        case 23: _t->moveToObject((*reinterpret_cast< const StelObjectP(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 24: _t->moveToObject((*reinterpret_cast< const StelObjectP(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 25: _t->moveToObject((*reinterpret_cast< const StelObjectP(*)>(_a[1]))); break;
        case 26: _t->zoomTo((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 27: _t->zoomTo((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: { double _r = _t->getCurrentFov();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 29: { double _r = _t->getInitFov();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 30: _t->setInitFov((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 31: _t->getInitViewingDirection(); break;
        case 32: _t->setInitViewDirectionToCurrent(); break;
        case 33: { Vec3d _r = _t->getViewDirectionJ2000();
            if (_a[0]) *reinterpret_cast< Vec3d*>(_a[0]) = _r; }  break;
        case 34: _t->setViewDirectionJ2000((*reinterpret_cast< const Vec3d(*)>(_a[1]))); break;
        case 35: _t->setMaxFov((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 36: { double _r = _t->getMaxFov();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 37: _t->autoZoomIn((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 38: _t->autoZoomIn((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->autoZoomIn(); break;
        case 40: _t->autoZoomOut((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->autoZoomOut((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->autoZoomOut(); break;
        case 43: { double _r = _t->getAimFov();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 44: _t->turnRight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->turnLeft((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->turnUp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->turnDown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->moveSlow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->zoomIn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->zoomOut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->setMountMode((*reinterpret_cast< MountMode(*)>(_a[1]))); break;
        case 52: { MountMode _r = _t->getMountMode();
            if (_a[0]) *reinterpret_cast< MountMode*>(_a[0]) = _r; }  break;
        case 53: _t->setDragTimeMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: { bool _r = _t->getDragTimeMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 55: _t->selectedObjectChange((*reinterpret_cast< StelModule::StelModuleSelectAction(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelMovementMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelMovementMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_StelMovementMgr,
      qt_meta_data_StelMovementMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelMovementMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelMovementMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelMovementMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelMovementMgr))
        return static_cast<void*>(const_cast< StelMovementMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int StelMovementMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
