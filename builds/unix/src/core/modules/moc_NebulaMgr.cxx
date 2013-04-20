/****************************************************************************
** Meta object code from reading C++ file 'NebulaMgr.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/core/modules/NebulaMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NebulaMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NebulaMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   11,   10,   10, 0x0a,
      36,   10,   10,   10, 0x0a,
      60,   54,   10,   10, 0x0a,
      88,   10,   82,   10, 0x0a,
     114,  105,   10,   10, 0x0a,
     144,  142,   10,   10, 0x0a,
     168,   10,  163,   10, 0x0a,
     183,  142,   10,   10, 0x0a,
     201,   10,  163,   10, 0x0a,
     215,   11,   10,   10, 0x0a,
     237,   10,   10,   10, 0x0a,
     256,  254,   10,   10, 0x0a,
     279,   10,   82,   10, 0x0a,
     299,  297,   10,   10, 0x0a,
     321,   10,   82,   10, 0x0a,
     346,  338,   10,   10, 0x08,
     368,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NebulaMgr[] = {
    "NebulaMgr\0\0c\0setCirclesColor(Vec3f)\0"
    "getCirclesColor()\0scale\0setCircleScale(float)\0"
    "float\0getCircleScale()\0duration\0"
    "setHintsFadeDuration(float)\0b\0"
    "setFlagHints(bool)\0bool\0getFlagHints()\0"
    "setFlagShow(bool)\0getFlagShow()\0"
    "setLabelsColor(Vec3f)\0getLabelsColor()\0"
    "a\0setLabelsAmount(float)\0getLabelsAmount()\0"
    "f\0setHintsAmount(float)\0getHintsAmount()\0"
    "section\0setStelStyle(QString)\0"
    "updateI18n()\0"
};

void NebulaMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NebulaMgr *_t = static_cast<NebulaMgr *>(_o);
        switch (_id) {
        case 0: _t->setCirclesColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 1: _t->getCirclesColor(); break;
        case 2: _t->setCircleScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: { float _r = _t->getCircleScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 4: _t->setHintsFadeDuration((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setFlagHints((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { bool _r = _t->getFlagHints();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->setFlagShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: { bool _r = _t->getFlagShow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->setLabelsColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 10: _t->getLabelsColor(); break;
        case 11: _t->setLabelsAmount((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: { float _r = _t->getLabelsAmount();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 13: _t->setHintsAmount((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: { float _r = _t->getHintsAmount();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 15: _t->setStelStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->updateI18n(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NebulaMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NebulaMgr::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_NebulaMgr,
      qt_meta_data_NebulaMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NebulaMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NebulaMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NebulaMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NebulaMgr))
        return static_cast<void*>(const_cast< NebulaMgr*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int NebulaMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
