/****************************************************************************
** Meta object code from reading C++ file 'ViewDialog.hpp'
**
** Created: Sat Apr 20 14:26:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/ViewDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      26,   11,   11,   11, 0x0a,
      45,   11,   11,   11, 0x08,
      73,   61,   11,   11, 0x08,
     115,  100,   11,   11, 0x08,
     147,  142,   11,   11, 0x08,
     182,   11,   11,   11, 0x08,
     207,  203,   11,   11, 0x08,
     230,  203,   11,   11, 0x08,
     256,   11,   11,   11, 0x08,
     287,   11,   11,   11, 0x08,
     318,   11,   11,   11, 0x08,
     347,   11,   11,   11, 0x08,
     378,   11,   11,   11, 0x08,
     407,   11,   11,   11, 0x08,
     427,   11,   11,   11, 0x08,
     459,   11,   11,   11, 0x08,
     482,   11,   11,   11, 0x08,
     506,   11,   11,   11, 0x08,
     541,   11,   11,   11, 0x08,
     587,  570,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ViewDialog[] = {
    "ViewDialog\0\0retranslate()\0updateIconsColor()\0"
    "populateLists()\0cultureName\0"
    "skyCultureChanged(QString)\0projectionName\0"
    "projectionChanged(QString)\0item\0"
    "landscapeChanged(QListWidgetItem*)\0"
    "setZhrFromControls()\0zhr\0"
    "updateZhrControls(int)\0updateZhrDescription(int)\0"
    "planetsLabelsValueChanged(int)\0"
    "nebulasLabelsValueChanged(int)\0"
    "starsLabelsValueChanged(int)\0"
    "setCurrentLandscapeAsDefault()\0"
    "setCurrentCultureAsDefault()\0"
    "updateFromProgram()\0showAddRemoveLandscapesDialog()\0"
    "showAtmosphereDialog()\0populateSkyLayersList()\0"
    "skyLayersSelectionChanged(QString)\0"
    "skyLayersEnabledChanged(int)\0"
    "current,previous\0"
    "changePage(QListWidgetItem*,QListWidgetItem*)\0"
};

void ViewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewDialog *_t = static_cast<ViewDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->updateIconsColor(); break;
        case 2: _t->populateLists(); break;
        case 3: _t->skyCultureChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->projectionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->landscapeChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->setZhrFromControls(); break;
        case 7: _t->updateZhrControls((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateZhrDescription((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->planetsLabelsValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->nebulasLabelsValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->starsLabelsValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setCurrentLandscapeAsDefault(); break;
        case 13: _t->setCurrentCultureAsDefault(); break;
        case 14: _t->updateFromProgram(); break;
        case 15: _t->showAddRemoveLandscapesDialog(); break;
        case 16: _t->showAtmosphereDialog(); break;
        case 17: _t->populateSkyLayersList(); break;
        case 18: _t->skyLayersSelectionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->skyLayersEnabledChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->changePage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ViewDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_ViewDialog,
      qt_meta_data_ViewDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewDialog))
        return static_cast<void*>(const_cast< ViewDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int ViewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
