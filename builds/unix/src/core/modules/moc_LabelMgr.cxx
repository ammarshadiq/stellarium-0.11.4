/****************************************************************************
** Meta object code from reading C++ file 'LabelMgr.hpp'
**
** Created: Sat Apr 20 14:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/core/modules/LabelMgr.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LabelMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LabelMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      82,   14,   10,    9, 0x0a,
     215,  153,   10,    9, 0x2a,
     326,  278,   10,    9, 0x2a,
     425,  382,   10,    9, 0x2a,
     506,  473,   10,    9, 0x2a,
     570,  546,   10,    9, 0x2a,
     620,  604,   10,    9, 0x2a,
     685,  649,   10,    9, 0x0a,
     759,  733,   10,    9, 0x2a,
     816,  799,   10,    9, 0x2a,
     859,  850,   10,    9, 0x2a,
     896,  893,  888,    9, 0x0a,
     922,  914,    9,    9, 0x0a,
     956,  945,    9,    9, 0x0a,
     982,  893,  888,    9, 0x0a,
     999,    9,   10,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LabelMgr[] = {
    "LabelMgr\0\0int\0"
    "text,objectName,visible,fontSize,fontColor,side,labelDistance,style\0"
    "labelObject(QString,QString,bool,float,QString,QString,double,QString)\0"
    "text,objectName,visible,fontSize,fontColor,side,labelDistance\0"
    "labelObject(QString,QString,bool,float,QString,QString,double)\0"
    "text,objectName,visible,fontSize,fontColor,side\0"
    "labelObject(QString,QString,bool,float,QString,QString)\0"
    "text,objectName,visible,fontSize,fontColor\0"
    "labelObject(QString,QString,bool,float,QString)\0"
    "text,objectName,visible,fontSize\0"
    "labelObject(QString,QString,bool,float)\0"
    "text,objectName,visible\0"
    "labelObject(QString,QString,bool)\0"
    "text,objectName\0labelObject(QString,QString)\0"
    "text,x,y,visible,fontSize,fontColor\0"
    "labelScreen(QString,int,int,bool,float,QString)\0"
    "text,x,y,visible,fontSize\0"
    "labelScreen(QString,int,int,bool,float)\0"
    "text,x,y,visible\0labelScreen(QString,int,int,bool)\0"
    "text,x,y\0labelScreen(QString,int,int)\0"
    "bool\0id\0getLabelShow(int)\0id,show\0"
    "setLabelShow(int,bool)\0id,newText\0"
    "setLabelText(int,QString)\0deleteLabel(int)\0"
    "deleteAllLabels()\0"
};

void LabelMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LabelMgr *_t = static_cast<LabelMgr *>(_o);
        switch (_id) {
        case 0: { int _r = _t->labelObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->labelObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->labelObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->labelObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->labelObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->labelObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->labelObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->labelScreen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->labelScreen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->labelScreen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->labelScreen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->getLabelShow((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->setLabelShow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->setLabelText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: { bool _r = _t->deleteLabel((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->deleteAllLabels();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LabelMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LabelMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_LabelMgr,
      qt_meta_data_LabelMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LabelMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LabelMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LabelMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LabelMgr))
        return static_cast<void*>(const_cast< LabelMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int LabelMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
