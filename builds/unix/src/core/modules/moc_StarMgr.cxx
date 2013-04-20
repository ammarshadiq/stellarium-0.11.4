/****************************************************************************
** Meta object code from reading C++ file 'StarMgr.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/core/modules/StarMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StarMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StarMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,    9,    8,    8, 0x0a,
      38,    8,   32,    8, 0x0a,
      56,   54,    8,    8, 0x0a,
      80,    8,   75,    8, 0x0a,
      95,   54,    8,    8, 0x0a,
     115,    8,   75,    8, 0x0a,
     133,  131,    8,    8, 0x0a,
     162,    8,  156,    8, 0x0a,
     192,  180,    8,    8, 0x0a,
     214,  212,    8,    8, 0x0a,
     236,    8,   75,    8, 0x0a,
     262,  254,    8,    8, 0x08,
     284,    8,    8,    8, 0x08,
     311,  297,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StarMgr[] = {
    "StarMgr\0\0c\0setLabelColor(Vec3f)\0Vec3f\0"
    "getLabelColor()\0b\0setFlagStars(bool)\0"
    "bool\0getFlagStars()\0setFlagLabels(bool)\0"
    "getFlagLabels()\0a\0setLabelsAmount(float)\0"
    "float\0getLabelsAmount()\0newFontSize\0"
    "setFontSize(double)\0f\0setFlagSciNames(bool)\0"
    "getFlagSciNames()\0section\0"
    "setStelStyle(QString)\0updateI18n()\0"
    "skyCultureDir\0updateSkyCulture(QString)\0"
};

void StarMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StarMgr *_t = static_cast<StarMgr *>(_o);
        switch (_id) {
        case 0: _t->setLabelColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 1: { Vec3f _r = _t->getLabelColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 2: _t->setFlagStars((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { bool _r = _t->getFlagStars();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->setFlagLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->getFlagLabels();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setLabelsAmount((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: { float _r = _t->getLabelsAmount();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 8: _t->setFontSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setFlagSciNames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: { bool _r = _t->getFlagSciNames();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->setStelStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->updateI18n(); break;
        case 13: _t->updateSkyCulture((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StarMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StarMgr::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_StarMgr,
      qt_meta_data_StarMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StarMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StarMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StarMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StarMgr))
        return static_cast<void*>(const_cast< StarMgr*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int StarMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
