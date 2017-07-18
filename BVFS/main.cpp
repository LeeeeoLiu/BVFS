#include "main.h"
#include "mainwindow.h"
#include "gui.h"
#include "cli.h"
#include "ini.h"
#include "editor.h"
#include <QApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    GUI g;
    CLI c;
    iNI i;
    Editor e;
    i.setWindowTitle("iNode Structure Table");
    i.show();   //显示iNI窗口
    w.show();   //显示主窗口

    //CLI与MainWindow界面之间的交互
    QObject::connect(&w,SIGNAL(showCLI()),&c,SLOT(receiveShow()));
    QObject::connect(&c,SIGNAL(sendLoginInfo(QString,QString)),&w,SLOT(receiveLoginInfo(QString,QString)));
    QObject::connect(&w,SIGNAL(sendLoginStatus(bool)),&c,SLOT(receiveLoginStatus(bool)));
    QObject::connect(&w,SIGNAL(sendInodeToIni(INode*,MainFileDirectory,SymbolFileDirectory*)),&i,SLOT(receiveInodeData(INode*,MainFileDirectory,SymbolFileDirectory*)));
    QObject::connect(&w,SIGNAL(sendRoute(QString)),&c,SLOT(receiveRoute(QString)));
    QObject::connect(&c,SIGNAL(sendOrder(QString)),&w,SLOT(receiveOrder(QString)));
    QObject::connect(&w,SIGNAL(sendCatReturn(QString)),&c,SLOT(receiveCatReturn(QString)));
    QObject::connect(&w,SIGNAL(sendLsReturn(QString)),&c,SLOT(receiveLsReturn(QString)));
    QObject::connect(&w,SIGNAL(sendLlReturn(QString)),&c,SLOT(receiveLlReturn(QString)));
    QObject::connect(&w,SIGNAL(sendPwdReturn(QString)),&c,SLOT(receivePwdReturn(QString)));
    QObject::connect(&w,SIGNAL(sendVimAction(QString)),&c,SLOT(receiveVimAction(QString)));
    QObject::connect(&c,SIGNAL(sendVimContent(QString,QString)),&w,SLOT(receiveVimContent(QString,QString)));
    QObject::connect(&w,SIGNAL(sendHelpReturn(QString)),&c,SLOT(receiveHelpReturn(QString)));
    QObject::connect(&w,SIGNAL(sendClsAction()),&c,SLOT(receiveClsAction()));
    QObject::connect(&w,SIGNAL(sendLogoutAction()),&c,SLOT(receiveLogoutAction()));
    QObject::connect(&w,SIGNAL(sendUserAddAction()),&c,SLOT(receiveUserAddAction()));
    QObject::connect(&c,SIGNAL(sendUserAddContent(QString,QString)),&w,SLOT(receiveUserAddContent(QString,QString)));
    QObject::connect(&w,SIGNAL(sendUserAddStatus(bool)),&c,SLOT(receiveUserAddStatus(bool)));

    //iNI与其他界面之间的交互
    QObject::connect(&w,SIGNAL(sendRefreshAction()),&i,SLOT(receiveRefreshAction()));
    QObject::connect(&c,SIGNAL(sendRefreshAction()),&i,SLOT(receiveRefreshAction()));
    QObject::connect(&i,SIGNAL(sendGetInodeDataInfo(bool)),&w,SLOT(receiveSetInodeInfo(bool)));

    //GUI与MainWindow界面之间的交互
    QObject::connect(&w,SIGNAL(showGUI()),&g,SLOT(receiveShow()));
    QObject::connect(&w,SIGNAL(sendGuiRoute(QString)),&g,SLOT(receiveRoute(QString)));
    QObject::connect(&w,SIGNAL(sendGuiFileName(QString)),&g,SLOT(receiveFileName(QString)));
    QObject::connect(&g,SIGNAL(sendEnterFileName(QString)),&w,SLOT(receiveGuiEnterFileName(QString)));
    QObject::connect(&g,SIGNAL(sendReturnAction()),&w,SLOT(receiveGuiReturnAction()));
    QObject::connect(&w,SIGNAL(sendGuiFrontName(QString)),&g,SLOT(receiveFrontName(QString)));
    QObject::connect(&g,SIGNAL(sendNewDirectoryAction(QString)),&w,SLOT(receiveGuiNewDirectory(QString)));
    QObject::connect(&g,SIGNAL(sendNewFileAction(QString)),&w,SLOT(receiveGuiNewFile(QString)));
    QObject::connect(&g,SIGNAL(sendRenameAction(QString,QString)),&w,SLOT(receiveGuiRenameAction(QString,QString)));
    QObject::connect(&g,SIGNAL(sendDeleteAction(QString)),&w,SLOT(receiveGuiDeleteAction(QString)));
    QObject::connect(&g,SIGNAL(sendHomeAction()),&w,SLOT(receiveGuiHomeAction()));

    //GUI与Editor界面之间的交互
    QObject::connect(&g,SIGNAL(sendFileEditAction(QString)),&e,SLOT(showEditorUI(QString)));
    QObject::connect(&e,SIGNAL(sendEditFileNameContent(QString,QString)),&w,SLOT(receiveGuiEditContent(QString,QString)));
    QObject::connect(&e,SIGNAL(sendEditDisplayContent(QString)),&w,SLOT(receiveGuiEditDisplay(QString)));
    QObject::connect(&w,SIGNAL(sendGuiEditDisplayContent(QString)),&e,SLOT(receiveDisplayContent(QString)));
    QObject::connect(&e,SIGNAL(showDirectories()),&w,SLOT(receiveGuiShowDirectories()));

    return a.exec();
}
