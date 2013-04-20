/****************************************************************************
** Meta object code from reading C++ file 'StelObjectMgr.hpp'
**
** Created: Sat Apr 20 14:30:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelObjectMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelObjectMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelObjectMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_StelObjectMgr[] = {
    "StelObjectMgr\0\0"
    "selectedObjectChanged(StelModule::StelModuleSelectAction)\0"
};

void StelObjectMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelObjectMgr *_t = static_cast<StelObjectMgr *>(_o);
        switch (_id) {
        case 0: _t->selectedObjectChanged((*reinterpret_cast< StelModule::StelModuleSelectAction(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelObjectMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelObjectMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_StelObjectMgr,
      qt_meta_data_StelObjectMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelObjectMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelObjectMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelObjectMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelObjectMgr))
        return static_cast<void*>(const_cast< StelObjectMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int StelObjectMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void StelObjectMgr::selectedObjectChanged(StelModule::StelModuleSelectAction _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
