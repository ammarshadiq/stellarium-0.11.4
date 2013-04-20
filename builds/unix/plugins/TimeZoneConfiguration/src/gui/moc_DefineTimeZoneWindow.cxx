/****************************************************************************
** Meta object code from reading C++ file 'DefineTimeZoneWindow.hpp'
**
** Created: Sat Apr 20 14:29:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/TimeZoneConfiguration/src/gui/DefineTimeZoneWindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DefineTimeZoneWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DefineTimeZoneWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   21,   21,   21, 0x0a,
      76,   21,   21,   21, 0x08,
     105,   92,   21,   21, 0x08,
     140,  129,   21,   21, 0x08,
     176,  129,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DefineTimeZoneWindow[] = {
    "DefineTimeZoneWindow\0\0timeZoneString\0"
    "timeZoneDefined(QString)\0retranslate()\0"
    "useDefinition()\0normalOffset\0"
    "updateDstOffset(double)\0monthIndex\0"
    "updateDayNumberMaximumDstStart(int)\0"
    "updateDayNumberMaximumDstEnd(int)\0"
};

void DefineTimeZoneWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DefineTimeZoneWindow *_t = static_cast<DefineTimeZoneWindow *>(_o);
        switch (_id) {
        case 0: _t->timeZoneDefined((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->retranslate(); break;
        case 2: _t->useDefinition(); break;
        case 3: _t->updateDstOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->updateDayNumberMaximumDstStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateDayNumberMaximumDstEnd((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DefineTimeZoneWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DefineTimeZoneWindow::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_DefineTimeZoneWindow,
      qt_meta_data_DefineTimeZoneWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DefineTimeZoneWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DefineTimeZoneWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DefineTimeZoneWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DefineTimeZoneWindow))
        return static_cast<void*>(const_cast< DefineTimeZoneWindow*>(this));
    return StelDialog::qt_metacast(_clname);
}

int DefineTimeZoneWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DefineTimeZoneWindow::timeZoneDefined(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
