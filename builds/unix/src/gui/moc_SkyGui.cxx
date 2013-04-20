/****************************************************************************
** Meta object code from reading C++ file 'SkyGui.hpp'
**
** Created: Sat Apr 20 14:25:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/SkyGui.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SkyGui.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SkyGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    8,    7,    7, 0x08,
      36,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SkyGui[] = {
    "SkyGui\0\0style\0setStelStyle(QString)\0"
    "updateBarsPos()\0"
};

void SkyGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SkyGui *_t = static_cast<SkyGui *>(_o);
        switch (_id) {
        case 0: _t->setStelStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateBarsPos(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SkyGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SkyGui::staticMetaObject = {
    { &QGraphicsWidget::staticMetaObject, qt_meta_stringdata_SkyGui,
      qt_meta_data_SkyGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SkyGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SkyGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SkyGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SkyGui))
        return static_cast<void*>(const_cast< SkyGui*>(this));
    return QGraphicsWidget::qt_metacast(_clname);
}

int SkyGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
