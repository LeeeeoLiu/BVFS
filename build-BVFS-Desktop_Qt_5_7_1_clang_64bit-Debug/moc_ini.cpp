/****************************************************************************
** Meta object code from reading C++ file 'ini.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BVFS/ini.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ini.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_iNI_t {
    QByteArrayData data[9];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_iNI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_iNI_t qt_meta_stringdata_iNI = {
    {
QT_MOC_LITERAL(0, 0, 3), // "iNI"
QT_MOC_LITERAL(1, 4, 20), // "sendGetInodeDataInfo"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 18), // "on_refresh_clicked"
QT_MOC_LITERAL(4, 45, 16), // "receiveInodeData"
QT_MOC_LITERAL(5, 62, 6), // "INode*"
QT_MOC_LITERAL(6, 69, 17), // "MainFileDirectory"
QT_MOC_LITERAL(7, 87, 20), // "SymbolFileDirectory*"
QT_MOC_LITERAL(8, 108, 20) // "receiveRefreshAction"

    },
    "iNI\0sendGetInodeDataInfo\0\0on_refresh_clicked\0"
    "receiveInodeData\0INode*\0MainFileDirectory\0"
    "SymbolFileDirectory*\0receiveRefreshAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_iNI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   37,    2, 0x08 /* Private */,
       4,    3,   38,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 6, 0x80000000 | 7,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void iNI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        iNI *_t = static_cast<iNI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendGetInodeDataInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_refresh_clicked(); break;
        case 2: _t->receiveInodeData((*reinterpret_cast< INode*(*)>(_a[1])),(*reinterpret_cast< MainFileDirectory(*)>(_a[2])),(*reinterpret_cast< SymbolFileDirectory*(*)>(_a[3]))); break;
        case 3: _t->receiveRefreshAction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (iNI::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&iNI::sendGetInodeDataInfo)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject iNI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_iNI.data,
      qt_meta_data_iNI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *iNI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *iNI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_iNI.stringdata0))
        return static_cast<void*>(const_cast< iNI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int iNI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void iNI::sendGetInodeDataInfo(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
