/****************************************************************************
** Meta object code from reading C++ file 'HelpDialog.hpp'
**
** Created: Sat Apr 20 14:25:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/HelpDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HelpDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HelpDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      26,   11,   11,   11, 0x0a,
      45,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,
      90,   73,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HelpDialog[] = {
    "HelpDialog\0\0retranslate()\0updateIconsColor()\0"
    "updateLog(int)\0refreshLog()\0"
    "current,previous\0"
    "changePage(QListWidgetItem*,QListWidgetItem*)\0"
};

void HelpDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HelpDialog *_t = static_cast<HelpDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->updateIconsColor(); break;
        case 2: _t->updateLog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->refreshLog(); break;
        case 4: _t->changePage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HelpDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HelpDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_HelpDialog,
      qt_meta_data_HelpDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HelpDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HelpDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HelpDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HelpDialog))
        return static_cast<void*>(const_cast< HelpDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int HelpDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
