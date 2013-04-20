/****************************************************************************
** Meta object code from reading C++ file 'ManualImportWindow.hpp'
**
** Created: Sat Apr 20 14:28:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/SolarSystemEditor/src/gui/ManualImportWindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ManualImportWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ManualImportWindow[] = {

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
      20,   19,   19,   19, 0x0a,
      34,   19,   19,   19, 0x08,
      48,   19,   19,   19, 0x08,
      74,   19,   19,   19, 0x08,
      97,   19,   19,   19, 0x08,
     123,   19,   19,   19, 0x08,
     155,   19,   19,   19, 0x08,
     186,   19,   19,   19, 0x08,
     212,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ManualImportWindow[] = {
    "ManualImportWindow\0\0retranslate()\0"
    "selectColor()\0parseColorString(QString)\0"
    "toggleCometOrbit(bool)\0toggleEllipticOrbit(bool)\0"
    "toggleObjectSpecificOrbit(bool)\0"
    "toggleMeanMotionOrPeriod(bool)\0"
    "selectPlanetTextureFile()\0"
    "selectRingTextureFile()\0"
};

void ManualImportWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ManualImportWindow *_t = static_cast<ManualImportWindow *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->selectColor(); break;
        case 2: _t->parseColorString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->toggleCometOrbit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->toggleEllipticOrbit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->toggleObjectSpecificOrbit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->toggleMeanMotionOrPeriod((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->selectPlanetTextureFile(); break;
        case 8: _t->selectRingTextureFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ManualImportWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ManualImportWindow::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_ManualImportWindow,
      qt_meta_data_ManualImportWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ManualImportWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ManualImportWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ManualImportWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ManualImportWindow))
        return static_cast<void*>(const_cast< ManualImportWindow*>(this));
    return StelDialog::qt_metacast(_clname);
}

int ManualImportWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
