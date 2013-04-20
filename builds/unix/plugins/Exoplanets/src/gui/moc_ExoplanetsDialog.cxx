/****************************************************************************
** Meta object code from reading C++ file 'ExoplanetsDialog.hpp'
**
** Created: Sat Apr 20 14:25:38 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Exoplanets/src/gui/ExoplanetsDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExoplanetsDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExoplanetsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      32,   17,   17,   17, 0x0a,
      60,   54,   17,   17, 0x08,
      92,   81,   17,   17, 0x08,
     121,  115,   17,   17, 0x08,
     166,   17,   17,   17, 0x08,
     191,   17,   17,   17, 0x08,
     209,   17,   17,   17, 0x08,
     224,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExoplanetsDialog[] = {
    "ExoplanetsDialog\0\0retranslate()\0"
    "refreshUpdateValues()\0hours\0"
    "setUpdateValues(int)\0checkState\0"
    "setUpdatesEnabled(int)\0state\0"
    "updateStateReceiver(Exoplanets::UpdateState)\0"
    "updateCompleteReceiver()\0restoreDefaults()\0"
    "saveSettings()\0updateJSON()\0"
};

void ExoplanetsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExoplanetsDialog *_t = static_cast<ExoplanetsDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->refreshUpdateValues(); break;
        case 2: _t->setUpdateValues((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setUpdatesEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateStateReceiver((*reinterpret_cast< Exoplanets::UpdateState(*)>(_a[1]))); break;
        case 5: _t->updateCompleteReceiver(); break;
        case 6: _t->restoreDefaults(); break;
        case 7: _t->saveSettings(); break;
        case 8: _t->updateJSON(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExoplanetsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExoplanetsDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_ExoplanetsDialog,
      qt_meta_data_ExoplanetsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExoplanetsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExoplanetsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExoplanetsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExoplanetsDialog))
        return static_cast<void*>(const_cast< ExoplanetsDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int ExoplanetsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
