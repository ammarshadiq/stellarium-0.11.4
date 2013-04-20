/****************************************************************************
** Meta object code from reading C++ file 'AngleMeasure.hpp'
**
** Created: Sat Apr 20 14:27:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/AngleMeasure/src/AngleMeasure.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AngleMeasure.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AngleMeasure[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   14,   13,   13, 0x0a,
      41,   13,   13,   13, 0x08,
      61,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AngleMeasure[] = {
    "AngleMeasure\0\0b\0enableAngleMeasure(bool)\0"
    "updateMessageText()\0clearMessage()\0"
};

void AngleMeasure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AngleMeasure *_t = static_cast<AngleMeasure *>(_o);
        switch (_id) {
        case 0: _t->enableAngleMeasure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateMessageText(); break;
        case 2: _t->clearMessage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AngleMeasure::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AngleMeasure::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_AngleMeasure,
      qt_meta_data_AngleMeasure, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AngleMeasure::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AngleMeasure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AngleMeasure::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AngleMeasure))
        return static_cast<void*>(const_cast< AngleMeasure*>(this));
    return StelModule::qt_metacast(_clname);
}

int AngleMeasure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_AngleMeasureStelPluginInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_AngleMeasureStelPluginInterface[] = {
    "AngleMeasureStelPluginInterface\0"
};

void AngleMeasureStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AngleMeasureStelPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AngleMeasureStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AngleMeasureStelPluginInterface,
      qt_meta_data_AngleMeasureStelPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AngleMeasureStelPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AngleMeasureStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AngleMeasureStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AngleMeasureStelPluginInterface))
        return static_cast<void*>(const_cast< AngleMeasureStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< AngleMeasureStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< AngleMeasureStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int AngleMeasureStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
