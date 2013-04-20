/****************************************************************************
** Meta object code from reading C++ file 'MpcImportWindow.hpp'
**
** Created: Sat Apr 20 14:28:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/SolarSystemEditor/src/gui/MpcImportWindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MpcImportWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MpcImportWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   16,   16,   16, 0x0a,
      57,   49,   16,   16, 0x08,
      80,   16,   16,   16, 0x08,
      93,   16,   16,   16, 0x08,
     113,   16,   16,   16, 0x08,
     139,   16,   16,   16, 0x08,
     159,   16,   16,   16, 0x08,
     175,   16,   16,   16, 0x08,
     191,  187,   16,   16, 0x08,
     212,   16,   16,   16, 0x08,
     225,   16,   16,   16, 0x08,
     243,   16,   16,   16, 0x08,
     284,  259,   16,   16, 0x08,
     322,  259,   16,   16, 0x08,
     363,  357,   16,   16, 0x08,
     396,  357,   16,   16, 0x08,
     430,  357,   16,   16, 0x08,
     461,   16,   16,   16, 0x08,
     471,   16,   16,   16, 0x08,
     483,   16,   16,   16, 0x08,
     496,   16,   16,   16, 0x08,
     513,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MpcImportWindow[] = {
    "MpcImportWindow\0\0objectsImported()\0"
    "retranslate()\0checked\0switchImportType(bool)\0"
    "selectFile()\0pasteClipboardURL()\0"
    "bookmarkSelected(QString)\0acquireObjectData()\0"
    "abortDownload()\0sendQuery()\0url\0"
    "sendQueryToUrl(QUrl)\0abortQuery()\0"
    "updateCountdown()\0resetNotFound()\0"
    "bytesReceived,bytesTotal\0"
    "updateDownloadProgress(qint64,qint64)\0"
    "updateQueryProgress(qint64,qint64)\0"
    "reply\0downloadComplete(QNetworkReply*)\0"
    "receiveQueryReply(QNetworkReply*)\0"
    "readQueryReply(QNetworkReply*)\0markAll()\0"
    "unmarkAll()\0addObjects()\0discardObjects()\0"
    "resetDialog()\0"
};

void MpcImportWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MpcImportWindow *_t = static_cast<MpcImportWindow *>(_o);
        switch (_id) {
        case 0: _t->objectsImported(); break;
        case 1: _t->retranslate(); break;
        case 2: _t->switchImportType((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->selectFile(); break;
        case 4: _t->pasteClipboardURL(); break;
        case 5: _t->bookmarkSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->acquireObjectData(); break;
        case 7: _t->abortDownload(); break;
        case 8: _t->sendQuery(); break;
        case 9: _t->sendQueryToUrl((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 10: _t->abortQuery(); break;
        case 11: _t->updateCountdown(); break;
        case 12: _t->resetNotFound(); break;
        case 13: _t->updateDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 14: _t->updateQueryProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 15: _t->downloadComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 16: _t->receiveQueryReply((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 17: _t->readQueryReply((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 18: _t->markAll(); break;
        case 19: _t->unmarkAll(); break;
        case 20: _t->addObjects(); break;
        case 21: _t->discardObjects(); break;
        case 22: _t->resetDialog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MpcImportWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MpcImportWindow::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_MpcImportWindow,
      qt_meta_data_MpcImportWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MpcImportWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MpcImportWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MpcImportWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MpcImportWindow))
        return static_cast<void*>(const_cast< MpcImportWindow*>(this));
    return StelDialog::qt_metacast(_clname);
}

int MpcImportWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void MpcImportWindow::objectsImported()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
