/****************************************************************************
** Meta object code from reading C++ file 'StelSkyLayerMgr.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelSkyLayerMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelSkyLayerMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelSkyLayerMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   17,   16,   16, 0x0a,
      42,   16,   37,   16, 0x0a,
     129,   56,   37,   16, 0x0a,
     311,  234,   37,   16, 0x0a,
     426,  421,   16,   16, 0x0a,
     453,  450,   37,   16, 0x0a,
     500,  483,  475,   16, 0x0a,
     549,  537,  475,   16, 0x2a,
     585,  581,  475,   16, 0x2a,
     613,  609,   16,   16, 0x0a,
     649,   16,  637,   16, 0x0a,
     662,   17,   16,   16, 0x08,
     699,  688,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StelSkyLayerMgr[] = {
    "StelSkyLayerMgr\0\0b\0setFlagShow(bool)\0"
    "bool\0getFlagShow()\0"
    "id,filename,ra0,dec0,ra1,dec1,ra2,dec2,ra3,dec3,minRes,maxBright,visib"
    "le\0"
    "loadSkyImage(QString,QString,double,double,double,double,double,double"
    ",double,double,double,double,bool)\0"
    "id,filename,alt0,azi0,alt1,azi1,alt2,azi2,alt3,azi3,minRes,maxBright,v"
    "isible\0"
    "loadSkyImageAltAz(QString,QString,double,double,double,double,double,d"
    "ouble,double,double,double,double,bool)\0"
    "id,b\0showLayer(QString,bool)\0id\0"
    "getShowLayer(QString)\0QString\0"
    "uri,keyHint,show\0insertSkyImage(QString,QString,bool)\0"
    "uri,keyHint\0insertSkyImage(QString,QString)\0"
    "uri\0insertSkyImage(QString)\0key\0"
    "removeSkyLayer(QString)\0QStringList\0"
    "getAllKeys()\0loadingStateChanged(bool)\0"
    "percentage\0percentLoadedChanged(int)\0"
};

void StelSkyLayerMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelSkyLayerMgr *_t = static_cast<StelSkyLayerMgr *>(_o);
        switch (_id) {
        case 0: _t->setFlagShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->getFlagShow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->loadSkyImageAltAz((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->showLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: { bool _r = _t->getShowLayer((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->insertSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->insertSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->insertSkyImage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: _t->removeSkyLayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: { QStringList _r = _t->getAllKeys();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 11: _t->loadingStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->percentLoadedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelSkyLayerMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelSkyLayerMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_StelSkyLayerMgr,
      qt_meta_data_StelSkyLayerMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelSkyLayerMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelSkyLayerMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelSkyLayerMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelSkyLayerMgr))
        return static_cast<void*>(const_cast< StelSkyLayerMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int StelSkyLayerMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
