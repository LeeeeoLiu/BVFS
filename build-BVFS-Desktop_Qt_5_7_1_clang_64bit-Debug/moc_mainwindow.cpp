/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BVFS/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[43];
    char stringdata0[745];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 7), // "showGUI"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "showCLI"
QT_MOC_LITERAL(4, 28, 15), // "sendLoginStatus"
QT_MOC_LITERAL(5, 44, 14), // "sendInodeToIni"
QT_MOC_LITERAL(6, 59, 6), // "INode*"
QT_MOC_LITERAL(7, 66, 17), // "MainFileDirectory"
QT_MOC_LITERAL(8, 84, 20), // "SymbolFileDirectory*"
QT_MOC_LITERAL(9, 105, 9), // "sendRoute"
QT_MOC_LITERAL(10, 115, 13), // "sendCatReturn"
QT_MOC_LITERAL(11, 129, 12), // "sendLsReturn"
QT_MOC_LITERAL(12, 142, 12), // "sendLlReturn"
QT_MOC_LITERAL(13, 155, 13), // "sendPwdReturn"
QT_MOC_LITERAL(14, 169, 13), // "sendVimAction"
QT_MOC_LITERAL(15, 183, 17), // "sendRefreshAction"
QT_MOC_LITERAL(16, 201, 14), // "sendHelpReturn"
QT_MOC_LITERAL(17, 216, 13), // "sendClsAction"
QT_MOC_LITERAL(18, 230, 16), // "sendLogoutAction"
QT_MOC_LITERAL(19, 247, 17), // "sendUserAddAction"
QT_MOC_LITERAL(20, 265, 17), // "sendUserAddStatus"
QT_MOC_LITERAL(21, 283, 12), // "sendGuiRoute"
QT_MOC_LITERAL(22, 296, 15), // "sendGuiFileName"
QT_MOC_LITERAL(23, 312, 16), // "sendGuiFrontName"
QT_MOC_LITERAL(24, 329, 25), // "sendGuiEditDisplayContent"
QT_MOC_LITERAL(25, 355, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(26, 379, 28), // "on_commandLinkButton_clicked"
QT_MOC_LITERAL(27, 408, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(28, 430, 16), // "receiveLoginInfo"
QT_MOC_LITERAL(29, 447, 19), // "receiveSetInodeInfo"
QT_MOC_LITERAL(30, 467, 12), // "receiveOrder"
QT_MOC_LITERAL(31, 480, 17), // "receiveVimContent"
QT_MOC_LITERAL(32, 498, 21), // "receiveUserAddContent"
QT_MOC_LITERAL(33, 520, 23), // "receiveGuiEnterFileName"
QT_MOC_LITERAL(34, 544, 22), // "receiveGuiReturnAction"
QT_MOC_LITERAL(35, 567, 21), // "receiveGuiEditContent"
QT_MOC_LITERAL(36, 589, 21), // "receiveGuiEditDisplay"
QT_MOC_LITERAL(37, 611, 25), // "receiveGuiShowDirectories"
QT_MOC_LITERAL(38, 637, 22), // "receiveGuiNewDirectory"
QT_MOC_LITERAL(39, 660, 17), // "receiveGuiNewFile"
QT_MOC_LITERAL(40, 678, 22), // "receiveGuiRenameAction"
QT_MOC_LITERAL(41, 701, 22), // "receiveGuiDeleteAction"
QT_MOC_LITERAL(42, 724, 20) // "receiveGuiHomeAction"

    },
    "MainWindow\0showGUI\0\0showCLI\0sendLoginStatus\0"
    "sendInodeToIni\0INode*\0MainFileDirectory\0"
    "SymbolFileDirectory*\0sendRoute\0"
    "sendCatReturn\0sendLsReturn\0sendLlReturn\0"
    "sendPwdReturn\0sendVimAction\0"
    "sendRefreshAction\0sendHelpReturn\0"
    "sendClsAction\0sendLogoutAction\0"
    "sendUserAddAction\0sendUserAddStatus\0"
    "sendGuiRoute\0sendGuiFileName\0"
    "sendGuiFrontName\0sendGuiEditDisplayContent\0"
    "on_pushButton_2_clicked\0"
    "on_commandLinkButton_clicked\0"
    "on_pushButton_clicked\0receiveLoginInfo\0"
    "receiveSetInodeInfo\0receiveOrder\0"
    "receiveVimContent\0receiveUserAddContent\0"
    "receiveGuiEnterFileName\0receiveGuiReturnAction\0"
    "receiveGuiEditContent\0receiveGuiEditDisplay\0"
    "receiveGuiShowDirectories\0"
    "receiveGuiNewDirectory\0receiveGuiNewFile\0"
    "receiveGuiRenameAction\0receiveGuiDeleteAction\0"
    "receiveGuiHomeAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  204,    2, 0x06 /* Public */,
       3,    0,  205,    2, 0x06 /* Public */,
       4,    1,  206,    2, 0x06 /* Public */,
       5,    3,  209,    2, 0x06 /* Public */,
       9,    1,  216,    2, 0x06 /* Public */,
      10,    1,  219,    2, 0x06 /* Public */,
      11,    1,  222,    2, 0x06 /* Public */,
      12,    1,  225,    2, 0x06 /* Public */,
      13,    1,  228,    2, 0x06 /* Public */,
      14,    1,  231,    2, 0x06 /* Public */,
      15,    0,  234,    2, 0x06 /* Public */,
      16,    1,  235,    2, 0x06 /* Public */,
      17,    0,  238,    2, 0x06 /* Public */,
      18,    0,  239,    2, 0x06 /* Public */,
      19,    0,  240,    2, 0x06 /* Public */,
      20,    1,  241,    2, 0x06 /* Public */,
      21,    1,  244,    2, 0x06 /* Public */,
      22,    1,  247,    2, 0x06 /* Public */,
      23,    1,  250,    2, 0x06 /* Public */,
      24,    1,  253,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    0,  256,    2, 0x08 /* Private */,
      26,    0,  257,    2, 0x08 /* Private */,
      27,    0,  258,    2, 0x08 /* Private */,
      28,    2,  259,    2, 0x08 /* Private */,
      29,    1,  264,    2, 0x08 /* Private */,
      30,    1,  267,    2, 0x08 /* Private */,
      31,    2,  270,    2, 0x08 /* Private */,
      32,    2,  275,    2, 0x08 /* Private */,
      33,    1,  280,    2, 0x08 /* Private */,
      34,    0,  283,    2, 0x08 /* Private */,
      35,    2,  284,    2, 0x08 /* Private */,
      36,    1,  289,    2, 0x08 /* Private */,
      37,    0,  292,    2, 0x08 /* Private */,
      38,    1,  293,    2, 0x08 /* Private */,
      39,    1,  296,    2, 0x08 /* Private */,
      40,    2,  299,    2, 0x08 /* Private */,
      41,    1,  304,    2, 0x08 /* Private */,
      42,    0,  307,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7, 0x80000000 | 8,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showGUI(); break;
        case 1: _t->showCLI(); break;
        case 2: _t->sendLoginStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sendInodeToIni((*reinterpret_cast< INode*(*)>(_a[1])),(*reinterpret_cast< MainFileDirectory(*)>(_a[2])),(*reinterpret_cast< SymbolFileDirectory*(*)>(_a[3]))); break;
        case 4: _t->sendRoute((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->sendCatReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->sendLsReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->sendLlReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->sendPwdReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->sendVimAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->sendRefreshAction(); break;
        case 11: _t->sendHelpReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->sendClsAction(); break;
        case 13: _t->sendLogoutAction(); break;
        case 14: _t->sendUserAddAction(); break;
        case 15: _t->sendUserAddStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->sendGuiRoute((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->sendGuiFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->sendGuiFrontName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->sendGuiEditDisplayContent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->on_pushButton_2_clicked(); break;
        case 21: _t->on_commandLinkButton_clicked(); break;
        case 22: _t->on_pushButton_clicked(); break;
        case 23: _t->receiveLoginInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: _t->receiveSetInodeInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->receiveOrder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->receiveVimContent((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 27: _t->receiveUserAddContent((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 28: _t->receiveGuiEnterFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->receiveGuiReturnAction(); break;
        case 30: _t->receiveGuiEditContent((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 31: _t->receiveGuiEditDisplay((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->receiveGuiShowDirectories(); break;
        case 33: _t->receiveGuiNewDirectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->receiveGuiNewFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->receiveGuiRenameAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 36: _t->receiveGuiDeleteAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 37: _t->receiveGuiHomeAction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::showGUI)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::showCLI)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendLoginStatus)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(INode * , MainFileDirectory , SymbolFileDirectory * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendInodeToIni)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendRoute)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendCatReturn)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendLsReturn)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendLlReturn)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendPwdReturn)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendVimAction)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendRefreshAction)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendHelpReturn)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendClsAction)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendLogoutAction)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendUserAddAction)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendUserAddStatus)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendGuiRoute)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendGuiFileName)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendGuiFrontName)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendGuiEditDisplayContent)) {
                *result = 19;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 38;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::showGUI()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainWindow::showCLI()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainWindow::sendLoginStatus(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::sendInodeToIni(INode * _t1, MainFileDirectory _t2, SymbolFileDirectory * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::sendRoute(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::sendCatReturn(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::sendLsReturn(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::sendLlReturn(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::sendPwdReturn(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::sendVimAction(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::sendRefreshAction()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void MainWindow::sendHelpReturn(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::sendClsAction()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void MainWindow::sendLogoutAction()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}

// SIGNAL 14
void MainWindow::sendUserAddAction()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void MainWindow::sendUserAddStatus(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MainWindow::sendGuiRoute(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainWindow::sendGuiFileName(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MainWindow::sendGuiFrontName(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MainWindow::sendGuiEditDisplayContent(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_END_MOC_NAMESPACE
