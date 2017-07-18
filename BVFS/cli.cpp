#include "cli.h"
#include "ui_cli.h"
#include <iostream>
#include <QKeyEvent>
#include "main.h"
#include <QTime>
#include <QDebug>
using namespace std;
int tabCount=1;
QString userCurrent=NULL;
QString pswCurrent=NULL;
QString route;
QString cmdTime;
QString front;
QString his;
QString file;
QString userRegist=NULL;
QString pswRegist=NULL;
bool registMark=false;
bool userStatus=false;
int tabIndex=0;

CLI::CLI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CLI)
{

    configEditor = new CodeEditor();
    configEditor->setMode(EDIT);
    MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, Qt::lightGray);
    this->setPalette(palette);
    ui->setupUi(this);
    configEditor->moveCursor(QTextCursor::End);
    emit sendRefreshAction();
    configEditor->appendPlainText("Welcome to BVFS comand line interface!\n(C) Copyrights by BV533 2017.\nlogin:");
    configEditor->moveCursor(QTextCursor::End);
    ui->gridLayout->addWidget(configEditor);
}

CLI::~CLI()
{
    delete ui;
}


void CLI::receiveShow()
{
    this->show();
}

void CLI::on_lineEdit_returnPressed()
{
    if(ui->lineEdit->text()=="exit")
    {
        exit(0);
    }else if(registMark)
    {
        if(userRegist.count()==0)
        {
            QString order=ui->lineEdit->text();
            order=order.section('$',1,1);
            userRegist=order;
            configEditor->setMode(EDIT);
            MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
            configEditor->appendPlainText(userRegist+"'s password:");
            cmdTime=QTime::currentTime().toString("hh:mm:ss");
            this->setWindowTitle(userCurrent+"@LeeeeoLius-MacBook-Pro:"+route);
            front="# "+userCurrent+"@ LeeeeoLius-MacBook-Pro in "+route+"["+cmdTime+"]$";
            ui->lineEdit->setText(front);
        }else
        {
            QString order=ui->lineEdit->text();
            order=order.section('$',1,1);
            pswRegist=order;
            cmdTime=QTime::currentTime().toString("hh:mm:ss");
            this->setWindowTitle(userCurrent+"@LeeeeoLius-MacBook-Pro:"+route);
            front="# "+userCurrent+"@ LeeeeoLius-MacBook-Pro in "+route+"["+cmdTime+"]$";
            ui->lineEdit->setText(front);
            emit sendUserAddContent(userRegist,pswRegist);
            registMark=false;
            userRegist.clear();
            pswRegist.clear();
        }
    }else if(userCurrent.count()==0)
    {

        configEditor->setMode(EDIT);
        MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
        userCurrent=ui->lineEdit->text();
        configEditor->appendPlainText(userCurrent+"'s Password:");
        ui->lineEdit->clear();
    }
    else if(userCurrent.count()!=0&&pswCurrent.count()==0)
    {
        pswCurrent=ui->lineEdit->text();
        emit sendLoginInfo(userCurrent,pswCurrent);
    }else if(ui->lineEdit->text()==":wq")
    {
        configEditor->setMode(EDIT);
        MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
        emit sendVimContent(file,configEditor->toPlainText());
        configEditor->clear();
        configEditor->appendPlainText(his);
        cmdTime=QTime::currentTime().toString("hh:mm:ss");
        this->setWindowTitle(userCurrent+"@LeeeeoLius-MacBook-Pro:"+route);
        front="# "+userCurrent+"@ LeeeeoLius-MacBook-Pro in "+route+"["+cmdTime+"]$";
        ui->lineEdit->setText(front);
    }else if(userStatus){
        configEditor->setMode(EDIT);
        MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
        QString order=ui->lineEdit->text();
        order=order.section('$',1,1);
        configEditor->appendPlainText(ui->lineEdit->text());
        qDebug()<<order;
        emit sendOrder(order);
        cmdTime=QTime::currentTime().toString("hh:mm:ss");
        this->setWindowTitle(userCurrent+"@LeeeeoLius-MacBook-Pro:"+route);
        front="# "+userCurrent+"@ LeeeeoLius-MacBook-Pro in "+route+"["+cmdTime+"]$";
        ui->lineEdit->setText(front);
        cout<<"enter pressed"<<endl;
        if(order=="logout")
            ui->lineEdit->clear();
    }
    emit sendRefreshAction();
}

