/****************************************************************************
** Meta object code from reading C++ file 'StelAudioMgr.hpp'
**
** Created: Sat Apr 20 14:30:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelAudioMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelAudioMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelAudioMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   14,   13,   13, 0x0a,
      56,   53,   13,   13, 0x0a,
      75,   53,   13,   13, 0x0a,
      95,   53,   13,   13, 0x0a,
     114,   53,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StelAudioMgr[] = {
    "StelAudioMgr\0\0filename,id\0"
    "loadSound(QString,QString)\0id\0"
    "playSound(QString)\0pauseSound(QString)\0"
    "stopSound(QString)\0dropSound(QString)\0"
};

void StelAudioMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelAudioMgr *_t = static_cast<StelAudioMgr *>(_o);
        switch (_id) {
        case 0: _t->loadSound((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->playSound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->pauseSound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->stopSound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->dropSound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelAudioMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelAudioMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelAudioMgr,
      qt_meta_data_StelAudioMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelAudioMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelAudioMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelAudioMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelAudioMgr))
        return static_cast<void*>(const_cast< StelAudioMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int StelAudioMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
