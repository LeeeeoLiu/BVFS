#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gui.h"
#include "run.h"
#include <iostream>
#include <QMessageBox>
using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init();
    ui->lineEdit->setEchoMode(QLineEdit::Password);
    ui->lineEdit_2->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString name=ui->lineEdit_2->text();
    QString psw=ui->lineEdit->text();
    if(login(name.toStdString(),psw.toStdString()))
    {
        this->hide();
        emit showGUI();
        string pwd="";
        vector<string>::iterator it;
        for(it = PWD.begin();it!=PWD.end();it++) {
            pwd+="/";
            pwd+=*it;
        }
        emit sendGuiRoute(QString::fromStdString(pwd));
        emit sendGuiFileName(QString::fromStdString(ls()));
    }else{
        QMessageBox::information(this, QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("用户名密码错误"));
        ui->lineEdit_2->clear();
        ui->lineEdit->clear();
    }
}

void MainWindow::on_commandLinkButton_clicked()
{
    this->hide();
    emit showCLI();
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

void MainWindow::receiveLoginInfo(QString name, QString psw)
{
    if(login(name.toStdString(),psw.toStdString()))
    {
        emit sendLoginStatus(true);
        string order;
        string pwd_tmp = "/root/";
        cout<<loginUser.username<<"@";
        string pwd="";
        vector<string>::iterator it;
        for(it = PWD.begin();it!=PWD.end();it++) {
            pwd+="/";
            pwd+=*it;
        }
        emit sendRoute(QString::fromStdString(pwd));
    }else{
        emit sendLoginStatus(false);
    }
}
void MainWindow::receiveSetInodeInfo(bool flag)
{
    if(flag==true)
    {
       INode  inodeToini[INODENUM];
       INode* inodePoint=inodeToini;

       for (int i = 0; i<INODENUM; i++)
       {

          inodeToini[i].id=inode[i].id;
          inodeToini[i].fileCount=inode[i].fileCount;
          inodeToini[i].size= inode[i].size ;
          inodeToini[i].fileMode=inode[i].fileMode;
          inodeToini[i].userId=inode[i].userId;
           for(int j=0;j<DIRECTORYITEMNUM;j++) {
               inodeToini[i].userRight[j]=inode[i].userRight[j];
           }
           for (int j = 0; j < DISKADDRESSNUM; j++)
           {
               inodeToini[i].diskAddress[j] = inode[i].diskAddress[j];
           }
       }


       MainFileDirectory mfdPoint;
       mfdPoint.sz=MFD.sz;
       for (int i = 0; i < MFD.size(); i++)//mfd
       {
           mfdPoint.item[i].iNode=MFD.item[i].iNode;

           strcpy(mfdPoint.item[i].name,MFD.item[i].name);

           strcpy( mfdPoint.item[i].psw,MFD.item[i].psw);
       }

       SymbolFileDirectory sfd[DIRECTORYNUM];
       SymbolFileDirectory* sfdPoint=sfd;
       for(int i=0;i<DIRECTORYNUM;i++) {

           sfd[i].iNode=sfdTable[i].iNode;
           for (int j = 0; j < SFD.size(); j++)
           {
               strcpy(sfd[i].item[j].name,sfdTable[i].item[j].name);
               sfd[i].item[j].iNode=sfdTable[i].item[j].iNode;
           }

       }

       emit sendInodeToIni(inodePoint,mfdPoint,sfdPoint);
    }
}
void MainWindow::receiveOrder(QString o)
{
    bool loginS=true;
    string order;
    order=o.toStdString();
    if(order.find("cat") == 0) {
        string file = "";
        int i=3;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                file+=order[i];
            }
            if(file.size() > 0) {
                emit sendCatReturn(QString::fromStdString(cat(file)));
            }
        }
    } else if(order.find("cd") == 0) {
        string dir = "";
        int i=2;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                dir+=order[i];
            }
            if(dir.size() > 0) {
                cd(dir);
            }
        }
    } else if(order == "exit") {
        exit(0);
    } else if(order == "cls") {
        emit sendClsAction();
    }else if(order == "format"){
        sudoFormat();
    } else if(order == "help"){
        emit sendHelpReturn(QString::fromStdString(help()));
    } else if(order == "ll") {
        emit sendLsReturn(QString::fromStdString(ll()));
    } else if(order == "login") {
        if(loginUser.username != "/") {
            cout<<"error: you has logined!"<<endl;
        } else {
        }
    } else if(order == "logout") {
        strcpy(loginUser.username,"/");
        loginS=false;
        emit sendLogoutAction();
    } else if(order == "ls") {
        emit sendLsReturn(QString::fromStdString(ls()));
    } else if(order.find("mkdir") == 0) {
        string dir = "";
        int i=5;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                dir+=order[i];
            }
            if(dir.size() > 0) {
                mkdir(dir);
            }
        }
    } else if(order == "pwd") {
        emit sendPwdReturn(QString::fromStdString(pwd()));
    } else if(order == "useradd") {
        emit sendUserAddAction();
    } else if(order.find("renamef") == 0) {
        string dir1 = "";
        string dir2 = "";
        int i=7;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                dir1+=order[i];
            }
            while(order[i] == ' ' && i<order.size()) {
                i++;
            }
            if(i < order.size()) {
                for(;i<order.size();i++) {
                    if(order[i] == ' ')
                        break;
                    dir2+=order[i];
                }
                if(dir1.size() > 0&&dir2.size()>0) {
                    renamef(dir1,dir2);
                }
            }
        }
    } else if(order.find("rename") == 0) {
        string dir1 = "";
        string dir2 = "";
        int i=6;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                dir1+=order[i];
            }
            while(order[i] == ' ' && i<order.size()) {
                i++;
            }
            if(i < order.size()) {
                for(;i<order.size();i++) {
                    if(order[i] == ' ')
                        break;
                    dir2+=order[i];
                }
                if(dir1.size() > 0&&dir2.size()>0) {
                    rename(dir1,dir2);
                }
            }
        }
    } else if(order.find("rmf") == 0) {
        string dir = "";
        int i=3;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                dir+=order[i];
            }
            if(dir.size() > 0) {
                rmf(dir);
            }
        }
    } else if(order.find("touch") == 0) {
        string file = "";
        int i=5;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                file+=order[i];
            }
            if(file.size() > 0) {
                touch(file);
            }
        }
    } else if(order.find("vim") == 0) {
        string file = "";
        int i=3;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                file+=order[i];
            }
            if(file.size() > 0) {
                emit sendVimAction(QString::fromStdString(file));
            }
        }
    }

    string pwd_tmp = "/root/";
    cout<<loginUser.username<<"@";
    vector<string>::iterator it;
    string pwd="";
    for(it = PWD.begin();it!=PWD.end();it++) {
        pwd+="/";
        pwd+=*it;
    }
    if(loginS==true)
    {
        emit sendRoute(QString::fromStdString(pwd));
        emit sendRefreshAction();
        cout<<"logout"<<endl;
    }
}

