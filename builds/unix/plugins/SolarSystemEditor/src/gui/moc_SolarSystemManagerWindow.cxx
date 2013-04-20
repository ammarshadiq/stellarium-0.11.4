/****************************************************************************
** Meta object code from reading C++ file 'SolarSystemManagerWindow.hpp'
**
** Created: Sat Apr 20 14:28:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/SolarSystemEditor/src/gui/SolarSystemManagerWindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SolarSystemManagerWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SolarSystemManagerWindow[] = {

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
      26,   25,   25,   25, 0x0a,
      40,   25,   25,   25, 0x08,
      60,   25,   25,   25, 0x08,
      83,   25,   25,   25, 0x08,
     109,   25,   25,   25, 0x08,
     124,   25,   25,   25, 0x08,
     139,   25,   25,   25, 0x08,
     157,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SolarSystemManagerWindow[] = {
    "SolarSystemManagerWindow\0\0retranslate()\0"
    "copyConfiguration()\0replaceConfiguration()\0"
    "populateSolarSystemList()\0removeObject()\0"
    "newImportMPC()\0newImportManual()\0"
    "resetImportManual(bool)\0"
};

void SolarSystemManagerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SolarSystemManagerWindow *_t = static_cast<SolarSystemManagerWindow *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->copyConfiguration(); break;
        case 2: _t->replaceConfiguration(); break;
        case 3: _t->populateSolarSystemList(); break;
        case 4: _t->removeObject(); break;
        case 5: _t->newImportMPC(); break;
        case 6: _t->newImportManual(); break;
        case 7: _t->resetImportManual((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SolarSystemManagerWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SolarSystemManagerWindow::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_SolarSystemManagerWindow,
      qt_meta_data_SolarSystemManagerWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SolarSystemManagerWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SolarSystemManagerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SolarSystemManagerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SolarSystemManagerWindow))
        return static_cast<void*>(const_cast< SolarSystemManagerWindow*>(this));
    return StelDialog::qt_metacast(_clname);
}

int SolarSystemManagerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
