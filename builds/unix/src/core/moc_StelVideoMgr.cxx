/****************************************************************************
** Meta object code from reading C++ file 'StelVideoMgr.hpp'
**
** Created: Sat Apr 20 14:30:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelVideoMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelVideoMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelVideoMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   14,   13,   13, 0x0a,
      94,   91,   13,   13, 0x0a,
     113,   91,   13,   13, 0x0a,
     133,   91,   13,   13, 0x0a,
     152,   91,   13,   13, 0x0a,
     177,  171,   13,   13, 0x0a,
     210,  203,   13,   13, 0x0a,
     251,  242,   13,   13, 0x0a,
     287,  280,   13,   13, 0x0a,
     328,  320,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StelVideoMgr[] = {
    "StelVideoMgr\0\0filename,id,x,y,show,alpha\0"
    "loadVideo(QString,QString,float,float,bool,float)\0"
    "id\0playVideo(QString)\0pauseVideo(QString)\0"
    "stopVideo(QString)\0dropVideo(QString)\0"
    "id,ms\0seekVideo(QString,qint64)\0id,x,y\0"
    "setVideoXY(QString,float,float)\0"
    "id,alpha\0setVideoAlpha(QString,float)\0"
    "id,w,h\0resizeVideo(QString,float,float)\0"
    "id,show\0showVideo(QString,bool)\0"
};

void StelVideoMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelVideoMgr *_t = static_cast<StelVideoMgr *>(_o);
        switch (_id) {
        case 0: _t->loadVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 1: _t->playVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->pauseVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->stopVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->dropVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->seekVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->setVideoXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 7: _t->setVideoAlpha((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 8: _t->resizeVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 9: _t->showVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelVideoMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelVideoMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelVideoMgr,
      qt_meta_data_StelVideoMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelVideoMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelVideoMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelVideoMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelVideoMgr))
        return static_cast<void*>(const_cast< StelVideoMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int StelVideoMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
