/****************************************************************************
** Meta object code from reading C++ file 'AddRemoveLandscapesDialog.hpp'
**
** Created: Sat Apr 20 14:26:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/AddRemoveLandscapesDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddRemoveLandscapesDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddRemoveLandscapesDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      41,   26,   26,   26, 0x0a,
      58,   26,   26,   26, 0x0a,
      74,   26,   26,   26, 0x08,
     100,   26,   26,   26, 0x08,
     123,  116,   26,   26, 0x08,
     143,   26,   26,   26, 0x08,
     170,  165,   26,   26, 0x08,
     199,   26,   26,   26, 0x08,
     228,  219,   26,   26, 0x08,
     254,  165,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddRemoveLandscapesDialog[] = {
    "AddRemoveLandscapesDialog\0\0retranslate()\0"
    "setVisible(bool)\0populateLists()\0"
    "browseForArchiveClicked()\0removeClicked()\0"
    "newRow\0updateSidePane(int)\0"
    "messageAcknowledged()\0path\0"
    "messageUnableToOpen(QString)\0"
    "messageNotArchive()\0nameOrID\0"
    "messageNotUnique(QString)\0"
    "messageRemoveManually(QString)\0"
};

void AddRemoveLandscapesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddRemoveLandscapesDialog *_t = static_cast<AddRemoveLandscapesDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->populateLists(); break;
        case 3: _t->browseForArchiveClicked(); break;
        case 4: _t->removeClicked(); break;
        case 5: _t->updateSidePane((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->messageAcknowledged(); break;
        case 7: _t->messageUnableToOpen((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->messageNotArchive(); break;
        case 9: _t->messageNotUnique((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->messageRemoveManually((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddRemoveLandscapesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddRemoveLandscapesDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_AddRemoveLandscapesDialog,
      qt_meta_data_AddRemoveLandscapesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddRemoveLandscapesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddRemoveLandscapesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddRemoveLandscapesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddRemoveLandscapesDialog))
        return static_cast<void*>(const_cast< AddRemoveLandscapesDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int AddRemoveLandscapesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
