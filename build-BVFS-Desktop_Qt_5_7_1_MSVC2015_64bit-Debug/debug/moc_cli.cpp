/****************************************************************************
** Meta object code from reading C++ file 'cli.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BVFS/cli.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CLI_t {
    QByteArrayData data[14];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CLI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CLI_t qt_meta_stringdata_CLI = {
    {
QT_MOC_LITERAL(0, 0, 3), // "CLI"
QT_MOC_LITERAL(1, 4, 13), // "sendLoginInfo"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "sendOrder"
QT_MOC_LITERAL(4, 29, 14), // "sendVimContent"
QT_MOC_LITERAL(5, 44, 11), // "receiveShow"
QT_MOC_LITERAL(6, 56, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(7, 82, 18), // "receiveLoginStatus"
QT_MOC_LITERAL(8, 101, 12), // "receiveRoute"
QT_MOC_LITERAL(9, 114, 16), // "receiveCatReturn"
QT_MOC_LITERAL(10, 131, 15), // "receiveLsReturn"
QT_MOC_LITERAL(11, 147, 15), // "receiveLlReturn"
QT_MOC_LITERAL(12, 163, 16), // "receivePwdReturn"
QT_MOC_LITERAL(13, 180, 16) // "receiveVimAction"

    },
    "CLI\0sendLoginInfo\0\0sendOrder\0"
    "sendVimContent\0receiveShow\0"
    "on_lineEdit_returnPressed\0receiveLoginStatus\0"
    "receiveRoute\0receiveCatReturn\0"
    "receiveLsReturn\0receiveLlReturn\0"
    "receivePwdReturn\0receiveVimAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CLI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       3,    1,   79,    2, 0x06 /* Public */,
       4,    2,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    1,   89,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
       9,    1,   95,    2, 0x08 /* Private */,
      10,    1,   98,    2, 0x08 /* Private */,
      11,    1,  101,    2, 0x08 /* Private */,
      12,    1,  104,    2, 0x08 /* Private */,
      13,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void CLI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CLI *_t = static_cast<CLI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendLoginInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->sendOrder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendVimContent((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->receiveShow(); break;
        case 4: _t->on_lineEdit_returnPressed(); break;
        case 5: _t->receiveLoginStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->receiveRoute((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->receiveCatReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->receiveLsReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->receiveLlReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->receivePwdReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->receiveVimAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CLI::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CLI::sendLoginInfo)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CLI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CLI::sendOrder)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CLI::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CLI::sendVimContent)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject CLI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CLI.data,
      qt_meta_data_CLI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CLI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CLI.stringdata0))
        return static_cast<void*>(const_cast< CLI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CLI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CLI::sendLoginInfo(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CLI::sendOrder(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CLI::sendVimContent(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
