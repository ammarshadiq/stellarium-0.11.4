/****************************************************************************
** Meta object code from reading C++ file 'TextUserInterface.hpp'
**
** Created: Sat Apr 20 14:29:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/TextUserInterface/src/TextUserInterface.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TextUserInterface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TextUserInterface[] = {

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
      30,   19,   18,   18, 0x08,
      62,   53,   18,   18, 0x08,
      88,   79,   18,   18, 0x08,
     118,  108,   18,   18, 0x08,
     144,  139,   18,   18, 0x08,
     179,  172,   18,   18, 0x08,
     202,  172,   18,   18, 0x08,
     229,  225,   18,   18, 0x08,
     257,  252,   18,   18, 0x08,
     281,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TextUserInterface[] = {
    "TextUserInterface\0\0planetName\0"
    "setHomePlanet(QString)\0altitude\0"
    "setAltitude(int)\0latitude\0setLatitude(double)\0"
    "longitude\0setLongitude(double)\0mode\0"
    "setStartupDateMode(QString)\0format\0"
    "setDateFormat(QString)\0setTimeFormat(QString)\0"
    "i18\0setSkyCulture(QString)\0lang\0"
    "setAppLanguage(QString)\0saveDefaultSettings()\0"
};

void TextUserInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TextUserInterface *_t = static_cast<TextUserInterface *>(_o);
        switch (_id) {
        case 0: _t->setHomePlanet((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setAltitude((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setLatitude((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setLongitude((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setStartupDateMode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setDateFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setTimeFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setSkyCulture((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setAppLanguage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->saveDefaultSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TextUserInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TextUserInterface::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_TextUserInterface,
      qt_meta_data_TextUserInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextUserInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextUserInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextUserInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextUserInterface))
        return static_cast<void*>(const_cast< TextUserInterface*>(this));
    return StelModule::qt_metacast(_clname);
}

int TextUserInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
static const uint qt_meta_data_TextUserInterfaceStelPluginInterface[] = {

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

static const char qt_meta_stringdata_TextUserInterfaceStelPluginInterface[] = {
    "TextUserInterfaceStelPluginInterface\0"
};

void TextUserInterfaceStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TextUserInterfaceStelPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TextUserInterfaceStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TextUserInterfaceStelPluginInterface,
      qt_meta_data_TextUserInterfaceStelPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextUserInterfaceStelPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextUserInterfaceStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextUserInterfaceStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextUserInterfaceStelPluginInterface))
        return static_cast<void*>(const_cast< TextUserInterfaceStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< TextUserInterfaceStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< TextUserInterfaceStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int TextUserInterfaceStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
