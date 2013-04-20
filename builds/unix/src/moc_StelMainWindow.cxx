/****************************************************************************
** Meta object code from reading C++ file 'StelMainWindow.hpp'
**
** Created: Sat Apr 20 14:30:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/StelMainWindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelMainWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      40,   15,   35,   15, 0x0a,
      56,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StelMainWindow[] = {
    "StelMainWindow\0\0toggleFullScreen()\0"
    "bool\0getFullScreen()\0setFullScreen(bool)\0"
};

void StelMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelMainWindow *_t = static_cast<StelMainWindow *>(_o);
        switch (_id) {
        case 0: _t->toggleFullScreen(); break;
        case 1: { bool _r = _t->getFullScreen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->setFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_StelMainWindow,
      qt_meta_data_StelMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelMainWindow))
        return static_cast<void*>(const_cast< StelMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int StelMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
