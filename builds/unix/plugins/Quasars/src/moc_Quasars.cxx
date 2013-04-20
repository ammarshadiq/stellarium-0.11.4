/****************************************************************************
** Meta object code from reading C++ file 'Quasars.hpp'
**
** Created: Sat Apr 20 14:29:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Quasars/src/Quasars.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Quasars.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Quasars[] = {

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

static const char qt_meta_stringdata_Quasars[] = {
    "Quasars\0\0state\0updateStateChanged(Quasars::UpdateState)\0"
    "jsonUpdateComplete()\0updateJSON()\0"
    "message,hexColor\0displayMessage(QString,QString)\0"
    "message\0displayMessage(QString)\0"
    "messageTimeout()\0checkForUpdate()\0"
    "reply\0updateDownloadComplete(QNetworkReply*)\0"
};

void Quasars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Quasars *_t = static_cast<Quasars *>(_o);
        switch (_id) {
        case 0: _t->updateStateChanged((*reinterpret_cast< Quasars::UpdateState(*)>(_a[1]))); break;
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

const QMetaObjectExtraData Quasars::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Quasars::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_Quasars,
      qt_meta_data_Quasars, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Quasars::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Quasars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Quasars::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Quasars))
        return static_cast<void*>(const_cast< Quasars*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int Quasars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Quasars::updateStateChanged(Quasars::UpdateState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Quasars::jsonUpdateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_QuasarsStelPluginInterface[] = {

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

static const char qt_meta_stringdata_QuasarsStelPluginInterface[] = {
    "QuasarsStelPluginInterface\0"
};

void QuasarsStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QuasarsStelPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QuasarsStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QuasarsStelPluginInterface,
      qt_meta_data_QuasarsStelPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuasarsStelPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuasarsStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuasarsStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuasarsStelPluginInterface))
        return static_cast<void*>(const_cast< QuasarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< QuasarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< QuasarsStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int QuasarsStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
