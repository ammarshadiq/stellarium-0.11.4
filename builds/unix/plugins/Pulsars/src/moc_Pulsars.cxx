/****************************************************************************
** Meta object code from reading C++ file 'Pulsars.hpp'
**
** Created: Sat Apr 20 14:30:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Pulsars/src/Pulsars.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Pulsars.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Pulsars[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,    9,    8,    8, 0x05,
      56,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,    8,    8,    8, 0x0a,
     107,   90,    8,    8, 0x0a,
     147,  139,    8,    8, 0x2a,
     171,    8,    8,    8, 0x0a,
     188,    8,    8,    8, 0x08,
     211,  205,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Pulsars[] = {
    "Pulsars\0\0state\0updateStateChanged(Pulsars::UpdateState)\0"
    "jsonUpdateComplete()\0updateJSON()\0"
    "message,hexColor\0displayMessage(QString,QString)\0"
    "message\0displayMessage(QString)\0"
    "messageTimeout()\0checkForUpdate()\0"
    "reply\0updateDownloadComplete(QNetworkReply*)\0"
};

void Pulsars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Pulsars *_t = static_cast<Pulsars *>(_o);
        switch (_id) {
        case 0: _t->updateStateChanged((*reinterpret_cast< Pulsars::UpdateState(*)>(_a[1]))); break;
        case 1: _t->jsonUpdateComplete(); break;
        case 2: _t->updateJSON(); break;
        case 3: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->messageTimeout(); break;
        case 6: _t->checkForUpdate(); break;
        case 7: _t->updateDownloadComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Pulsars::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Pulsars::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_Pulsars,
      qt_meta_data_Pulsars, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Pulsars::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Pulsars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Pulsars::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pulsars))
        return static_cast<void*>(const_cast< Pulsars*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int Pulsars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Pulsars::updateStateChanged(Pulsars::UpdateState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Pulsars::jsonUpdateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_PulsarsStelPluginInterface[] = {

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

static const char qt_meta_stringdata_PulsarsStelPluginInterface[] = {
    "PulsarsStelPluginInterface\0"
};

void PulsarsStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PulsarsStelPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PulsarsStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PulsarsStelPluginInterface,
      qt_meta_data_PulsarsStelPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PulsarsStelPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PulsarsStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PulsarsStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PulsarsStelPluginInterface))
        return static_cast<void*>(const_cast< PulsarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< PulsarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< PulsarsStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int PulsarsStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
