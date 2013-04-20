/****************************************************************************
** Meta object code from reading C++ file 'SimbadSearcher.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/SimbadSearcher.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimbadSearcher.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimbadLookupReply[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   29, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   18,   18,   18, 0x08,
      55,   18,   18,   18, 0x08,

 // enums: name, flags, count, data
      77, 0x0,    3,   33,

 // enum data: key, value
      96, uint(SimbadLookupReply::SimbadLookupQuerying),
     117, uint(SimbadLookupReply::SimbadLookupErrorOccured),
     142, uint(SimbadLookupReply::SimbadLookupFinished),

       0        // eod
};

static const char qt_meta_stringdata_SimbadLookupReply[] = {
    "SimbadLookupReply\0\0statusChanged()\0"
    "httpQueryFinished()\0delayTimerCompleted()\0"
    "SimbadLookupStatus\0SimbadLookupQuerying\0"
    "SimbadLookupErrorOccured\0SimbadLookupFinished\0"
};

void SimbadLookupReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimbadLookupReply *_t = static_cast<SimbadLookupReply *>(_o);
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->httpQueryFinished(); break;
        case 2: _t->delayTimerCompleted(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SimbadLookupReply::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimbadLookupReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimbadLookupReply,
      qt_meta_data_SimbadLookupReply, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimbadLookupReply::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimbadLookupReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimbadLookupReply::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimbadLookupReply))
        return static_cast<void*>(const_cast< SimbadLookupReply*>(this));
    return QObject::qt_metacast(_clname);
}

int SimbadLookupReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SimbadLookupReply::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_SimbadSearcher[] = {

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

static const char qt_meta_stringdata_SimbadSearcher[] = {
    "SimbadSearcher\0"
};

void SimbadSearcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SimbadSearcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimbadSearcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimbadSearcher,
      qt_meta_data_SimbadSearcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimbadSearcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimbadSearcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimbadSearcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimbadSearcher))
        return static_cast<void*>(const_cast< SimbadSearcher*>(this));
    return QObject::qt_metacast(_clname);
}

int SimbadSearcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
