#include "cli.h"
#include "ui_cli.h"
#include <iostream>
#include <QKeyEvent>
#include "main.h"
#include <QTime>
using namespace std;
//QString cliHistory;
int tabCount=1;
QString userCurrent=NULL;
QString pswCurrent=NULL;
QString route;
QString cmdTime;
QString front;
QString his;
QString file;
bool userStatus=false;
int tabIndex=0;

CLI::CLI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CLI)
{
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, Qt::lightGray);
    this->setPalette(palette);
//    cliHistory="# Leeeeo @ LeeeeoLius-MacBook-Pro in ~/Code/BVFS on git:master x [14:30:01]\n$";
    ui->setupUi(this);
//    ui->textEdit->append(cliHistory);
//    ui->plainTextEdit->appendHtml(cliHistory+"");
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->append("Welcome to BVFS comand line interface!\n(C) Copyrights by BV533 2017.\nlogin:");
    emit sendRefreshAction();
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
    if(userCurrent.count()==0)
    {

        userCurrent=ui->lineEdit->text();
        ui->textEdit->append(userCurrent+"'s Password:");
        ui->lineEdit->clear();
    }
    else if(userCurrent.count()!=0&&pswCurrent.count()==0)
    {
        pswCurrent=ui->lineEdit->text();
        emit sendLoginInfo(userCurrent,pswCurrent);
//        send(userCurrent.toStdString(),pswCurrent.toStdString());
//        cmdTime=QTime::currentTime().toString("hh:mm:ss");
//        this->setWindowTitle(userCurrent+"@LeeeeoLius-MacBook-Pro:"+route);
//        front="# "+userCurrent+"@ LeeeeoLius-MacBook-Pro in "+route+"["+cmdTime+"]$";
//        ui->lineEdit->setText(front);
    }else if(ui->lineEdit->text()==":wq")
    {
        emit sendVimContent(file,ui->textEdit->toPlainText());
        ui->textEdit->clear();
        ui->textEdit->append(his);
        cmdTime=QTime::currentTime().toString("hh:mm:ss");
//        ui->textEdit->append(ui->lineEdit->text());
        this->setWindowTitle(userCurrent+"@LeeeeoLius-MacBook-Pro:"+route);
        front="# "+userCurrent+"@ LeeeeoLius-MacBook-Pro in "+route+"["+cmdTime+"]$";
        ui->lineEdit->setText(front);
    }else if(userStatus){
        QString order=ui->lineEdit->text();
        order=order.section('$',1,1);
        ui->textEdit->append(ui->lineEdit->text());
        emit sendOrder(order);

        cmdTime=QTime::currentTime().toString("hh:mm:ss");
//        ui->textEdit->append(ui->lineEdit->text());
        this->setWindowTitle(userCurrent+"@LeeeeoLius-MacBook-Pro:"+route);
        front="# "+userCurrent+"@ LeeeeoLius-MacBook-Pro in "+route+"["+cmdTime+"]$";
        ui->lineEdit->setText(front);
        cout<<"enter pressed"<<endl;
    }
    emit sendRefreshAction();
}

void CLI::keyPressEvent(QKeyEvent  *event)
{
     if(event->key()==Qt::Key_T)
    {
         cout<<"sdafasdfasfd"<<endl;
         tabCount++;
         QTextEdit *edit=new QTextEdit();
//         QString tabname="Tab"+tabCount;
         ui->tabWidget->addTab(edit,"Tab"+QString::number(tabCount, 10));
         ui->tabWidget->setCurrentIndex(tabCount-1);
         tabIndex=tabCount-1;
         //CLI temp;
         //temp.show();
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
            // ui->tabWidget->setTabText();
             //ui->(Tab+"2")->setObjectName("djfkj");
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
        ui->textEdit->append(userCurrent+" login sucessfully!");
//        ui->textEdit->append("\n");
//        cmdTime=QTime::currentTime().toString("hh:mm:ss");
//        ui->textEdit->append(ui->lineEdit->text());
//        this->setWindowTitle(userCurrent+"@LeeeeoLius-MacBook-Pro:"+route);
//        front="# "+userCurrent+"@ LeeeeoLius-MacBook-Pro in "+route+"["+cmdTime+"]$";
//        ui->lineEdit->setText(front);
    }else
    {
        ui->textEdit->append("\nWrong Password!Please try again!\n");
        userCurrent.clear();
        pswCurrent.clear();
        ui->textEdit->append("login:");
        ui->lineEdit->clear();
    }
//    emit sendRefreshAction();
}

void CLI::receiveRoute(QString r)
{
    route=r;
    cmdTime=QTime::currentTime().toString("hh:mm:ss");
//        ui->textEdit->append(ui->lineEdit->text());
    this->setWindowTitle(userCurrent+"@LeeeeoLius-MacBook-Pro:"+route);
    front="# "+userCurrent+"@ LeeeeoLius-MacBook-Pro in "+route+" ["+cmdTime+"]$";
    ui->lineEdit->setText(front);
    emit sendRefreshAction();
}

void CLI::receiveCatReturn(QString r)
{
    ui->textEdit->append(r);
    emit sendRefreshAction();
}

void CLI::receiveLsReturn(QString r)
{
    ui->textEdit->append(r);
    emit sendRefreshAction();
}

void CLI::receiveLlReturn(QString r)
{
    ui->textEdit->append(r);
    emit sendRefreshAction();
}

void CLI::receivePwdReturn(QString r)
{
    ui->textEdit->append(r);
    emit sendRefreshAction();
}

void CLI::receiveVimAction(QString f)
{
    file=f;
    his=ui->textEdit->toPlainText();
    ui->textEdit->clear();
//    ui->lineEdit->clear();
    ui->textEdit->setReadOnly(false);
    emit sendRefreshAction();
//    ui->lineEdit->clear();
}
