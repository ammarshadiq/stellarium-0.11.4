/****************************************************************************
** Meta object code from reading C++ file 'Oculars.hpp'
**
** Created: Sat Apr 20 14:27:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Oculars/src/Oculars.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Oculars.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Oculars[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      30,    8,    8,    8, 0x05,
      54,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,    8,    8,    8, 0x0a,
      95,    8,    8,    8, 0x0a,
     114,    8,    8,    8, 0x0a,
     134,    8,    8,    8, 0x0a,
     157,    8,    8,    8, 0x0a,
     183,    8,    8,    8, 0x0a,
     204,  202,    8,    8, 0x0a,
     223,    8,    8,    8, 0x0a,
     243,    8,    8,    8, 0x0a,
     266,    8,    8,    8, 0x0a,
     299,  292,    8,    8, 0x0a,
     330,  318,    8,    8, 0x0a,
     356,  318,    8,    8, 0x0a,
     385,  318,    8,    8, 0x0a,
     422,  417,    8,    8, 0x0a,
     438,    8,    8,    8, 0x0a,
     450,  417,    8,    8, 0x0a,
     473,    8,    8,    8, 0x2a,
     492,  417,    8,    8, 0x0a,
     511,    8,    8,    8, 0x0a,
     533,  526,    8,    8, 0x0a,
     554,    8,    8,    8, 0x2a,
     571,  202,    8,    8, 0x0a,
     604,    8,  599,    8, 0x0a,
     628,    8,    8,    8, 0x08,
     648,    8,    8,    8, 0x08,
     682,  676,    8,    8, 0x08,
     708,  676,    8,    8, 0x08,
     734,    8,    8,    8, 0x08,
     755,    8,    8,    8, 0x08,
     778,  772,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Oculars[] = {
    "Oculars\0\0selectedCCDChanged()\0"
    "selectedOcularChanged()\0"
    "selectedTelescopeChanged()\0updateLists()\0"
    "ccdRotationReset()\0decrementCCDIndex()\0"
    "decrementOcularIndex()\0decrementTelescopeIndex()\0"
    "displayPopupMenu()\0b\0enableOcular(bool)\0"
    "incrementCCDIndex()\0incrementOcularIndex()\0"
    "incrementTelescopeIndex()\0amount\0"
    "rotateCCD(QString)\0indexString\0"
    "selectCCDAtIndex(QString)\0"
    "selectOcularAtIndex(QString)\0"
    "selectTelescopeAtIndex(QString)\0show\0"
    "toggleCCD(bool)\0toggleCCD()\0"
    "toggleCrosshairs(bool)\0toggleCrosshairs()\0"
    "toggleTelrad(bool)\0toggleTelrad()\0"
    "enable\0enableGuiPanel(bool)\0"
    "enableGuiPanel()\0setFlagDecimalDegrees(bool)\0"
    "bool\0getFlagDecimalDegrees()\0"
    "instrumentChanged()\0determineMaxEyepieceAngle()\0"
    "state\0setRequireSelection(bool)\0"
    "setScaleImageCircle(bool)\0"
    "setScreenFOVForCCD()\0retranslateGui()\0"
    "style\0setStelStyle(QString)\0"
};

void Oculars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Oculars *_t = static_cast<Oculars *>(_o);
        switch (_id) {
        case 0: _t->selectedCCDChanged(); break;
        case 1: _t->selectedOcularChanged(); break;
        case 2: _t->selectedTelescopeChanged(); break;
        case 3: _t->updateLists(); break;
        case 4: _t->ccdRotationReset(); break;
        case 5: _t->decrementCCDIndex(); break;
        case 6: _t->decrementOcularIndex(); break;
        case 7: _t->decrementTelescopeIndex(); break;
        case 8: _t->displayPopupMenu(); break;
        case 9: _t->enableOcular((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->incrementCCDIndex(); break;
        case 11: _t->incrementOcularIndex(); break;
        case 12: _t->incrementTelescopeIndex(); break;
        case 13: _t->rotateCCD((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->selectCCDAtIndex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->selectOcularAtIndex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->selectTelescopeAtIndex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->toggleCCD((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->toggleCCD(); break;
        case 19: _t->toggleCrosshairs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->toggleCrosshairs(); break;
        case 21: _t->toggleTelrad((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->toggleTelrad(); break;
        case 23: _t->enableGuiPanel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->enableGuiPanel(); break;
        case 25: _t->setFlagDecimalDegrees((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 26: { bool _r = _t->getFlagDecimalDegrees();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->instrumentChanged(); break;
        case 28: _t->determineMaxEyepieceAngle(); break;
        case 29: _t->setRequireSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->setScaleImageCircle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->setScreenFOVForCCD(); break;
        case 32: _t->retranslateGui(); break;
        case 33: _t->setStelStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Oculars::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Oculars::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_Oculars,
      qt_meta_data_Oculars, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Oculars::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Oculars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Oculars::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Oculars))
        return static_cast<void*>(const_cast< Oculars*>(this));
    return StelModule::qt_metacast(_clname);
}

int Oculars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void Oculars::selectedCCDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Oculars::selectedOcularChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Oculars::selectedTelescopeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_OcularsStelPluginInterface[] = {

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

static const char qt_meta_stringdata_OcularsStelPluginInterface[] = {
    "OcularsStelPluginInterface\0"
};

void OcularsStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OcularsStelPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OcularsStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OcularsStelPluginInterface,
      qt_meta_data_OcularsStelPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OcularsStelPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OcularsStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OcularsStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OcularsStelPluginInterface))
        return static_cast<void*>(const_cast< OcularsStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< OcularsStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< OcularsStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int OcularsStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
