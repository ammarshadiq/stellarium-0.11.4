/****************************************************************************
** Meta object code from reading C++ file 'TimeZoneConfigurationWindow.hpp'
**
** Created: Sat Apr 20 14:29:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/TimeZoneConfiguration/src/gui/TimeZoneConfigurationWindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimeZoneConfigurationWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TimeZoneConfigurationWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x0a,
      43,   28,   28,   28, 0x08,
      66,   28,   28,   28, 0x08,
      93,   28,   28,   28, 0x08,
     144,  125,   28,   28, 0x08,
     169,   28,   28,   28, 0x08,
     189,   28,   28,   28, 0x08,
     209,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TimeZoneConfigurationWindow[] = {
    "TimeZoneConfigurationWindow\0\0retranslate()\0"
    "saveTimeZoneSettings()\0"
    "openDefineTimeZoneWindow()\0"
    "closeDefineTimeZoneWindow(bool)\0"
    "timeZoneDefinition\0timeZoneDefined(QString)\0"
    "setTimeFormat(bool)\0setDateFormat(bool)\0"
    "updateDisplayFormatSwitches()\0"
};

void TimeZoneConfigurationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TimeZoneConfigurationWindow *_t = static_cast<TimeZoneConfigurationWindow *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->saveTimeZoneSettings(); break;
        case 2: _t->openDefineTimeZoneWindow(); break;
        case 3: _t->closeDefineTimeZoneWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->timeZoneDefined((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setTimeFormat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setDateFormat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateDisplayFormatSwitches(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TimeZoneConfigurationWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TimeZoneConfigurationWindow::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_TimeZoneConfigurationWindow,
      qt_meta_data_TimeZoneConfigurationWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TimeZoneConfigurationWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TimeZoneConfigurationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TimeZoneConfigurationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeZoneConfigurationWindow))
        return static_cast<void*>(const_cast< TimeZoneConfigurationWindow*>(this));
    return StelDialog::qt_metacast(_clname);
}

int TimeZoneConfigurationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
