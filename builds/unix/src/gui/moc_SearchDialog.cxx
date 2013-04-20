/****************************************************************************
** Meta object code from reading C++ file 'SearchDialog.hpp'
**
** Created: Sat Apr 20 14:26:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/SearchDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CompletionLabel[] = {

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
      17,   16,   16,   16, 0x0a,
      30,   16,   16,   16, 0x0a,
      47,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CompletionLabel[] = {
    "CompletionLabel\0\0selectNext()\0"
    "selectPrevious()\0selectFirst()\0"
};

void CompletionLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CompletionLabel *_t = static_cast<CompletionLabel *>(_o);
        switch (_id) {
        case 0: _t->selectNext(); break;
        case 1: _t->selectPrevious(); break;
        case 2: _t->selectFirst(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CompletionLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CompletionLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_CompletionLabel,
      qt_meta_data_CompletionLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CompletionLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CompletionLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CompletionLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompletionLabel))
        return static_cast<void*>(const_cast< CompletionLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int CompletionLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_SearchDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      28,   13,   13,   13, 0x0a,
      45,   13,   13,   13, 0x0a,
      62,   13,   13,   13, 0x08,
      83,   13,   13,   13, 0x08,
     112,  107,   13,   13, 0x08,
     141,   13,   13,   13, 0x08,
     154,   13,   13,   13, 0x08,
     185,  178,   13,   13, 0x08,
     210,   13,   13,   13, 0x08,
     237,  231,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SearchDialog[] = {
    "SearchDialog\0\0retranslate()\0"
    "setVisible(bool)\0setSimpleStyle()\0"
    "greekLetterClicked()\0onSimbadStatusChanged()\0"
    "text\0onSearchTextChanged(QString)\0"
    "gotoObject()\0manualPositionChanged()\0"
    "enable\0enableSimbadSearch(bool)\0"
    "setHasSelectedFlag()\0index\0"
    "selectSimbadServer(int)\0"
};

void SearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchDialog *_t = static_cast<SearchDialog *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setSimpleStyle(); break;
        case 3: _t->greekLetterClicked(); break;
        case 4: _t->onSimbadStatusChanged(); break;
        case 5: _t->onSearchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->gotoObject(); break;
        case 7: _t->manualPositionChanged(); break;
        case 8: _t->enableSimbadSearch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setHasSelectedFlag(); break;
        case 10: _t->selectSimbadServer((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SearchDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SearchDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_SearchDialog,
      qt_meta_data_SearchDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchDialog))
        return static_cast<void*>(const_cast< SearchDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int SearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
