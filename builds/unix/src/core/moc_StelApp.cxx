/****************************************************************************
** Meta object code from reading C++ file 'StelApp.hpp'
**
** Created: Sat Apr 20 14:30:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelApp.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelApp.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      37,    8,    8,    8, 0x05,
      55,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      82,    8,    8,    8, 0x0a,
     112,    8,  107,    8, 0x0a,
     139,    8,  133,    8, 0x0a,
     155,    8,  148,    8, 0x0a,
     179,  173,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StelApp[] = {
    "StelApp\0\0colorSchemeChanged(QString)\0"
    "languageChanged()\0skyCultureChanged(QString)\0"
    "setVisionModeNight(bool)\0bool\0"
    "getVisionModeNight()\0float\0getFps()\0"
    "double\0getTotalRunTime()\0reply\0"
    "reportFileDownloadFinished(QNetworkReply*)\0"
};

void StelApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelApp *_t = static_cast<StelApp *>(_o);
        switch (_id) {
        case 0: _t->colorSchemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->languageChanged(); break;
        case 2: _t->skyCultureChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setVisionModeNight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->getVisionModeNight();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { float _r = _t->getFps();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 6: { double _r = _t->getTotalRunTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 7: _t->reportFileDownloadFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelApp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelApp,
      qt_meta_data_StelApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelApp))
        return static_cast<void*>(const_cast< StelApp*>(this));
    return QObject::qt_metacast(_clname);
}

int StelApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void StelApp::colorSchemeChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelApp::languageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StelApp::skyCultureChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
