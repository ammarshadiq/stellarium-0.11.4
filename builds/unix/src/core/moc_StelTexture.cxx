/****************************************************************************
** Meta object code from reading C++ file 'StelTexture.hpp'
**
** Created: Sat Apr 20 14:30:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelTexture.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelTexture.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageLoader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      39,   30,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   12,   12,   12, 0x0a,
      62,   12,   12,   12, 0x08,
      79,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ImageLoader[] = {
    "ImageLoader\0\0finished(QImage)\0errorMsg\0"
    "error(QString)\0start()\0onNetworkReply()\0"
    "directLoad()\0"
};

void ImageLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageLoader *_t = static_cast<ImageLoader *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->start(); break;
        case 3: _t->onNetworkReply(); break;
        case 4: _t->directLoad(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImageLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ImageLoader,
      qt_meta_data_ImageLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageLoader))
        return static_cast<void*>(const_cast< ImageLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int ImageLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ImageLoader::finished(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ImageLoader::error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_StelTexture[] = {

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
      19,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   48,   12,   12, 0x08,
      89,   76,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StelTexture[] = {
    "StelTexture\0\0error\0loadingProcessFinished(bool)\0"
    "image\0onImageLoaded(QImage)\0errorMessage\0"
    "onLoadingError(QString)\0"
};

void StelTexture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StelTexture *_t = static_cast<StelTexture *>(_o);
        switch (_id) {
        case 0: _t->loadingProcessFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onImageLoaded((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: _t->onLoadingError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StelTexture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StelTexture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelTexture,
      qt_meta_data_StelTexture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StelTexture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StelTexture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StelTexture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StelTexture))
        return static_cast<void*>(const_cast< StelTexture*>(this));
    if (!strcmp(_clname, "QGLFunctions"))
        return static_cast< QGLFunctions*>(const_cast< StelTexture*>(this));
    return QObject::qt_metacast(_clname);
}

int StelTexture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void StelTexture::loadingProcessFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
