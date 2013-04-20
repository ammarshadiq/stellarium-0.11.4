/****************************************************************************
** Meta object code from reading C++ file 'OcularDialog.hpp'
**
** Created: Sat Apr 20 14:27:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Oculars/src/gui/OcularDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OcularDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OcularDialog[] = {

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
      20,   14,   13,   13, 0x05,
      50,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   13,   13,   13, 0x0a,
      94,   13,   13,   13, 0x0a,
     114,   13,   13,   13, 0x0a,
     137,   13,   13,   13, 0x0a,
     163,   13,   13,   13, 0x0a,
     178,   13,   13,   13, 0x0a,
     196,   13,   13,   13, 0x0a,
     217,   13,   13,   13, 0x0a,
     240,   13,   13,   13, 0x0a,
     263,   13,   13,   13, 0x0a,
     289,   13,   13,   13, 0x0a,
     314,   13,   13,   13, 0x0a,
     339,   13,   13,   13, 0x0a,
     367,   13,   13,   13, 0x0a,
     391,  381,   13,   13, 0x08,
     430,  381,   13,   13, 0x08,
     477,   13,   13,   13, 0x08,
     493,   14,   13,   13, 0x08,
     527,   14,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OcularDialog[] = {
    "OcularDialog\0\0state\0requireSelectionChanged(bool)\0"
    "scaleImageCircleChanged(bool)\0"
    "closeWindow()\0deleteSelectedCCD()\0"
    "deleteSelectedOcular()\0deleteSelectedTelescope()\0"
    "insertNewCCD()\0insertNewOcular()\0"
    "insertNewTelescope()\0moveUpSelectedSensor()\0"
    "moveUpSelectedOcular()\0moveUpSelectedTelescope()\0"
    "moveDownSelectedSensor()\0"
    "moveDownSelectedOcular()\0"
    "moveDownSelectedTelescope()\0retranslate()\0"
    "newString\0keyBindingTogglePluginChanged(QString)\0"
    "keyBindingPopupNavigatorConfigChanged(QString)\0"
    "initAboutText()\0requireSelectionStateChanged(int)\0"
    "scaleImageCircleStateChanged(int)\0"
};

void OcularDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OcularDialog *_t = static_cast<OcularDialog *>(_o);
        switch (_id) {
        case 0: _t->requireSelectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->scaleImageCircleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->closeWindow(); break;
        case 3: _t->deleteSelectedCCD(); break;
        case 4: _t->deleteSelectedOcular(); break;
        case 5: _t->deleteSelectedTelescope(); break;
        case 6: _t->insertNewCCD(); break;
        case 7: _t->insertNewOcular(); break;
        case 8: _t->insertNewTelescope(); break;
        case 9: _t->moveUpSelectedSensor(); break;
        case 10: _t->moveUpSelectedOcular(); break;
        case 11: _t->moveUpSelectedTelescope(); break;
        case 12: _t->moveDownSelectedSensor(); break;
        case 13: _t->moveDownSelectedOcular(); break;
        case 14: _t->moveDownSelectedTelescope(); break;
        case 15: _t->retranslate(); break;
        case 16: _t->keyBindingTogglePluginChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->keyBindingPopupNavigatorConfigChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->initAboutText(); break;
        case 19: _t->requireSelectionStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->scaleImageCircleStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OcularDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OcularDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_OcularDialog,
      qt_meta_data_OcularDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OcularDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OcularDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OcularDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OcularDialog))
        return static_cast<void*>(const_cast< OcularDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int OcularDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
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
void OcularDialog::requireSelectionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OcularDialog::scaleImageCircleChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
