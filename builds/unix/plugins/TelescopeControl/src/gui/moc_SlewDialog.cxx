/****************************************************************************
** Meta object code from reading C++ file 'SlewDialog.hpp'
**
** Created: Sat Apr 20 14:28:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/TelescopeControl/src/gui/SlewDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SlewDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SlewDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      26,   11,   11,   11, 0x08,
      46,   11,   11,   11, 0x08,
      63,   53,   11,   11, 0x08,
      94,   89,   11,   11, 0x08,
     119,  115,   11,   11, 0x08,
     138,  115,   11,   11, 0x08,
     157,  115,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SlewDialog[] = {
    "SlewDialog\0\0retranslate()\0showConfiguration()\0"
    "slew()\0slot,name\0addTelescope(int,QString)\0"
    "slot\0removeTelescope(int)\0set\0"
    "setFormatHMS(bool)\0setFormatDMS(bool)\0"
    "setFormatDecimal(bool)\0"
};

void SlewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SlewDialog *_t = static_cast<SlewDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->showConfiguration(); break;
        case 2: _t->slew(); break;
        case 3: _t->addTelescope((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->removeTelescope((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setFormatHMS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setFormatDMS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setFormatDecimal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SlewDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SlewDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_SlewDialog,
      qt_meta_data_SlewDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SlewDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SlewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SlewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SlewDialog))
        return static_cast<void*>(const_cast< SlewDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int SlewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
