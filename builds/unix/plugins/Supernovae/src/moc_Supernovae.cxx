/****************************************************************************
** Meta object code from reading C++ file 'Supernovae.hpp'
**
** Created: Sat Apr 20 14:29:43 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/Supernovae/src/Supernovae.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Supernovae.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Supernovae[] = {

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
      18,   12,   11,   11, 0x05,
      62,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   11,   11,   11, 0x0a,
     113,   96,   11,   11, 0x0a,
     153,  145,   11,   11, 0x2a,
     177,   11,   11,   11, 0x0a,
     194,   11,   11,   11, 0x08,
     217,  211,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Supernovae[] = {
    "Supernovae\0\0state\0"
    "updateStateChanged(Supernovae::UpdateState)\0"
    "jsonUpdateComplete()\0updateJSON()\0"
    "message,hexColor\0displayMessage(QString,QString)\0"
    "message\0displayMessage(QString)\0"
    "messageTimeout()\0checkForUpdate()\0"
    "reply\0updateDownloadComplete(QNetworkReply*)\0"
};

void Supernovae::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Supernovae *_t = static_cast<Supernovae *>(_o);
        switch (_id) {
        case 0: _t->updateStateChanged((*reinterpret_cast< Supernovae::UpdateState(*)>(_a[1]))); break;
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

const QMetaObjectExtraData Supernovae::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Supernovae::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_Supernovae,
      qt_meta_data_Supernovae, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Supernovae::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Supernovae::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Supernovae::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Supernovae))
        return static_cast<void*>(const_cast< Supernovae*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int Supernovae::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Supernovae::updateStateChanged(Supernovae::UpdateState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Supernovae::jsonUpdateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_SupernovaeStelPluginInterface[] = {

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

static const char qt_meta_stringdata_SupernovaeStelPluginInterface[] = {
    "SupernovaeStelPluginInterface\0"
};

void SupernovaeStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SupernovaeStelPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SupernovaeStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SupernovaeStelPluginInterface,
      qt_meta_data_SupernovaeStelPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SupernovaeStelPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SupernovaeStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SupernovaeStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SupernovaeStelPluginInterface))
        return static_cast<void*>(const_cast< SupernovaeStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< SupernovaeStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< SupernovaeStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int SupernovaeStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
