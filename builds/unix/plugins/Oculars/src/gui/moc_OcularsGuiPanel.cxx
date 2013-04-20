/****************************************************************************
** Meta object code from reading C++ file 'OcularsGuiPanel.hpp'
**
** Created: Sat Apr 20 14:27:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Oculars/src/gui/OcularsGuiPanel.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OcularsGuiPanel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OcularsGuiPanel[] = {

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
      17,   16,   16,   16, 0x0a,
      33,   16,   16,   16, 0x0a,
      46,   16,   16,   16, 0x0a,
      56,   16,   16,   16, 0x08,
      73,   16,   16,   16, 0x08,
      96,   16,   16,   16, 0x08,
     116,   16,   16,   16, 0x08,
     153,  142,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OcularsGuiPanel[] = {
    "OcularsGuiPanel\0\0showOcularGui()\0"
    "showCcdGui()\0foldGui()\0updatePosition()\0"
    "updateOcularControls()\0updateCcdControls()\0"
    "updateTelescopeControls()\0schemeName\0"
    "setColorScheme(QString)\0"
};

void OcularsGuiPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OcularsGuiPanel *_t = static_cast<OcularsGuiPanel *>(_o);
        switch (_id) {
        case 0: _t->showOcularGui(); break;
        case 1: _t->showCcdGui(); break;
        case 2: _t->foldGui(); break;
        case 3: _t->updatePosition(); break;
        case 4: _t->updateOcularControls(); break;
        case 5: _t->updateCcdControls(); break;
        case 6: _t->updateTelescopeControls(); break;
        case 7: _t->setColorScheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OcularsGuiPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OcularsGuiPanel::staticMetaObject = {
    { &QGraphicsWidget::staticMetaObject, qt_meta_stringdata_OcularsGuiPanel,
      qt_meta_data_OcularsGuiPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OcularsGuiPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OcularsGuiPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OcularsGuiPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OcularsGuiPanel))
        return static_cast<void*>(const_cast< OcularsGuiPanel*>(this));
    return QGraphicsWidget::qt_metacast(_clname);
}

int OcularsGuiPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
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
