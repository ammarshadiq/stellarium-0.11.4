/****************************************************************************
** Meta object code from reading C++ file 'StelSkyCultureMgr.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelSkyCultureMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelSkyCultureMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelSkyCultureMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   18,   19,   18, 0x0a,
      74,   62,   57,   18, 0x0a,
     111,   18,   19,   18, 0x0a,
     139,  136,   57,   18, 0x0a,
     171,   18,   19,   18, 0x0a,
     196,  136,   57,   18, 0x0a,
     228,   18,   19,   18, 0x0a,
     267,   18,  255,   18, 0x0a,
     290,   18,  255,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StelSkyCultureMgr[] = {
    "StelSkyCultureMgr\0\0QString\0"
    "getCurrentSkyCultureNameI18()\0bool\0"
    "cultureName\0setCurrentSkyCultureNameI18(QString)\0"
    "getCurrentSkyCultureID()\0id\0"
    "setCurrentSkyCultureID(QString)\0"
    "getDefaultSkyCultureID()\0"
    "setDefaultSkyCultureID(QString)\0"
    "getSkyCultureListEnglish()\0QStringList\0"
    "getSkyCultureListI18()\0getSkyCultureListIDs()\0"
};

void StelSkyCultureMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelSkyCultureMgr *_t = static_cast<StelSkyCultureMgr *>(_o);
        switch (_id) {
        case 0: { QString _r = _t->getCurrentSkyCultureNameI18();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->setCurrentSkyCultureNameI18((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->getCurrentSkyCultureID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->setCurrentSkyCultureID((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->getDefaultSkyCultureID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->setDefaultSkyCultureID((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->getSkyCultureListEnglish();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QStringList _r = _t->getSkyCultureListI18();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 8: { QStringList _r = _t->getSkyCultureListIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelSkyCultureMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelSkyCultureMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelSkyCultureMgr,
      qt_meta_data_StelSkyCultureMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelSkyCultureMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelSkyCultureMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelSkyCultureMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelSkyCultureMgr))
        return static_cast<void*>(const_cast< StelSkyCultureMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int StelSkyCultureMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
