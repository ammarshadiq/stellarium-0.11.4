/****************************************************************************
** Meta object code from reading C++ file 'LocationDialog.hpp'
**
** Created: Sat Apr 20 14:25:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/LocationDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocationDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LocationDialog[] = {

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
      16,   15,   15,   15, 0x0a,
      30,   15,   15,   15, 0x08,
      52,   43,   15,   15, 0x08,
     103,   84,   15,   15, 0x08,
     143,  137,   15,   15, 0x08,
     181,  176,   15,   15, 0x08,
     212,  210,   15,   15, 0x08,
     239,   15,   15,   15, 0x28,
     263,   15,   15,   15, 0x08,
     290,   15,   15,   15, 0x08,
     322,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LocationDialog[] = {
    "LocationDialog\0\0retranslate()\0"
    "reportEdit()\0location\0"
    "updateFromProgram(StelLocation)\0"
    "longitude,latitude\0setPositionFromMap(double,double)\0"
    "index\0setPositionFromList(QModelIndex)\0"
    "text\0moveToAnotherPlanet(QString)\0i\0"
    "setPositionFromCoords(int)\0"
    "setPositionFromCoords()\0"
    "addCurrentLocationToList()\0"
    "deleteCurrentLocationFromList()\0"
    "setDefaultLocation()\0"
};

void LocationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LocationDialog *_t = static_cast<LocationDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->reportEdit(); break;
        case 2: _t->updateFromProgram((*reinterpret_cast< const StelLocation(*)>(_a[1]))); break;
        case 3: _t->setPositionFromMap((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->setPositionFromList((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->moveToAnotherPlanet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setPositionFromCoords((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setPositionFromCoords(); break;
        case 8: _t->addCurrentLocationToList(); break;
        case 9: _t->deleteCurrentLocationFromList(); break;
        case 10: _t->setDefaultLocation(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LocationDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LocationDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_LocationDialog,
      qt_meta_data_LocationDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LocationDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LocationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LocationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LocationDialog))
        return static_cast<void*>(const_cast< LocationDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int LocationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