void MainWindow::receiveVimContent(QString file,QString content)
{
    string f=file.toStdString();
    string c=content.toStdString();
    vim(f,c);
    emit sendRefreshAction();
}

void MainWindow::receiveUserAddContent(QString n, QString p)
{
    bool status=userRegister(n.toStdString(), p.toStdString());
    emit sendUserAddStatus(status);
}

void MainWindow::receiveGuiEnterFileName(QString n)
{
    cd(n.toStdString());
    string pwd="";
    vector<string>::iterator it;
    for(it = PWD.begin();it!=PWD.end();it++) {
        pwd+="/";
        pwd+=*it;
    }
    emit sendGuiRoute(QString::fromStdString(pwd));
    emit sendGuiFileName(QString::fromStdString(ls()));
}

void MainWindow::receiveGuiReturnAction()
{
    QString r="..";
    emit sendGuiFrontName(QString::fromStdString(*(PWD.end()-1)));
    cd(r.toStdString());
    string pwd="";
    vector<string>::iterator it;
    for(it = PWD.begin();it!=PWD.end();it++) {
        pwd+="/";
        pwd+=*it;
    }


    emit sendGuiRoute(QString::fromStdString(pwd));
    emit sendGuiFileName(QString::fromStdString(ls()));
}

void MainWindow::receiveGuiEditContent(QString file, QString content)
{
    string f=file.toStdString();
    string c=content.toStdString();
    vim(f,c);
    string pwd="";
    vector<string>::iterator it;
    for(it = PWD.begin();it!=PWD.end();it++) {
        pwd+="/";
        pwd+=*it;
    }
    emit sendGuiRoute(QString::fromStdString(pwd));
    emit sendGuiFileName(QString::fromStdString(ls()));
}

void MainWindow::receiveGuiEditDisplay(QString n)
{
    emit sendGuiEditDisplayContent(QString::fromStdString(cat(n.toStdString())));
}

void MainWindow::receiveGuiShowDirectories()
{
    string pwd="";
    vector<string>::iterator it;
    for(it = PWD.begin();it!=PWD.end();it++) {
        pwd+="/";
        pwd+=*it;
    }
    emit sendGuiRoute(QString::fromStdString(pwd));
    emit sendGuiFileName(QString::fromStdString(ls()));
}

void MainWindow::receiveGuiNewDirectory(QString r)
{
    mkdir(r.toStdString());
    string pwd="";
    vector<string>::iterator it;
    for(it = PWD.begin();it!=PWD.end();it++) {
        pwd+="/";
        pwd+=*it;
    }
    emit sendGuiRoute(QString::fromStdString(pwd));
    emit sendGuiFileName(QString::fromStdString(ls()));
}

void MainWindow::receiveGuiNewFile(QString r)
{
    touch(r.toStdString());
    string pwd="";
    vector<string>::iterator it;
    for(it = PWD.begin();it!=PWD.end();it++) {
        pwd+="/";
        pwd+=*it;
    }
    emit sendGuiRoute(QString::fromStdString(pwd));
    emit sendGuiFileName(QString::fromStdString(ls()));
}

void MainWindow::receiveGuiRenameAction(QString bn, QString an)
{
    rename(bn.toStdString(),an.toStdString());
    string pwd="";
    vector<string>::iterator it;
    for(it = PWD.begin();it!=PWD.end();it++) {
        pwd+="/";
        pwd+=*it;
    }
    emit sendGuiRoute(QString::fromStdString(pwd));
    emit sendGuiFileName(QString::fromStdString(ls()));
}

void MainWindow::receiveGuiDeleteAction(QString r)
{
    rmf(r.toStdString());
    string pwd="";
    vector<string>::iterator it;
    for(it = PWD.begin();it!=PWD.end();it++) {
        pwd+="/";
        pwd+=*it;
    }
    emit sendGuiRoute(QString::fromStdString(pwd));
    emit sendGuiFileName(QString::fromStdString(ls()));
}

void MainWindow::receiveGuiHomeAction()
{
    while(PWD.size()>1) {
        PWD.pop_back();
    }
    string pwd="";
    vector<string>::iterator it;
    for(it = PWD.begin();it!=PWD.end();it++) {
        pwd+="/";
        pwd+=*it;
    }
    emit sendGuiRoute(QString::fromStdString(pwd));
    emit sendGuiFileName(QString::fromStdString(ls()));
}
