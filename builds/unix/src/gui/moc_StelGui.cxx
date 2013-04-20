/****************************************************************************
** Meta object code from reading C++ file 'StelGui.hpp'
**
** Created: Sat Apr 20 14:25:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/StelGui.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelGui.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,    9,    8,    8, 0x0a,
      40,    9,    8,    8, 0x0a,
      85,    8,   80,    8, 0x0a,
     118,    9,    8,    8, 0x0a,
     155,    8,   80,    8, 0x0a,
     186,    9,    8,    8, 0x0a,
     221,    9,    8,    8, 0x0a,
     241,    8,    8,    8, 0x0a,
     263,    8,    8,    8, 0x0a,
     285,    8,    8,    8, 0x0a,
     306,    8,    8,    8, 0x0a,
     319,    8,    8,    8, 0x0a,
     333,    8,    8,    8, 0x0a,
     348,    8,    8,    8, 0x0a,
     368,    8,    8,    8, 0x08,
     382,    8,    8,    8, 0x08,
     398,    8,    8,    8, 0x08,
     422,  414,    8,    8, 0x08,
     444,    8,    8,    8, 0x08,
     451,    8,    8,    8, 0x08,
     474,  464,    8,    8, 0x08,
     500,  464,    8,    8, 0x08,
     533,  464,    8,    8, 0x08,
     561,  464,    8,    8, 0x08,
     589,  464,    8,    8, 0x08,
     625,  464,    8,    8, 0x08,
     659,  464,    8,    8, 0x08,
     698,  464,    8,    8, 0x08,
     738,  464,    8,    8, 0x08,
     773,  464,    8,    8, 0x08,
     807,  464,    8,    8, 0x08,
     842,  464,    8,    8, 0x08,
     877,  464,    8,    8, 0x08,
     911,  464,    8,    8, 0x08,
     951,  464,    8,    8, 0x08,
     984,  464,    8,    8, 0x08,
    1022,  464,    8,    8, 0x08,
    1048,  464,    8,    8, 0x08,
    1080,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StelGui[] = {
    "StelGui\0\0b\0setFlagShowFlipButtons(bool)\0"
    "setFlagShowNebulaBackgroundButton(bool)\0"
    "bool\0getAutoHideHorizontalButtonBar()\0"
    "setAutoHideHorizontalButtonBar(bool)\0"
    "getAutoHideVerticalButtonBar()\0"
    "setAutoHideVerticalButtonBar(bool)\0"
    "setScriptKeys(bool)\0increaseScriptSpeed()\0"
    "decreaseScriptSpeed()\0setRealScriptSpeed()\0"
    "stopScript()\0pauseScript()\0resumeScript()\0"
    "setGuiVisible(bool)\0reloadStyle()\0"
    "scriptStarted()\0scriptStopped()\0section\0"
    "setStelStyle(QString)\0quit()\0updateI18n()\0"
    "displayed\0artDisplayedUpdated(bool)\0"
    "boundariesDisplayedUpdated(bool)\0"
    "linesDisplayedUpdated(bool)\0"
    "namesDisplayedUpdated(bool)\0"
    "azimuthalGridDisplayedUpdated(bool)\0"
    "equatorGridDisplayedUpdated(bool)\0"
    "equatorJ2000GridDisplayedUpdated(bool)\0"
    "eclipticJ2000GridDisplayedUpdated(bool)\0"
    "galacticGridDisplayedUpdated(bool)\0"
    "equatorLineDisplayedUpdated(bool)\0"
    "eclipticLineDisplayedUpdated(bool)\0"
    "meridianLineDisplayedUpdated(bool)\0"
    "horizonLineDisplayedUpdated(bool)\0"
    "galacticPlaneLineDisplayedUpdated(bool)\0"
    "atmosphereDisplayedUpdated(bool)\0"
    "cardinalsPointsDisplayedUpdated(bool)\0"
    "fogDisplayedUpdated(bool)\0"
    "landscapeDisplayedUpdated(bool)\0"
    "copySelectedObjectInfo()\0"
};

void StelGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelGui *_t = static_cast<StelGui *>(_o);
        switch (_id) {
        case 0: _t->setFlagShowFlipButtons((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setFlagShowNebulaBackgroundButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->getAutoHideHorizontalButtonBar();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->setAutoHideHorizontalButtonBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->getAutoHideVerticalButtonBar();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setAutoHideVerticalButtonBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setScriptKeys((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->increaseScriptSpeed(); break;
        case 8: _t->decreaseScriptSpeed(); break;
        case 9: _t->setRealScriptSpeed(); break;
        case 10: _t->stopScript(); break;
        case 11: _t->pauseScript(); break;
        case 12: _t->resumeScript(); break;
        case 13: _t->setGuiVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->reloadStyle(); break;
        case 15: _t->scriptStarted(); break;
        case 16: _t->scriptStopped(); break;
        case 17: _t->setStelStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->quit(); break;
        case 19: _t->updateI18n(); break;
        case 20: _t->artDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 21: _t->boundariesDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 22: _t->linesDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 23: _t->namesDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 24: _t->azimuthalGridDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 25: _t->equatorGridDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 26: _t->equatorJ2000GridDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 27: _t->eclipticJ2000GridDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 28: _t->galacticGridDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 29: _t->equatorLineDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 30: _t->eclipticLineDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 31: _t->meridianLineDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 32: _t->horizonLineDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 33: _t->galacticPlaneLineDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 34: _t->atmosphereDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 35: _t->cardinalsPointsDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 36: _t->fogDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 37: _t->landscapeDisplayedUpdated((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 38: _t->copySelectedObjectInfo(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelGui::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelGui,
      qt_meta_data_StelGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelGui))
        return static_cast<void*>(const_cast< StelGui*>(this));
    if (!strcmp(_clname, "StelGuiBase"))
        return static_cast< StelGuiBase*>(const_cast< StelGui*>(this));
    return QObject::qt_metacast(_clname);
}

int StelGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}
static const uint qt_meta_data_StelStandardGuiPluginInterface[] = {

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

static const char qt_meta_stringdata_StelStandardGuiPluginInterface[] = {
    "StelStandardGuiPluginInterface\0"
};

void StelStandardGuiPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StelStandardGuiPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelStandardGuiPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelStandardGuiPluginInterface,
      qt_meta_data_StelStandardGuiPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelStandardGuiPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelStandardGuiPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelStandardGuiPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelStandardGuiPluginInterface))
        return static_cast<void*>(const_cast< StelStandardGuiPluginInterface*>(this));
    if (!strcmp(_clname, "StelGuiPluginInterface"))
        return static_cast< StelGuiPluginInterface*>(const_cast< StelStandardGuiPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelGuiPluginInterface/1.0"))
        return static_cast< StelGuiPluginInterface*>(const_cast< StelStandardGuiPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int StelStandardGuiPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
