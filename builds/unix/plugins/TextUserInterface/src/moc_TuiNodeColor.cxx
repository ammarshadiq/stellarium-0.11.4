/****************************************************************************
** Meta object code from reading C++ file 'TuiNodeColor.hpp'
**
** Created: Sat Apr 20 14:29:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/TextUserInterface/src/TuiNodeColor.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TuiNodeColor.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TuiNodeColor[] = {

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
      16,   14,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_TuiNodeColor[] = {
    "TuiNodeColor\0\0c\0setValue(Vec3f)\0"
};

void TuiNodeColor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TuiNodeColor *_t = static_cast<TuiNodeColor *>(_o);
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< Vec3f(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TuiNodeColor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TuiNodeColor::staticMetaObject = {
    { &TuiNodeEditable::staticMetaObject, qt_meta_stringdata_TuiNodeColor,
      qt_meta_data_TuiNodeColor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TuiNodeColor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TuiNodeColor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TuiNodeColor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TuiNodeColor))
        return static_cast<void*>(const_cast< TuiNodeColor*>(this));
    return TuiNodeEditable::qt_metacast(_clname);
}

int TuiNodeColor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TuiNodeEditable::qt_metacall(_c, _id, _a);
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
void TuiNodeColor::setValue(Vec3f _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
