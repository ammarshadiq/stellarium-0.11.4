/****************************************************************************
** Meta object code from reading C++ file 'MilkyWay.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/core/modules/MilkyWay.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MilkyWay.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MilkyWay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,    9,   10,    9, 0x0a,
      42,   31,    9,    9, 0x0a,
      68,    9,   62,    9, 0x0a,
      81,   79,    9,    9, 0x0a,
      99,   97,    9,    9, 0x0a,
     122,    9,  117,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MilkyWay[] = {
    "MilkyWay\0\0float\0getIntensity()\0"
    "aintensity\0setIntensity(float)\0Vec3f\0"
    "getColor()\0c\0setColor(Vec3f)\0b\0"
    "setFlagShow(bool)\0bool\0getFlagShow()\0"
};

void MilkyWay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MilkyWay *_t = static_cast<MilkyWay *>(_o);
        switch (_id) {
        case 0: { float _r = _t->getIntensity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 1: _t->setIntensity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: { Vec3f _r = _t->getColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 3: _t->setColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 4: _t->setFlagShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->getFlagShow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MilkyWay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MilkyWay::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_MilkyWay,
      qt_meta_data_MilkyWay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MilkyWay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MilkyWay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MilkyWay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MilkyWay))
        return static_cast<void*>(const_cast< MilkyWay*>(this));
    return StelModule::qt_metacast(_clname);
}

int MilkyWay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
