/****************************************************************************
** Meta object code from reading C++ file 'TimeZoneConfiguration.hpp'
**
** Created: Sat Apr 20 14:29:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/TimeZoneConfiguration/src/TimeZoneConfiguration.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimeZoneConfiguration.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TimeZoneConfiguration[] = {

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

static const char qt_meta_stringdata_TimeZoneConfiguration[] = {
    "TimeZoneConfiguration\0"
};

void TimeZoneConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TimeZoneConfiguration::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TimeZoneConfiguration::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_TimeZoneConfiguration,
      qt_meta_data_TimeZoneConfiguration, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TimeZoneConfiguration::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TimeZoneConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TimeZoneConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeZoneConfiguration))
        return static_cast<void*>(const_cast< TimeZoneConfiguration*>(this));
    return StelModule::qt_metacast(_clname);
}

int TimeZoneConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_TimeZoneConfigurationStelPluginInterface[] = {

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

static const char qt_meta_stringdata_TimeZoneConfigurationStelPluginInterface[] = {
    "TimeZoneConfigurationStelPluginInterface\0"
};

void TimeZoneConfigurationStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TimeZoneConfigurationStelPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TimeZoneConfigurationStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TimeZoneConfigurationStelPluginInterface,
      qt_meta_data_TimeZoneConfigurationStelPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TimeZoneConfigurationStelPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TimeZoneConfigurationStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TimeZoneConfigurationStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeZoneConfigurationStelPluginInterface))
        return static_cast<void*>(const_cast< TimeZoneConfigurationStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< TimeZoneConfigurationStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< TimeZoneConfigurationStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int TimeZoneConfigurationStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
