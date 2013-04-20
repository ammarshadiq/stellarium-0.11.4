/****************************************************************************
** Meta object code from reading C++ file 'QuasarsDialog.hpp'
**
** Created: Sat Apr 20 14:29:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Quasars/src/gui/QuasarsDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QuasarsDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QuasarsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      29,   14,   14,   14, 0x0a,
      56,   51,   14,   14, 0x08,
      88,   77,   14,   14, 0x08,
     111,   77,   14,   14, 0x08,
     145,  139,   14,   14, 0x08,
     187,   14,   14,   14, 0x08,
     212,   14,   14,   14, 0x08,
     230,   14,   14,   14, 0x08,
     245,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QuasarsDialog[] = {
    "QuasarsDialog\0\0retranslate()\0"
    "refreshUpdateValues()\0days\0"
    "setUpdateValues(int)\0checkState\0"
    "setUpdatesEnabled(int)\0"
    "setDistributionEnabled(int)\0state\0"
    "updateStateReceiver(Quasars::UpdateState)\0"
    "updateCompleteReceiver()\0restoreDefaults()\0"
    "saveSettings()\0updateJSON()\0"
};

void QuasarsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QuasarsDialog *_t = static_cast<QuasarsDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->refreshUpdateValues(); break;
        case 2: _t->setUpdateValues((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setUpdatesEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setDistributionEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateStateReceiver((*reinterpret_cast< Quasars::UpdateState(*)>(_a[1]))); break;
        case 6: _t->updateCompleteReceiver(); break;
        case 7: _t->restoreDefaults(); break;
        case 8: _t->saveSettings(); break;
        case 9: _t->updateJSON(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QuasarsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QuasarsDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_QuasarsDialog,
      qt_meta_data_QuasarsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuasarsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuasarsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuasarsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuasarsDialog))
        return static_cast<void*>(const_cast< QuasarsDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int QuasarsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
