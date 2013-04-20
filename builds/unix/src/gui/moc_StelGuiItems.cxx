/****************************************************************************
** Meta object code from reading C++ file 'StelGuiItems.hpp'
**
** Created: Sat Apr 20 14:25:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/StelGuiItems.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelGuiItems.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StelProgressBarMgr[] = {

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

static const char qt_meta_stringdata_StelProgressBarMgr[] = {
    "StelProgressBarMgr\0"
};

void StelProgressBarMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StelProgressBarMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelProgressBarMgr::staticMetaObject = {
    { &QGraphicsWidget::staticMetaObject, qt_meta_stringdata_StelProgressBarMgr,
      qt_meta_data_StelProgressBarMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelProgressBarMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelProgressBarMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelProgressBarMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelProgressBarMgr))
        return static_cast<void*>(const_cast< StelProgressBarMgr*>(this));
    return QGraphicsWidget::qt_metacast(_clname);
}

int StelProgressBarMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CornerButtons[] = {

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

static const char qt_meta_stringdata_CornerButtons[] = {
    "CornerButtons\0"
};

void CornerButtons::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CornerButtons::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CornerButtons::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CornerButtons,
      qt_meta_data_CornerButtons, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CornerButtons::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CornerButtons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CornerButtons::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CornerButtons))
        return static_cast<void*>(const_cast< CornerButtons*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< CornerButtons*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< CornerButtons*>(this));
    return QObject::qt_metacast(_clname);
}

int CornerButtons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_StelButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      26,   11,   11,   11, 0x05,
      40,   38,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   38,   11,   11, 0x0a,
      75,   38,   11,   11, 0x0a,
      98,   92,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StelButton[] = {
    "StelButton\0\0toggled(bool)\0triggered()\0"
    "b\0hoverChanged(bool)\0setChecked(int)\0"
    "setChecked(bool)\0value\0animValueChanged(qreal)\0"
};

void StelButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelButton *_t = static_cast<StelButton *>(_o);
        switch (_id) {
        case 0: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->triggered(); break;
        case 2: _t->hoverChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->animValueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelButton,
      qt_meta_data_StelButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelButton))
        return static_cast<void*>(const_cast< StelButton*>(this));
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(const_cast< StelButton*>(this));
    return QObject::qt_metacast(_clname);
}

int StelButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void StelButton::toggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelButton::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StelButton::hoverChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_LeftStelBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   13,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LeftStelBar[] = {
    "LeftStelBar\0\0b\0buttonHoverChanged(bool)\0"
};

void LeftStelBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LeftStelBar *_t = static_cast<LeftStelBar *>(_o);
        switch (_id) {
        case 0: _t->buttonHoverChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LeftStelBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LeftStelBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LeftStelBar,
      qt_meta_data_LeftStelBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LeftStelBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LeftStelBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LeftStelBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LeftStelBar))
        return static_cast<void*>(const_cast< LeftStelBar*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< LeftStelBar*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< LeftStelBar*>(this));
    return QObject::qt_metacast(_clname);
}

int LeftStelBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_BottomStelBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   15,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BottomStelBar[] = {
    "BottomStelBar\0\0b\0buttonHoverChanged(bool)\0"
};

void BottomStelBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BottomStelBar *_t = static_cast<BottomStelBar *>(_o);
        switch (_id) {
        case 0: _t->buttonHoverChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BottomStelBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BottomStelBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BottomStelBar,
      qt_meta_data_BottomStelBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BottomStelBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BottomStelBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BottomStelBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BottomStelBar))
        return static_cast<void*>(const_cast< BottomStelBar*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< BottomStelBar*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< BottomStelBar*>(this));
    return QObject::qt_metacast(_clname);
}

int BottomStelBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
