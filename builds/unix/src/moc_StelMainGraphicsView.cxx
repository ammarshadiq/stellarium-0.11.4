/****************************************************************************
** Meta object code from reading C++ file 'StelMainGraphicsView.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/StelMainGraphicsView.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelMainGraphicsView.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelMainGraphicsView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   44,   21,   21, 0x0a,
     106,   95,   21,   21, 0x2a,
     130,   21,   21,   21, 0x2a,
     152,   21,  147,   21, 0x0a,
     186,  184,   21,   21, 0x0a,
     222,   21,  147,   21, 0x0a,
     251,   21,  245,   21, 0x0a,
     270,  184,   21,   21, 0x0a,
     299,  297,   21,   21, 0x0a,
     325,  323,   21,   21, 0x0a,
     342,   21,  245,   21, 0x0a,
     354,  323,   21,   21, 0x0a,
     371,   21,  245,   21, 0x0a,
     383,   21,   21,   21, 0x0a,
     397,   21,   21,   21, 0x08,
     412,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StelMainGraphicsView[] = {
    "StelMainGraphicsView\0\0screenshotRequested()\0"
    "filePrefix,saveDir\0saveScreenShot(QString,QString)\0"
    "filePrefix\0saveScreenShot(QString)\0"
    "saveScreenShot()\0bool\0"
    "getFlagInvertScreenShotColors()\0b\0"
    "setFlagInvertScreenShotColors(bool)\0"
    "getFlagCursorTimeout()\0float\0"
    "getCursorTimeout()\0setFlagCursorTimeout(bool)\0"
    "t\0setCursorTimeout(float)\0m\0"
    "setMinFps(float)\0getMinFps()\0"
    "setMaxFps(float)\0getMaxFps()\0updateScene()\0"
    "doScreenshot()\0minFpsChanged()\0"
};

void StelMainGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelMainGraphicsView *_t = static_cast<StelMainGraphicsView *>(_o);
        switch (_id) {
        case 0: _t->screenshotRequested(); break;
        case 1: _t->saveScreenShot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->saveScreenShot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->saveScreenShot(); break;
        case 4: { bool _r = _t->getFlagInvertScreenShotColors();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setFlagInvertScreenShotColors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { bool _r = _t->getFlagCursorTimeout();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { float _r = _t->getCursorTimeout();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 8: _t->setFlagCursorTimeout((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setCursorTimeout((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->setMinFps((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: { float _r = _t->getMinFps();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 12: _t->setMaxFps((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: { float _r = _t->getMaxFps();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 14: _t->updateScene(); break;
        case 15: _t->doScreenshot(); break;
        case 16: _t->minFpsChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelMainGraphicsView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelMainGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_StelMainGraphicsView,
      qt_meta_data_StelMainGraphicsView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelMainGraphicsView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelMainGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelMainGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelMainGraphicsView))
        return static_cast<void*>(const_cast< StelMainGraphicsView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int StelMainGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void StelMainGraphicsView::screenshotRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
