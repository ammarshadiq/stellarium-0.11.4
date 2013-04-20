/****************************************************************************
** Meta object code from reading C++ file 'TuiNodeActivate.hpp'
**
** Created: Sat Apr 20 14:29:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/TextUserInterface/src/TuiNodeActivate.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TuiNodeActivate.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TuiNodeActivate[] = {

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
      17,   16,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_TuiNodeActivate[] = {
    "TuiNodeActivate\0\0activate()\0"
};

void TuiNodeActivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TuiNodeActivate *_t = static_cast<TuiNodeActivate *>(_o);
        switch (_id) {
        case 0: _t->activate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TuiNodeActivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TuiNodeActivate::staticMetaObject = {
    { &TuiNode::staticMetaObject, qt_meta_stringdata_TuiNodeActivate,
      qt_meta_data_TuiNodeActivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TuiNodeActivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TuiNodeActivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TuiNodeActivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TuiNodeActivate))
        return static_cast<void*>(const_cast< TuiNodeActivate*>(this));
    return TuiNode::qt_metacast(_clname);
}

int TuiNodeActivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TuiNode::qt_metacall(_c, _id, _a);
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
void TuiNodeActivate::activate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
