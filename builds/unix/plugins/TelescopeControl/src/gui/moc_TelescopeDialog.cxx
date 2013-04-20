/****************************************************************************
** Meta object code from reading C++ file 'TelescopeDialog.hpp'
**
** Created: Sat Apr 20 14:28:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/TelescopeControl/src/gui/TelescopeDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TelescopeDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TelescopeDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      31,   16,   16,   16, 0x08,
      59,   16,   16,   16, 0x08,
      84,   16,   16,   16, 0x08,
     103,   16,   16,   16, 0x08,
     125,   16,   16,   16, 0x08,
     161,   16,   16,   16, 0x08,
     208,  198,   16,   16, 0x08,
     244,   16,   16,   16, 0x08,
     261,   16,   16,   16, 0x08,
     289,   16,   16,   16, 0x08,
     321,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TelescopeDialog[] = {
    "TelescopeDialog\0\0retranslate()\0"
    "buttonChangeStatusPressed()\0"
    "buttonConfigurePressed()\0buttonAddPressed()\0"
    "buttonRemovePressed()\0"
    "checkBoxUseExecutablesToggled(bool)\0"
    "buttonBrowseServerDirectoryPressed()\0"
    "name,type\0saveChanges(QString,ConnectionType)\0"
    "discardChanges()\0selectTelecope(QModelIndex)\0"
    "configureTelescope(QModelIndex)\0"
    "updateTelescopeStates()\0"
};

void TelescopeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TelescopeDialog *_t = static_cast<TelescopeDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->buttonChangeStatusPressed(); break;
        case 2: _t->buttonConfigurePressed(); break;
        case 3: _t->buttonAddPressed(); break;
        case 4: _t->buttonRemovePressed(); break;
        case 5: _t->checkBoxUseExecutablesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->buttonBrowseServerDirectoryPressed(); break;
        case 7: _t->saveChanges((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< ConnectionType(*)>(_a[2]))); break;
        case 8: _t->discardChanges(); break;
        case 9: _t->selectTelecope((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->configureTelescope((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->updateTelescopeStates(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TelescopeDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TelescopeDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_TelescopeDialog,
      qt_meta_data_TelescopeDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TelescopeDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TelescopeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TelescopeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeDialog))
        return static_cast<void*>(const_cast< TelescopeDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int TelescopeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