void CLI::keyPressEvent(QKeyEvent  *event)
{
     if(event->key()==Qt::Key_T)
    {
         tabCount++;
         QTextEdit *edit=new QTextEdit();
         ui->tabWidget->addTab(edit,"Tab"+QString::number(tabCount, 10));
         ui->tabWidget->setCurrentIndex(tabCount-1);
         tabIndex=tabCount-1;
    }else if(event->key()==Qt::Key_W){
         if(tabIndex==0)
         {
             this->close();
         }else{
             ui->tabWidget->removeTab(tabIndex);
             int tmpCount=tabIndex;
             while(tmpCount<tabCount-1)
             {
                 ui->tabWidget->setTabText(tmpCount,"Tab"+QString::number(tabCount+1, 10));
             }
             tabIndex--;
             tabCount--;
             ui->tabWidget->setCurrentIndex(tabIndex);
         }
     }else if(event->key()==Qt::Key_1)
     {
         ui->tabWidget->setCurrentIndex(0);
     }else if(event->key()==Qt::Key_2)
     {
         ui->tabWidget->setCurrentIndex(1);
     }else if(event->key()==Qt::Key_3)
     {
         ui->tabWidget->setCurrentIndex(2);
     }else if(event->key()==Qt::Key_4)
     {
         ui->tabWidget->setCurrentIndex(3);
     }else if(event->key()==Qt::Key_5)
     {
         ui->tabWidget->setCurrentIndex(4);
     }else if(event->key()==Qt::Key_Escape)
     {
         ui->lineEdit->clear();
         ui->lineEdit->setFocus();
     }
}

void CLI::receiveLoginStatus(bool status)
{
    userStatus=status;
    if(status)
    {
        configEditor->setMode(EDIT);
        MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
        configEditor->appendPlainText(userCurrent+" login sucessfully!");
    }else
    {
        configEditor->setMode(EDIT);
        MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
        configEditor->appendPlainText("\nWrong Password!Please try again!\n");
        userCurrent.clear();
        pswCurrent.clear();
        configEditor->appendPlainText("login:");
        ui->lineEdit->clear();
    }
}

void CLI::receiveRoute(QString r)
{
    route=r;
    cmdTime=QTime::currentTime().toString("hh:mm:ss");
    this->setWindowTitle(userCurrent+"@LeeeeoLius-MacBook-Pro:"+route);
    front="# "+userCurrent+"@ LeeeeoLius-MacBook-Pro in "+route+" ["+cmdTime+"]$";
    ui->lineEdit->setText(front);
    emit sendRefreshAction();
}

void CLI::receiveCatReturn(QString r)
{
    configEditor->setMode(EDIT);
    MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
    configEditor->appendPlainText(r);
    emit sendRefreshAction();
}

void CLI::receiveLsReturn(QString r)
{
    configEditor->setMode(EDIT);
    MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
    configEditor->appendPlainText(r);
    emit sendRefreshAction();
}

void CLI::receiveLlReturn(QString r)
{
    configEditor->setMode(EDIT);
    MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
    configEditor->appendPlainText(r);
    emit sendRefreshAction();
}

void CLI::receivePwdReturn(QString r)
{
    configEditor->setMode(EDIT);
    MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
    configEditor->appendPlainText(r);
    emit sendRefreshAction();
}

void CLI::receiveVimAction(QString f)
{
    configEditor->setMode(EDIT);
    MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
    file=f;
    his=configEditor->toPlainText();
    configEditor->clear();
    configEditor->setReadOnly(false);
    emit sendRefreshAction();
}

void CLI::receiveHelpReturn(QString r)
{
    configEditor->setMode(EDIT);
    MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
    configEditor->appendPlainText(r);
}

void CLI::receiveClsAction()
{
    configEditor->setMode(EDIT);
    MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
    configEditor->clear();
}

void CLI::receiveLogoutAction()
{
    configEditor->setMode(EDIT);
    MyHighLighter *highlighter = new MyHighLighter(configEditor->document());
    configEditor->clear();
    configEditor->moveCursor(QTextCursor::End);
    configEditor->appendPlainText("Welcome to BVFS comand line interface!\n(C) Copyrights by BV533 2017.\nlogin:");
    userCurrent.clear();
    pswCurrent.clear();
    ui->lineEdit->clear();
}

void CLI::receiveUserAddAction()
{
    if(userCurrent!="root")
    {
        configEditor->appendPlainText("Permission denied");
    }
    else
    {
        configEditor->appendPlainText("uesrname:");
        registMark=true;
    }
}

void CLI::receiveUserAddStatus(bool r)
{
    if(r)
    {
        configEditor->appendPlainText("Register Successfully!");
    }else
    {
        configEditor->appendPlainText("Failed!");
    }
}
