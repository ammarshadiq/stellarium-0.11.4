/****************************************************************************
** Meta object code from reading C++ file 'Ocular.hpp'
**
** Created: Sat Apr 20 14:27:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Oculars/src/Ocular.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Ocular.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ocular[] = {

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
      15,    7, 0x0a095103,
      27,   20, 0x06095103,
      40,   20, 0x06095103,
      61,   20, 0x06095103,
      76,   71, 0x01095103,

 // constructors: signature, parameters, type, tag, flags
      94,   88,   87,   87, 0x0e,

       0        // eod
};

static const char qt_meta_stringdata_Ocular[] = {
    "Ocular\0QString\0name\0double\0appearentFOV\0"
    "effectiveFocalLength\0fieldStop\0bool\0"
    "binoculars\0\0other\0Ocular(QObject)\0"
};

void Ocular::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Ocular *_r = new Ocular((*reinterpret_cast< const QObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    }
    Q_UNUSED(_o);
}

const QMetaObjectExtraData Ocular::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Ocular::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Ocular,
      qt_meta_data_Ocular, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ocular::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ocular::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ocular::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ocular))
        return static_cast<void*>(const_cast< Ocular*>(this));
    return QObject::qt_metacast(_clname);
}

int Ocular::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< double*>(_v) = appearentFOV(); break;
        case 2: *reinterpret_cast< double*>(_v) = effectiveFocalLength(); break;
        case 3: *reinterpret_cast< double*>(_v) = fieldStop(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isBinoculars(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setAppearentFOV(*reinterpret_cast< double*>(_v)); break;
        case 2: setEffectiveFocalLength(*reinterpret_cast< double*>(_v)); break;
        case 3: setFieldStop(*reinterpret_cast< double*>(_v)); break;
        case 4: setBinoculars(*reinterpret_cast< bool*>(_v)); break;
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
