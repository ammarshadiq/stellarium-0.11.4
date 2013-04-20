/****************************************************************************
** Meta object code from reading C++ file 'DummyDialog.hpp'
**
** Created: Sat Apr 20 14:29:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/TextUserInterface/src/DummyDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DummyDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DummyDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   12,   12,   12, 0x0a,
      51,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DummyDialog[] = {
    "DummyDialog\0\0visibleChanged(bool)\0"
    "setVisible(bool)\0close()\0"
};

void DummyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DummyDialog *_t = static_cast<DummyDialog *>(_o);
        switch (_id) {
        case 0: _t->visibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->close(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DummyDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DummyDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DummyDialog,
      qt_meta_data_DummyDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DummyDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DummyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DummyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DummyDialog))
        return static_cast<void*>(const_cast< DummyDialog*>(this));
    return QObject::qt_metacast(_clname);
}

int DummyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DummyDialog::visibleChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
