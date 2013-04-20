/****************************************************************************
** Meta object code from reading C++ file 'Telescope.hpp'
**
** Created: Sat Apr 20 14:27:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Oculars/src/Telescope.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Telescope.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Telescope[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       1,   29, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      18,   10, 0x0a095103,
      30,   23, 0x06095103,
      39,   23, 0x06095103,
      56,   51, 0x01095103,
      65,   51, 0x01095103,

 // constructors: signature, parameters, type, tag, flags
      81,   75,   74,   74, 0x0e,

       0        // eod
};

static const char qt_meta_stringdata_Telescope[] = {
    "Telescope\0QString\0name\0double\0diameter\0"
    "focalLength\0bool\0hFlipped\0vFlipped\0\0"
    "other\0Telescope(QObject)\0"
};

void Telescope::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Telescope *_r = new Telescope((*reinterpret_cast< const QObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    }
    Q_UNUSED(_o);
}

const QMetaObjectExtraData Telescope::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Telescope::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Telescope,
      qt_meta_data_Telescope, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Telescope::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Telescope::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Telescope::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Telescope))
        return static_cast<void*>(const_cast< Telescope*>(this));
    return QObject::qt_metacast(_clname);
}

int Telescope::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< double*>(_v) = diameter(); break;
        case 2: *reinterpret_cast< double*>(_v) = focalLength(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isHFlipped(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isVFlipped(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setDiameter(*reinterpret_cast< double*>(_v)); break;
        case 2: setFocalLength(*reinterpret_cast< double*>(_v)); break;
        case 3: setHFlipped(*reinterpret_cast< bool*>(_v)); break;
        case 4: setVFlipped(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
