/****************************************************************************
** Meta object code from reading C++ file 'SatellitesImportDialog.hpp'
**
** Created: Sat Apr 20 14:27:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Satellites/src/gui/SatellitesImportDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SatellitesImportDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SatellitesImportDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   23,   23,   23, 0x0a,
      92,   84,   23,   23, 0x0a,
     109,   23,   23,   23, 0x2a,
     122,   23,   23,   23, 0x08,
     145,  132,   23,   23, 0x08,
     177,   23,   23,   23, 0x08,
     194,   23,   23,   23, 0x08,
     216,   23,   23,   23, 0x08,
     239,   23,   23,   23, 0x08,
     249,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SatellitesImportDialog[] = {
    "SatellitesImportDialog\0\0newSatellites\0"
    "satellitesAccepted(TleDataList)\0"
    "retranslate()\0visible\0setVisible(bool)\0"
    "setVisible()\0getData()\0networkReply\0"
    "receiveDownload(QNetworkReply*)\0"
    "abortDownloads()\0acceptNewSatellites()\0"
    "discardNewSatellites()\0markAll()\0"
    "markNone()\0"
};

void SatellitesImportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SatellitesImportDialog *_t = static_cast<SatellitesImportDialog *>(_o);
        switch (_id) {
        case 0: _t->satellitesAccepted((*reinterpret_cast< const TleDataList(*)>(_a[1]))); break;
        case 1: _t->retranslate(); break;
        case 2: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setVisible(); break;
        case 4: _t->getData(); break;
        case 5: _t->receiveDownload((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->abortDownloads(); break;
        case 7: _t->acceptNewSatellites(); break;
        case 8: _t->discardNewSatellites(); break;
        case 9: _t->markAll(); break;
        case 10: _t->markNone(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SatellitesImportDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SatellitesImportDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_SatellitesImportDialog,
      qt_meta_data_SatellitesImportDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SatellitesImportDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SatellitesImportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SatellitesImportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SatellitesImportDialog))
        return static_cast<void*>(const_cast< SatellitesImportDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int SatellitesImportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SatellitesImportDialog::satellitesAccepted(const TleDataList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
