/****************************************************************************
** Meta object code from reading C++ file 'cli.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BVFS/cli.h"
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
    QByteArrayData data[15];
    char stringdata0[215];
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
QT_MOC_LITERAL(5, 44, 17), // "sendRefreshAction"
QT_MOC_LITERAL(6, 62, 11), // "receiveShow"
QT_MOC_LITERAL(7, 74, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(8, 100, 18), // "receiveLoginStatus"
QT_MOC_LITERAL(9, 119, 12), // "receiveRoute"
QT_MOC_LITERAL(10, 132, 16), // "receiveCatReturn"
QT_MOC_LITERAL(11, 149, 15), // "receiveLsReturn"
QT_MOC_LITERAL(12, 165, 15), // "receiveLlReturn"
QT_MOC_LITERAL(13, 181, 16), // "receivePwdReturn"
QT_MOC_LITERAL(14, 198, 16) // "receiveVimAction"

    },
    "CLI\0sendLoginInfo\0\0sendOrder\0"
    "sendVimContent\0sendRefreshAction\0"
    "receiveShow\0on_lineEdit_returnPressed\0"
    "receiveLoginStatus\0receiveRoute\0"
    "receiveCatReturn\0receiveLsReturn\0"
    "receiveLlReturn\0receivePwdReturn\0"
    "receiveVimAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CLI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       3,    1,   84,    2, 0x06 /* Public */,
       4,    2,   87,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    1,   95,    2, 0x08 /* Private */,
       9,    1,   98,    2, 0x08 /* Private */,
      10,    1,  101,    2, 0x08 /* Private */,
      11,    1,  104,    2, 0x08 /* Private */,
      12,    1,  107,    2, 0x08 /* Private */,
      13,    1,  110,    2, 0x08 /* Private */,
      14,    1,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,

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
        case 3: _t->sendRefreshAction(); break;
        case 4: _t->receiveShow(); break;
        case 5: _t->on_lineEdit_returnPressed(); break;
        case 6: _t->receiveLoginStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->receiveRoute((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->receiveCatReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->receiveLsReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->receiveLlReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->receivePwdReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->receiveVimAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
        {
            typedef void (CLI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CLI::sendRefreshAction)) {
                *result = 3;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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

// SIGNAL 3
void CLI::sendRefreshAction()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
