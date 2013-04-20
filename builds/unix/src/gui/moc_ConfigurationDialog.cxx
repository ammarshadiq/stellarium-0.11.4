/****************************************************************************
** Meta object code from reading C++ file 'ConfigurationDialog.hpp'
**
** Created: Sat Apr 20 14:26:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/ConfigurationDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConfigurationDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConfigurationDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      35,   20,   20,   20, 0x0a,
      54,   20,   20,   20, 0x08,
      74,   20,   20,   20, 0x08,
      95,   20,   20,   20, 0x08,
     118,   20,   20,   20, 0x08,
     163,  150,   20,   20, 0x08,
     187,   20,   20,   20, 0x08,
     208,   20,   20,   20, 0x08,
     230,   20,   20,   20, 0x08,
     253,   20,   20,   20, 0x08,
     276,   20,   20,   20, 0x08,
     305,   20,   20,   20, 0x08,
     326,   20,   20,   20, 0x08,
     342,   20,   20,   20, 0x08,
     359,   20,   20,   20, 0x08,
     378,   20,   20,   20, 0x08,
     421,   20,   20,   20, 0x08,
     442,   20,   20,   20, 0x08,
     471,  467,   20,   20, 0x08,
     500,   20,   20,   20, 0x08,
     525,   20,   20,   20, 0x08,
     549,   20,   20,   20, 0x08,
     571,   20,   20,   20, 0x08,
     604,   20,   20,   20, 0x08,
     638,   20,   20,   20, 0x08,
     666,  664,   20,   20, 0x08,
     698,   20,   20,   20, 0x08,
     717,   20,   20,   20, 0x08,
     737,   20,   20,   20, 0x08,
     756,   20,   20,   20, 0x08,
     776,   20,   20,   20, 0x08,
     798,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConfigurationDialog[] = {
    "ConfigurationDialog\0\0retranslate()\0"
    "updateIconsColor()\0setNoSelectedInfo()\0"
    "setAllSelectedInfo()\0setBriefSelectedInfo()\0"
    "setSelectedInfoFromCheckBoxes()\0"
    "languageCode\0selectLanguage(QString)\0"
    "setStartupTimeMode()\0setDiskViewport(bool)\0"
    "setSphericMirror(bool)\0cursorTimeOutChanged()\0"
    "cursorTimeOutChanged(double)\0"
    "newStarCatalogData()\0downloadStars()\0"
    "cancelDownload()\0downloadFinished()\0"
    "downloadError(QNetworkReply::NetworkError)\0"
    "updateConfigLabels()\0browseForScreenshotDir()\0"
    "dir\0selectScreenshotDir(QString)\0"
    "saveCurrentViewOptions()\0"
    "setDefaultViewOptions()\0populatePluginsList()\0"
    "pluginsSelectionChanged(QString)\0"
    "pluginConfigureCurrentSelection()\0"
    "loadAtStartupChanged(int)\0s\0"
    "scriptSelectionChanged(QString)\0"
    "runScriptClicked()\0stopScriptClicked()\0"
    "aScriptIsRunning()\0aScriptHasStopped()\0"
    "populateScriptsList()\0setFixedDateTimeToCurrent()\0"
};

void ConfigurationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConfigurationDialog *_t = static_cast<ConfigurationDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->updateIconsColor(); break;
        case 2: _t->setNoSelectedInfo(); break;
        case 3: _t->setAllSelectedInfo(); break;
        case 4: _t->setBriefSelectedInfo(); break;
        case 5: _t->setSelectedInfoFromCheckBoxes(); break;
        case 6: _t->selectLanguage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setStartupTimeMode(); break;
        case 8: _t->setDiskViewport((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setSphericMirror((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->cursorTimeOutChanged(); break;
        case 11: _t->cursorTimeOutChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->newStarCatalogData(); break;
        case 13: _t->downloadStars(); break;
        case 14: _t->cancelDownload(); break;
        case 15: _t->downloadFinished(); break;
        case 16: _t->downloadError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 17: _t->updateConfigLabels(); break;
        case 18: _t->browseForScreenshotDir(); break;
        case 19: _t->selectScreenshotDir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->saveCurrentViewOptions(); break;
        case 21: _t->setDefaultViewOptions(); break;
        case 22: _t->populatePluginsList(); break;
        case 23: _t->pluginsSelectionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->pluginConfigureCurrentSelection(); break;
        case 25: _t->loadAtStartupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->scriptSelectionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->runScriptClicked(); break;
        case 28: _t->stopScriptClicked(); break;
        case 29: _t->aScriptIsRunning(); break;
        case 30: _t->aScriptHasStopped(); break;
        case 31: _t->populateScriptsList(); break;
        case 32: _t->setFixedDateTimeToCurrent(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ConfigurationDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConfigurationDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_ConfigurationDialog,
      qt_meta_data_ConfigurationDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConfigurationDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConfigurationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConfigurationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigurationDialog))
        return static_cast<void*>(const_cast< ConfigurationDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int ConfigurationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
