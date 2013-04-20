/****************************************************************************
** Meta object code from reading C++ file 'LandscapeMgr.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/core/modules/LandscapeMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LandscapeMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LandscapeMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       4,  239, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   14,   13,   13, 0x05,
      57,   14,   13,   13, 0x05,
      95,   14,   13,   13, 0x05,
     121,   14,   13,   13, 0x05,
     153,   13,   13,   13, 0x05,
     178,  173,   13,   13, 0x05,
     205,   13,   13,   13, 0x05,
     232,  223,   13,   13, 0x05,
     256,  173,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     297,   13,  285,   13, 0x0a,
     320,   13,  285,   13, 0x0a,
     341,   13,  285,   13, 0x0a,
     363,   13,   13,   13, 0x0a,
     395,  392,  387,   13, 0x0a,
     434,   13,  426,   13, 0x0a,
     465,  460,  387,   13, 0x0a,
     498,   13,   13,   13, 0x0a,
     522,  392,  387,   13, 0x0a,
     553,   13,  426,   13, 0x0a,
     590,   13,  426,   13, 0x0a,
     607,   13,  387,   13, 0x0a,
     626,   14,   13,   13, 0x0a,
     649,   13,  387,   13, 0x0a,
     662,   14,   13,   13, 0x0a,
     679,   13,  387,   13, 0x0a,
     712,  710,   13,   13, 0x0a,
     747,   13,  387,   13, 0x0a,
     772,   14,   13,   13, 0x0a,
     807,   13,  801,   13, 0x0a,
     834,  832,   13,   13, 0x0a,
     864,   13,  387,   13, 0x0a,
     884,   14,   13,   13, 0x0a,
     914,   13,  908,   13, 0x0a,
     944,  942,   13,   13, 0x0a,
     984,  977,   13,   13, 0x0a,
    1027,   13, 1023,   13, 0x0a,
    1065, 1063,   13,   13, 0x0a,
    1125, 1085,  426,   13, 0x0a,
    1200, 1172,  426,   13, 0x2a,
    1262, 1242,  426,   13, 0x2a,
    1311, 1299,  387,   13, 0x0a,
    1336, 1299,  426,   13, 0x0a,
    1371, 1299, 1363,   13, 0x0a,
    1406, 1398,   13,   13, 0x08,
    1428,   13,   13,   13, 0x08,

 // properties: name, type, flags
    1441,  387, 0x01495003,
    1461,  387, 0x01495003,
    1486,  387, 0x01495003,
    1499,  387, 0x01495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_LandscapeMgr[] = {
    "LandscapeMgr\0\0displayed\0"
    "atmosphereDisplayedChanged(bool)\0"
    "cardinalsPointsDisplayedChanged(bool)\0"
    "fogDisplayedChanged(bool)\0"
    "landscapeDisplayedChanged(bool)\0"
    "landscapesChanged()\0path\0"
    "errorUnableToOpen(QString)\0errorNotArchive()\0"
    "nameOrID\0errorNotUnique(QString)\0"
    "errorRemoveManually(QString)\0QStringList\0"
    "getAllLandscapeNames()\0getAllLandscapeIDs()\0"
    "getUserLandscapeIDs()\0getCurrentLandscapeID()\0"
    "bool\0id\0setCurrentLandscapeID(QString)\0"
    "QString\0getCurrentLandscapeName()\0"
    "name\0setCurrentLandscapeName(QString)\0"
    "getDefaultLandscapeID()\0"
    "setDefaultLandscapeID(QString)\0"
    "getCurrentLandscapeHtmlDescription()\0"
    "getDescription()\0getFlagLandscape()\0"
    "setFlagLandscape(bool)\0getFlagFog()\0"
    "setFlagFog(bool)\0getFlagLandscapeSetsLocation()\0"
    "b\0setFlagLandscapeSetsLocation(bool)\0"
    "getFlagCardinalsPoints()\0"
    "setFlagCardinalsPoints(bool)\0Vec3f\0"
    "getColorCardinalPoints()\0v\0"
    "setColorCardinalPoints(Vec3f)\0"
    "getFlagAtmosphere()\0setFlagAtmosphere(bool)\0"
    "float\0getAtmosphereFadeDuration()\0f\0"
    "setAtmosphereFadeDuration(float)\0"
    "bIndex\0setAtmosphereBortleLightPollution(int)\0"
    "int\0getAtmosphereBortleLightPollution()\0"
    "d\0setZRotation(float)\0"
    "pathToSourceArchive,display,forAllUsers\0"
    "installLandscapeFromArchive(QString,bool,bool)\0"
    "pathToSourceArchive,display\0"
    "installLandscapeFromArchive(QString,bool)\0"
    "pathToSourceArchive\0"
    "installLandscapeFromArchive(QString)\0"
    "landscapeID\0removeLandscape(QString)\0"
    "loadLandscapeName(QString)\0quint64\0"
    "loadLandscapeSize(QString)\0section\0"
    "setStelStyle(QString)\0updateI18n()\0"
    "atmosphereDisplayed\0cardinalsPointsDisplayed\0"
    "fogDisplayed\0landscapeDisplayed\0"
};

void LandscapeMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LandscapeMgr *_t = static_cast<LandscapeMgr *>(_o);
        switch (_id) {
        case 0: _t->atmosphereDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->cardinalsPointsDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->fogDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->landscapeDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->landscapesChanged(); break;
        case 5: _t->errorUnableToOpen((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->errorNotArchive(); break;
        case 7: _t->errorNotUnique((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->errorRemoveManually((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: { QStringList _r = _t->getAllLandscapeNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 10: { QStringList _r = _t->getAllLandscapeIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 11: { QStringList _r = _t->getUserLandscapeIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 12: _t->getCurrentLandscapeID(); break;
        case 13: { bool _r = _t->setCurrentLandscapeID((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->getCurrentLandscapeName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->setCurrentLandscapeName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->getDefaultLandscapeID(); break;
        case 17: { bool _r = _t->setDefaultLandscapeID((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->getCurrentLandscapeHtmlDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QString _r = _t->getDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->getFlagLandscape();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: _t->setFlagLandscape((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 22: { bool _r = _t->getFlagFog();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: _t->setFlagFog((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 24: { bool _r = _t->getFlagLandscapeSetsLocation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: _t->setFlagLandscapeSetsLocation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: { bool _r = _t->getFlagCardinalsPoints();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->setFlagCardinalsPoints((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 28: { Vec3f _r = _t->getColorCardinalPoints();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 29: _t->setColorCardinalPoints((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 30: { bool _r = _t->getFlagAtmosphere();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: _t->setFlagAtmosphere((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 32: { float _r = _t->getAtmosphereFadeDuration();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 33: _t->setAtmosphereFadeDuration((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 34: _t->setAtmosphereBortleLightPollution((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: { int _r = _t->getAtmosphereBortleLightPollution();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 36: _t->setZRotation((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 37: { QString _r = _t->installLandscapeFromArchive((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 38: { QString _r = _t->installLandscapeFromArchive((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 39: { QString _r = _t->installLandscapeFromArchive((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->removeLandscape((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { QString _r = _t->loadLandscapeName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 42: { quint64 _r = _t->loadLandscapeSize((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 43: _t->setStelStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 44: _t->updateI18n(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LandscapeMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LandscapeMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_LandscapeMgr,
      qt_meta_data_LandscapeMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LandscapeMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LandscapeMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LandscapeMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LandscapeMgr))
        return static_cast<void*>(const_cast< LandscapeMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int LandscapeMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = getFlagAtmosphere(); break;
        case 1: *reinterpret_cast< bool*>(_v) = getFlagCardinalsPoints(); break;
        case 2: *reinterpret_cast< bool*>(_v) = getFlagFog(); break;
        case 3: *reinterpret_cast< bool*>(_v) = getFlagLandscape(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFlagAtmosphere(*reinterpret_cast< bool*>(_v)); break;
        case 1: setFlagCardinalsPoints(*reinterpret_cast< bool*>(_v)); break;
        case 2: setFlagFog(*reinterpret_cast< bool*>(_v)); break;
        case 3: setFlagLandscape(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LandscapeMgr::atmosphereDisplayedChanged(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LandscapeMgr::cardinalsPointsDisplayedChanged(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LandscapeMgr::fogDisplayedChanged(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LandscapeMgr::landscapeDisplayedChanged(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LandscapeMgr::landscapesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void LandscapeMgr::errorUnableToOpen(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LandscapeMgr::errorNotArchive()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void LandscapeMgr::errorNotUnique(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void LandscapeMgr::errorRemoveManually(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
