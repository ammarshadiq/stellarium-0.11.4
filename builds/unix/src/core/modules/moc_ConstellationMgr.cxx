/****************************************************************************
** Meta object code from reading C++ file 'ConstellationMgr.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/core/modules/ConstellationMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConstellationMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConstellationMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
      11,  199, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   18,   17,   17, 0x05,
      63,   54,   17,   17, 0x05,
     103,   93,   17,   17, 0x05,
     137,  131,   17,   17, 0x05,
     167,   18,   17,   17, 0x05,
     208,  200,   17,   17, 0x05,
     239,  231,   17,   17, 0x05,
     268,  131,   17,   17, 0x05,
     293,   18,   17,   17, 0x05,
     321,  131,   17,   17, 0x05,
     346,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     374,   18,   17,   17, 0x0a,
     396,   17,  391,   17, 0x0a,
     409,   54,   17,   17, 0x0a,
     441,   17,  435,   17, 0x0a,
     462,   93,   17,   17, 0x0a,
     493,   17,  486,   17, 0x0a,
     511,  131,   17,   17, 0x0a,
     543,   17,  537,   17, 0x0a,
     564,   18,   17,   17, 0x0a,
     588,   17,  391,   17, 0x0a,
     608,  231,   17,   17, 0x0a,
     637,   17,  391,   17, 0x0a,
     662,  131,   17,   17, 0x0a,
     683,   17,  537,   17, 0x0a,
     699,   18,   17,   17, 0x0a,
     718,   17,  391,   17, 0x0a,
     733,  131,   17,   17, 0x0a,
     755,   17,  537,   17, 0x0a,
     772,   18,   17,   17, 0x0a,
     792,   17,  391,   17, 0x0a,
     820,  808,   17,   17, 0x0a,
     839,   17,  435,   17, 0x0a,
     860,  853,   17,   17, 0x08,
     925,  917,   17,   17, 0x08,
     961,  947,   17,   17, 0x08,
     987,   17,   17,   17, 0x08,

 // properties: name, type, flags
    1000,  391, 0x01495003,
    1013,  391, 0x01495103,
    1029,  391, 0x01495103,
    1042,  391, 0x01495103,
    1058,  391, 0x01495003,
    1078,  391, 0x01495103,
    1087,  391, 0x01495003,
    1103,  391, 0x01495103,
    1114,  391, 0x01495003,
    1129,  391, 0x01495003,
    1140,  391, 0x01495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,

       0        // eod
};

static const char qt_meta_stringdata_ConstellationMgr[] = {
    "ConstellationMgr\0\0displayed\0"
    "artDisplayedChanged(bool)\0duration\0"
    "artFadeDurationChanged(float)\0intensity\0"
    "artIntensityChanged(double)\0color\0"
    "boundariesColorChanged(Vec3f)\0"
    "boundariesDisplayedChanged(bool)\0"
    "newSize\0fontSizeChanged(float)\0isolate\0"
    "isolateSelectedChanged(bool)\0"
    "linesColorChanged(Vec3f)\0"
    "linesDisplayedChanged(bool)\0"
    "namesColorChanged(Vec3f)\0"
    "namesDisplayedChanged(bool)\0"
    "setFlagArt(bool)\0bool\0getFlagArt()\0"
    "setArtFadeDuration(float)\0float\0"
    "getArtFadeDuration()\0setArtIntensity(double)\0"
    "double\0getArtIntensity()\0"
    "setBoundariesColor(Vec3f)\0Vec3f\0"
    "getBoundariesColor()\0setFlagBoundaries(bool)\0"
    "getFlagBoundaries()\0setFlagIsolateSelected(bool)\0"
    "getFlagIsolateSelected()\0setLinesColor(Vec3f)\0"
    "getLinesColor()\0setFlagLines(bool)\0"
    "getFlagLines()\0setLabelsColor(Vec3f)\0"
    "getLabelsColor()\0setFlagLabels(bool)\0"
    "getFlagLabels()\0newFontSize\0"
    "setFontSize(float)\0getFontSize()\0"
    "action\0selectedObjectChange(StelModule::StelModuleSelectAction)\0"
    "section\0setStelStyle(QString)\0"
    "skyCultureDir\0updateSkyCulture(QString)\0"
    "updateI18n()\0artDisplayed\0artFadeDuration\0"
    "artIntensity\0boundariesColor\0"
    "boundariesDisplayed\0fontSize\0"
    "isolateSelected\0linesColor\0linesDisplayed\0"
    "namesColor\0namesDisplayed\0"
};

void ConstellationMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConstellationMgr *_t = static_cast<ConstellationMgr *>(_o);
        switch (_id) {
        case 0: _t->artDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->artFadeDurationChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->artIntensityChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->boundariesColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 4: _t->boundariesDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->fontSizeChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 6: _t->isolateSelectedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->linesColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 8: _t->linesDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 9: _t->namesColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 10: _t->namesDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 11: _t->setFlagArt((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 12: { bool _r = _t->getFlagArt();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->setArtFadeDuration((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 14: { float _r = _t->getArtFadeDuration();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 15: _t->setArtIntensity((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 16: { double _r = _t->getArtIntensity();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 17: _t->setBoundariesColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 18: { Vec3f _r = _t->getBoundariesColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 19: _t->setFlagBoundaries((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 20: { bool _r = _t->getFlagBoundaries();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: _t->setFlagIsolateSelected((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 22: { bool _r = _t->getFlagIsolateSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: _t->setLinesColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 24: { Vec3f _r = _t->getLinesColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 25: _t->setFlagLines((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 26: { bool _r = _t->getFlagLines();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->setLabelsColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 28: { Vec3f _r = _t->getLabelsColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 29: _t->setFlagLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: { bool _r = _t->getFlagLabels();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: _t->setFontSize((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 32: { float _r = _t->getFontSize();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 33: _t->selectedObjectChange((*reinterpret_cast< StelModule::StelModuleSelectAction(*)>(_a[1]))); break;
        case 34: _t->setStelStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->updateSkyCulture((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->updateI18n(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ConstellationMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConstellationMgr::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_ConstellationMgr,
      qt_meta_data_ConstellationMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConstellationMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConstellationMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConstellationMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConstellationMgr))
        return static_cast<void*>(const_cast< ConstellationMgr*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int ConstellationMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = getFlagArt(); break;
        case 1: *reinterpret_cast< bool*>(_v) = getArtFadeDuration(); break;
        case 2: *reinterpret_cast< bool*>(_v) = getArtIntensity(); break;
        case 3: *reinterpret_cast< bool*>(_v) = getBoundariesColor(); break;
        case 4: *reinterpret_cast< bool*>(_v) = getFlagBoundaries(); break;
        case 5: *reinterpret_cast< bool*>(_v) = getFontSize(); break;
        case 6: *reinterpret_cast< bool*>(_v) = getFlagIsolateSelected(); break;
        case 7: *reinterpret_cast< bool*>(_v) = getLinesColor(); break;
        case 8: *reinterpret_cast< bool*>(_v) = getFlagLines(); break;
        case 9: *reinterpret_cast< bool*>(_v) = getLabelsColor(); break;
        case 10: *reinterpret_cast< bool*>(_v) = getFlagLabels(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFlagArt(*reinterpret_cast< bool*>(_v)); break;
        case 1: setArtFadeDuration(*reinterpret_cast< bool*>(_v)); break;
        case 2: setArtIntensity(*reinterpret_cast< bool*>(_v)); break;
        case 3: setBoundariesColor(*reinterpret_cast< bool*>(_v)); break;
        case 4: setFlagBoundaries(*reinterpret_cast< bool*>(_v)); break;
        case 5: setFontSize(*reinterpret_cast< bool*>(_v)); break;
        case 6: setFlagIsolateSelected(*reinterpret_cast< bool*>(_v)); break;
        case 7: setLinesColor(*reinterpret_cast< bool*>(_v)); break;
        case 8: setFlagLines(*reinterpret_cast< bool*>(_v)); break;
        case 9: setLabelsColor(*reinterpret_cast< bool*>(_v)); break;
        case 10: setFlagLabels(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ConstellationMgr::artDisplayedChanged(const bool _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ConstellationMgr *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConstellationMgr::artFadeDurationChanged(const float _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ConstellationMgr *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConstellationMgr::artIntensityChanged(const double _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ConstellationMgr *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ConstellationMgr::boundariesColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ConstellationMgr *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ConstellationMgr::boundariesDisplayedChanged(const bool _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ConstellationMgr *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ConstellationMgr::fontSizeChanged(const float _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ConstellationMgr *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ConstellationMgr::isolateSelectedChanged(const bool _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ConstellationMgr *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ConstellationMgr::linesColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ConstellationMgr *>(this), &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ConstellationMgr::linesDisplayedChanged(const bool _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ConstellationMgr *>(this), &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ConstellationMgr::namesColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ConstellationMgr *>(this), &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ConstellationMgr::namesDisplayedChanged(const bool _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ConstellationMgr *>(this), &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
