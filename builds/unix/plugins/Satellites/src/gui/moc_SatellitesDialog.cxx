/****************************************************************************
** Meta object code from reading C++ file 'SatellitesDialog.hpp'
**
** Created: Sat Apr 20 14:27:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Satellites/src/gui/SatellitesDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SatellitesDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SatellitesDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      32,   17,   17,   17, 0x0a,
      60,   54,   17,   17, 0x08,
      84,   17,   17,   17, 0x08,
     116,  107,   17,   17, 0x08,
     160,   17,   17,   17, 0x08,
     183,  177,   17,   17, 0x08,
     215,  204,   17,   17, 0x08,
     244,  238,   17,   17, 0x08,
     314,  289,   17,   17, 0x08,
     350,   17,   17,   17, 0x08,
     370,   17,   17,   17, 0x08,
     387,   17,   17,   17, 0x08,
     405,   17,   17,   17, 0x08,
     420,   17,   17,   17, 0x08,
     438,   17,   17,   17, 0x08,
     467,  453,   17,   17, 0x08,
     494,   17,   17,   17, 0x08,
     521,  513,   17,   17, 0x08,
     542,  513,   17,   17, 0x08,
     561,   54,   17,   17, 0x08,
     592,   17,   17,   17, 0x08,
     609,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SatellitesDialog[] = {
    "SatellitesDialog\0\0retranslate()\0"
    "refreshUpdateValues()\0index\0"
    "listSatelliteGroup(int)\0reloadSatellitesList()\0"
    "cur,prev\0updateSelectedInfo(QModelIndex,QModelIndex)\0"
    "saveSatellites()\0hours\0setUpdateValues(int)\0"
    "checkState\0setUpdatesEnabled(int)\0"
    "state\0updateStateReceiver(Satellites::UpdateState)\0"
    "numUpdated,total,missing\0"
    "updateCompleteReceiver(int,int,int)\0"
    "sourceEditingDone()\0saveSourceList()\0"
    "deleteSourceRow()\0addSourceRow()\0"
    "restoreDefaults()\0saveSettings()\0"
    "newSatellites\0addSatellites(TleDataList)\0"
    "removeSatellites()\0display\0"
    "setDisplayFlag(bool)\0setOrbitFlag(bool)\0"
    "handleDoubleClick(QModelIndex)\0"
    "setOrbitParams()\0updateTLEs()\0"
};

void SatellitesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SatellitesDialog *_t = static_cast<SatellitesDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->refreshUpdateValues(); break;
        case 2: _t->listSatelliteGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->reloadSatellitesList(); break;
        case 4: _t->updateSelectedInfo((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->saveSatellites(); break;
        case 6: _t->setUpdateValues((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setUpdatesEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateStateReceiver((*reinterpret_cast< Satellites::UpdateState(*)>(_a[1]))); break;
        case 9: _t->updateCompleteReceiver((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->sourceEditingDone(); break;
        case 11: _t->saveSourceList(); break;
        case 12: _t->deleteSourceRow(); break;
        case 13: _t->addSourceRow(); break;
        case 14: _t->restoreDefaults(); break;
        case 15: _t->saveSettings(); break;
        case 16: _t->addSatellites((*reinterpret_cast< const TleDataList(*)>(_a[1]))); break;
        case 17: _t->removeSatellites(); break;
        case 18: _t->setDisplayFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->setOrbitFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->handleDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 21: _t->setOrbitParams(); break;
        case 22: _t->updateTLEs(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SatellitesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SatellitesDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_SatellitesDialog,
      qt_meta_data_SatellitesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SatellitesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SatellitesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SatellitesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SatellitesDialog))
        return static_cast<void*>(const_cast< SatellitesDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int SatellitesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
