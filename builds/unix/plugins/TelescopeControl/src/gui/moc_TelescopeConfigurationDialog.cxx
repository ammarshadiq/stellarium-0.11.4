/****************************************************************************
** Meta object code from reading C++ file 'TelescopeConfigurationDialog.hpp'
**
** Created: Sat Apr 20 14:28:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/TelescopeControl/src/gui/TelescopeConfigurationDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TelescopeConfigurationDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TelescopeConfigurationDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   30,   29,   29, 0x05,
      77,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   29,   29,   29, 0x0a,
     110,   29,   29,   29, 0x08,
     130,   29,   29,   29, 0x08,
     153,   29,   29,   29, 0x08,
     175,   29,   29,   29, 0x08,
     202,   29,   29,   29, 0x08,
     226,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TelescopeConfigurationDialog[] = {
    "TelescopeConfigurationDialog\0\0name,type\0"
    "changesSaved(QString,ConnectionType)\0"
    "changesDiscarded()\0retranslate()\0"
    "buttonSavePressed()\0buttonDiscardPressed()\0"
    "toggleTypeLocal(bool)\0toggleTypeConnection(bool)\0"
    "toggleTypeVirtual(bool)\0"
    "deviceModelSelected(QString)\0"
};

void TelescopeConfigurationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TelescopeConfigurationDialog *_t = static_cast<TelescopeConfigurationDialog *>(_o);
        switch (_id) {
        case 0: _t->changesSaved((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< ConnectionType(*)>(_a[2]))); break;
        case 1: _t->changesDiscarded(); break;
        case 2: _t->retranslate(); break;
        case 3: _t->buttonSavePressed(); break;
        case 4: _t->buttonDiscardPressed(); break;
        case 5: _t->toggleTypeLocal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->toggleTypeConnection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->toggleTypeVirtual((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->deviceModelSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TelescopeConfigurationDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TelescopeConfigurationDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_TelescopeConfigurationDialog,
      qt_meta_data_TelescopeConfigurationDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TelescopeConfigurationDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TelescopeConfigurationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TelescopeConfigurationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeConfigurationDialog))
        return static_cast<void*>(const_cast< TelescopeConfigurationDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int TelescopeConfigurationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void TelescopeConfigurationDialog::changesSaved(QString _t1, ConnectionType _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TelescopeConfigurationDialog::changesDiscarded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
