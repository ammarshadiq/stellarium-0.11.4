/****************************************************************************
** Meta object code from reading C++ file 'SolarSystemEditor.hpp'
**
** Created: Sat Apr 20 14:28:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/SolarSystemEditor/src/SolarSystemEditor.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SolarSystemEditor.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SolarSystemEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   18,   18,   18, 0x0a,
      68,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SolarSystemEditor[] = {
    "SolarSystemEditor\0\0solarSystemChanged()\0"
    "resetSolarSystemToDefault()\0updateI18n()\0"
};

void SolarSystemEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SolarSystemEditor *_t = static_cast<SolarSystemEditor *>(_o);
        switch (_id) {
        case 0: _t->solarSystemChanged(); break;
        case 1: _t->resetSolarSystemToDefault(); break;
        case 2: _t->updateI18n(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SolarSystemEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SolarSystemEditor::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_SolarSystemEditor,
      qt_meta_data_SolarSystemEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SolarSystemEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SolarSystemEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SolarSystemEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SolarSystemEditor))
        return static_cast<void*>(const_cast< SolarSystemEditor*>(this));
    return StelModule::qt_metacast(_clname);
}

int SolarSystemEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SolarSystemEditor::solarSystemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_SolarSystemEditorStelPluginInterface[] = {

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

static const char qt_meta_stringdata_SolarSystemEditorStelPluginInterface[] = {
    "SolarSystemEditorStelPluginInterface\0"
};

void SolarSystemEditorStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SolarSystemEditorStelPluginInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SolarSystemEditorStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SolarSystemEditorStelPluginInterface,
      qt_meta_data_SolarSystemEditorStelPluginInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SolarSystemEditorStelPluginInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SolarSystemEditorStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SolarSystemEditorStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SolarSystemEditorStelPluginInterface))
        return static_cast<void*>(const_cast< SolarSystemEditorStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< SolarSystemEditorStelPluginInterface*>(this));
    if (!strcmp(_clname, "stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(const_cast< SolarSystemEditorStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int SolarSystemEditorStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE