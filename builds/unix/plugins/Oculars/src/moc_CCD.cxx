/****************************************************************************
** Meta object code from reading C++ file 'CCD.hpp'
**
** Created: Sat Apr 20 14:27:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Oculars/src/CCD.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CCD.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CCD[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       1,   35, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      12,    4, 0x0a095103,
      21,   17, 0x02095103,
      33,   17, 0x02095103,
      52,   45, 0x06095103,
      62,   45, 0x06095103,
      73,   45, 0x06095103,
      84,   45, 0x06095103,

 // constructors: signature, parameters, type, tag, flags
     103,   97,   96,   96, 0x0e,

       0        // eod
};

static const char qt_meta_stringdata_CCD[] = {
    "CCD\0QString\0name\0int\0resolutionX\0"
    "resolutionY\0double\0chipWidth\0chipHeight\0"
    "pixelWidth\0pixelHeight\0\0other\0"
    "CCD(QObject)\0"
};

void CCD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { CCD *_r = new CCD((*reinterpret_cast< const QObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    }
    Q_UNUSED(_o);
}

const QMetaObjectExtraData CCD::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CCD::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CCD,
      qt_meta_data_CCD, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CCD::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CCD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CCD::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CCD))
        return static_cast<void*>(const_cast< CCD*>(this));
    return QObject::qt_metacast(_clname);
}

int CCD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< int*>(_v) = resolutionX(); break;
        case 2: *reinterpret_cast< int*>(_v) = resolutionY(); break;
        case 3: *reinterpret_cast< double*>(_v) = chipWidth(); break;
        case 4: *reinterpret_cast< double*>(_v) = chipHeight(); break;
        case 5: *reinterpret_cast< double*>(_v) = pixelWidth(); break;
        case 6: *reinterpret_cast< double*>(_v) = pixelHeight(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setResolutionX(*reinterpret_cast< int*>(_v)); break;
        case 2: setResolutionY(*reinterpret_cast< int*>(_v)); break;
        case 3: setChipWidth(*reinterpret_cast< double*>(_v)); break;
        case 4: setChipHeight(*reinterpret_cast< double*>(_v)); break;
        case 5: setPixelWidth(*reinterpret_cast< double*>(_v)); break;
        case 6: setPixelHeight(*reinterpret_cast< double*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
