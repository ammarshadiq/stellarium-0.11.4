/****************************************************************************
** Meta object code from reading C++ file 'AngleSpinBox.hpp'
**
** Created: Sat Apr 20 14:25:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/AngleSpinBox.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AngleSpinBox.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AngleSpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   13,   13,   13, 0x0a,
      45,   37,   13,   13, 0x0a,
      72,   64,   13,   13, 0x0a,
      91,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AngleSpinBox[] = {
    "AngleSpinBox\0\0valueChanged()\0clear()\0"
    "radians\0setRadians(double)\0degrees\0"
    "setDegrees(double)\0updateValue()\0"
};

void AngleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AngleSpinBox *_t = static_cast<AngleSpinBox *>(_o);
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->clear(); break;
        case 2: _t->setRadians((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setDegrees((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->updateValue(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AngleSpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AngleSpinBox::staticMetaObject = {
    { &QAbstractSpinBox::staticMetaObject, qt_meta_stringdata_AngleSpinBox,
      qt_meta_data_AngleSpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AngleSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AngleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AngleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AngleSpinBox))
        return static_cast<void*>(const_cast< AngleSpinBox*>(this));
    return QAbstractSpinBox::qt_metacast(_clname);
}

int AngleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AngleSpinBox::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
