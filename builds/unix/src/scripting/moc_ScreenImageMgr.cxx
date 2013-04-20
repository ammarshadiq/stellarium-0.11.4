/****************************************************************************
** Meta object code from reading C++ file 'ScreenImageMgr.hpp'
**
** Created: Sat Apr 20 14:30:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/scripting/ScreenImageMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenImageMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScreenImage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ScreenImage[] = {
    "ScreenImage\0\0alpha\0setOpacity(qreal)\0"
};

void ScreenImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScreenImage *_t = static_cast<ScreenImage *>(_o);
        switch (_id) {
        case 0: _t->setOpacity((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScreenImage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScreenImage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScreenImage,
      qt_meta_data_ScreenImage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScreenImage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScreenImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScreenImage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenImage))
        return static_cast<void*>(const_cast< ScreenImage*>(this));
    return QObject::qt_metacast(_clname);
}

int ScreenImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ScreenImageMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      65,   16,   15,   15, 0x0a,
     171,  135,   15,   15, 0x2a,
     265,  235,   15,   15, 0x2a,
     345,  323,   15,   15, 0x2a,
     414,  398,   15,   15, 0x2a,
     469,  466,  461,   15, 0x0a,
     495,  466,  491,   15, 0x0a,
     518,  466,  491,   15, 0x0a,
     550,  542,   15,   15, 0x0a,
     583,  574,   15,   15, 0x0a,
     628,  612,   15,   15, 0x0a,
     673,  666,   15,   15, 0x2a,
     705,  466,   15,   15, 0x0a,
     726,   15,   15,   15, 0x0a,
     756,   15,  744,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ScreenImageMgr[] = {
    "ScreenImageMgr\0\0"
    "id,filename,x,y,scale,visible,alpha,fadeDuration\0"
    "createScreenImage(QString,QString,float,float,float,bool,float,float)\0"
    "id,filename,x,y,scale,visible,alpha\0"
    "createScreenImage(QString,QString,float,float,float,bool,float)\0"
    "id,filename,x,y,scale,visible\0"
    "createScreenImage(QString,QString,float,float,float,bool)\0"
    "id,filename,x,y,scale\0"
    "createScreenImage(QString,QString,float,float,float)\0"
    "id,filename,x,y\0"
    "createScreenImage(QString,QString,float,float)\0"
    "bool\0id\0getShowImage(QString)\0int\0"
    "getImageWidth(QString)\0getImageHeight(QString)\0"
    "id,show\0showImage(QString,bool)\0"
    "id,alpha\0setImageAlpha(QString,float)\0"
    "id,x,y,duration\0setImageXY(QString,float,float,float)\0"
    "id,x,y\0setImageXY(QString,float,float)\0"
    "deleteImage(QString)\0deleteAllImages()\0"
    "QStringList\0getAllImageIDs()\0"
};

void ScreenImageMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScreenImageMgr *_t = static_cast<ScreenImageMgr *>(_o);
        switch (_id) {
        case 0: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8]))); break;
        case 1: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 2: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 3: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 4: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 5: { bool _r = _t->getShowImage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->getImageWidth((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->getImageHeight((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->showImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->setImageAlpha((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->setImageXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 11: _t->setImageXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 12: _t->deleteImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->deleteAllImages(); break;
        case 14: { QStringList _r = _t->getAllImageIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScreenImageMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScreenImageMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_ScreenImageMgr,
      qt_meta_data_ScreenImageMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScreenImageMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScreenImageMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScreenImageMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenImageMgr))
        return static_cast<void*>(const_cast< ScreenImageMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int ScreenImageMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
