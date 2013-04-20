/****************************************************************************
** Meta object code from reading C++ file 'StelScriptMgr.hpp'
**
** Created: Sat Apr 20 14:30:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/scripting/StelScriptMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelScriptMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelScriptMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      31,   14,   14,   14, 0x05,
      47,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      78,   76,   68,   14, 0x0a,
      95,   76,   68,   14, 0x0a,
     114,   76,   68,   14, 0x0a,
     134,   76,   68,   14, 0x0a,
     184,  163,  158,   14, 0x0a,
     220,  211,  158,   14, 0x2a,
     239,   14,   14,   14, 0x0a,
     254,  252,   14,   14, 0x0a,
     282,   14,  275,   14, 0x0a,
     302,  298,   14,   14, 0x0a,
     317,   14,   14,   14, 0x0a,
     331,   14,   14,   14, 0x0a,
     346,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StelScriptMgr[] = {
    "StelScriptMgr\0\0scriptRunning()\0"
    "scriptStopped()\0scriptDebug(QString)\0"
    "QString\0s\0getName(QString)\0"
    "getAuthor(QString)\0getLicense(QString)\0"
    "getDescription(QString)\0bool\0"
    "fileName,includePath\0runScript(QString,QString)\0"
    "fileName\0runScript(QString)\0stopScript()\0"
    "r\0setScriptRate(float)\0double\0"
    "getScriptRate()\0msg\0debug(QString)\0"
    "pauseScript()\0resumeScript()\0scriptEnded()\0"
};

void StelScriptMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelScriptMgr *_t = static_cast<StelScriptMgr *>(_o);
        switch (_id) {
        case 0: _t->scriptRunning(); break;
        case 1: _t->scriptStopped(); break;
        case 2: _t->scriptDebug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { QString _r = _t->getName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->getAuthor((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->getLicense((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->getDescription((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->runScript((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->runScript((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->stopScript(); break;
        case 10: _t->setScriptRate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: { double _r = _t->getScriptRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 12: _t->debug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->pauseScript(); break;
        case 14: _t->resumeScript(); break;
        case 15: _t->scriptEnded(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelScriptMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelScriptMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelScriptMgr,
      qt_meta_data_StelScriptMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelScriptMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelScriptMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelScriptMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelScriptMgr))
        return static_cast<void*>(const_cast< StelScriptMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int StelScriptMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void StelScriptMgr::scriptRunning()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void StelScriptMgr::scriptStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StelScriptMgr::scriptDebug(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
