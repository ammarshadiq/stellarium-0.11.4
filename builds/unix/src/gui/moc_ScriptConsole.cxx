/****************************************************************************
** Meta object code from reading C++ file 'ScriptConsole.hpp'
**
** Created: Sat Apr 20 14:26:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/ScriptConsole.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptConsole.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScriptConsole[] = {

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
      15,   14,   14,   14, 0x0a,
      29,   14,   14,   14, 0x0a,
      41,   14,   14,   14, 0x0a,
      54,   14,   14,   14, 0x0a,
      67,   14,   14,   14, 0x0a,
      88,   14,   14,   14, 0x0a,
     107,   14,   14,   14, 0x0a,
     123,  121,   14,   14, 0x0a,
     146,   14,   14,   14, 0x0a,
     166,  162,   14,   14, 0x0a,
     180,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ScriptConsole[] = {
    "ScriptConsole\0\0retranslate()\0runScript()\0"
    "loadScript()\0saveScript()\0"
    "clearButtonPressed()\0preprocessScript()\0"
    "scriptEnded()\0s\0appendLogLine(QString)\0"
    "includeBrowse()\0idx\0quickRun(int)\0"
    "rowColumnChanged()\0"
};

void ScriptConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScriptConsole *_t = static_cast<ScriptConsole *>(_o);
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->runScript(); break;
        case 2: _t->loadScript(); break;
        case 3: _t->saveScript(); break;
        case 4: _t->clearButtonPressed(); break;
        case 5: _t->preprocessScript(); break;
        case 6: _t->scriptEnded(); break;
        case 7: _t->appendLogLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->includeBrowse(); break;
        case 9: _t->quickRun((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->rowColumnChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScriptConsole::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScriptConsole::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_ScriptConsole,
      qt_meta_data_ScriptConsole, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScriptConsole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScriptConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScriptConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptConsole))
        return static_cast<void*>(const_cast< ScriptConsole*>(this));
    return StelDialog::qt_metacast(_clname);
}

int ScriptConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
