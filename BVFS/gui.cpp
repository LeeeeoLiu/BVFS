#include "gui.h"
#include "ui_gui.h"
#include <QMenu>
#include <QCursor>
#include <QDebug>
#include <QMessageBox>
#include <QSignalMapper>
#include <QInputDialog>

QString fileName[10];
int fileCount;
QString frontName;

GUI::GUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GUI)
{
    ui->setupUi(this);  //初始化gui的控件
    //设置各个按钮的三态，即悬浮，点击，默认
    ui->back->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/back.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/back1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/back2.png);}");
    ui->forward->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/forward.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/forward1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/forward2.png);}");
    ui->icon->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/icon.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/icon1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/icon2.png);}");
    ui->list->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/list.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/list1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/list2.png);}");
    ui->new_2->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/new.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/new1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/new2.png);}");
    ui->edit->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/edit.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/edit1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/edit2.png);}");
    ui->delete_2->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/delete.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/delete1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/delete2.png);}");
    ui->home->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/home.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/home1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/home2.png);}");

    NewDirectory = new QAction(tr("新建文件夹"), this);
    NewFile = new QAction(tr("新建文件"), this);
    connect(NewDirectory, SIGNAL(triggered()), this, SLOT(newDirectory())); //连接鼠标右键新建文件夹与newDirectory函数
    connect(NewFile, SIGNAL(triggered()), this, SLOT(newFile()));
}

GUI::~GUI()
{
    delete ui;
}

void GUI::receiveShow()
{
    this->show();   //显示gui窗口
}

//点击事件
void GUI::on_back_clicked()
{
    emit sendReturnAction();    //发送后退信号
}

void GUI::contextMenuEvent(QContextMenuEvent *) //右键菜单项编辑
{
    QCursor cur=this->cursor();
    QMenu *menu=new QMenu(this);
    menu->addAction(NewDirectory);
    menu->addAction(NewFile);
    menu->exec(cur.pos()); //关联到光标
}

void GUI::receiveRoute(QString r)
{
    ui->lineEdit->setText(r);   //设置lineEdit控件的内容为r
}


void GUI::on_file2_clicked()
{
    QPushButton *pb2=new QPushButton("first");
    pb2->setMinimumHeight(51);
    pb2->setMinimumWidth(71);
    pb2->setMaximumHeight(51);
    pb2->setMaximumWidth(71);
    pb2->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/file2.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/file21.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/file22.png);}");
    ui->horizontalLayout_3->addWidget(pb2);
}

void GUI::receiveFileName(QString r)
{
    for(int i=0;i<10;i++){
        fileName[i].clear();
    }
    QStringList list2 = r.split(" ", QString::SkipEmptyParts);
    QLayoutItem *item;
    while((item = ui->horizontalLayout_3->takeAt(0)) != 0){     //删除layout中的子元素
        //删除widget
        if(item->widget()){
            delete item->widget();
            //item->widget()->deleteLater();
        }
        delete item;
    }
    if(list2.count()>1)
    {
        QSignalMapper *signalMapper = new QSignalMapper(this);
        fileCount=list2.count();
        for(int i=0;i<list2.count();i++)
        {
            fileName[i]=list2[i];
            QPushButton *pb2=new QPushButton(list2[i]);     //创建一个文件夹／文件按钮
            pb2->setMinimumHeight(51);
            pb2->setMinimumWidth(71);
            pb2->setMaximumHeight(51);
            pb2->setMaximumWidth(71);
            if((list2[i]).indexOf(".")!=-1)
            {
                pb2->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/file1.png);}"
                                                  "QPushButton:hover{border-image: url(:/new/prefix1/file11.png);}"
                                                  "QPushButton:pressed{border-image: url(:/new/prefix1/file12.png);}");
            }
            else{
                pb2->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/file2.png);}"
                                                  "QPushButton:hover{border-image: url(:/new/prefix1/file21.png);}"
                                                  "QPushButton:pressed{border-image: url(:/new/prefix1/file22.png);}");
            }
            signalMapper->setMapping(pb2, i);
            connect(pb2, SIGNAL(clicked()), signalMapper, SLOT(map()));
            ui->horizontalLayout_3->addWidget(pb2);
        }
        connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(receiveEnterFile(int)));
    }
}

void GUI::receiveEnterFile(int i)
{
    QLayoutItem *item;
    while((item = ui->horizontalLayout_3->takeAt(0)) != 0){
        //删除widget
        if(item->widget()){
            delete item->widget();
        }
        delete item;
    }
    if((fileName[i]).indexOf(".")!=-1)
    {
        emit sendFileEditAction(fileName[i]);
    }else{
        emit sendEnterFileName(fileName[i]);
    }
}

bool GUI::eventFilter(QObject *target, QEvent *e)
{
    QMessageBox::information(this, QString::fromLocal8Bit("警告"),target->objectName());
    return QMainWindow::eventFilter(target, e);
}

void GUI::receiveFrontName(QString r)
{
    frontName.clear();
    frontName=r;
}

void GUI::on_forward_clicked()
{
    emit sendEnterFileName(frontName);

}

void GUI::newDirectory()
{
    qDebug()<<"new directory.";
    bool isOK;
    QString text = QInputDialog::getText(NULL, "新建文件夹", "请输入新建文件夹名",QLineEdit::Normal,"",&isOK);
    if(isOK) {
        emit sendNewDirectoryAction(text);
    }
}

void GUI::newFile()
{
    qDebug()<<"new file.";
    bool isOK;
    QString text = QInputDialog::getText(NULL, "新建文件", "请输入新建文件名",QLineEdit::Normal,"",&isOK);
    if(isOK) {
        emit sendNewFileAction(text);
    }
}

void GUI::on_home_customContextMenuRequested(const QPoint &pos)
{
    qDebug()<<"lsllslslsl";
}

void GUI::on_home_pressed()
{
    qDebug()<<"pressed";
}

void GUI::on_new_2_clicked()
{
    bool isOK;
    QString text = QInputDialog::getText(NULL, "新建文件/文件夹", "请输入新建文件名／文件夹名",QLineEdit::Normal,"",&isOK);
    if(isOK) {
        if((text).indexOf(".")!=-1)
        {
            emit sendNewFileAction(text);
        }else{
            emit sendNewDirectoryAction(text);
        }
    }
}

void GUI::on_edit_clicked()
{
    bool isOK;
    QString text = QInputDialog::getText(NULL, "重命名文件/文件夹", "请输入要重命名的文件／文件夹名",QLineEdit::Normal,"",&isOK);
    if(isOK) {
        qDebug()<<text;
        qDebug()<<"--------";
        int i;
        for(i=0;i<fileCount;i++)
        {
            qDebug()<<fileName[i];
            if(fileName[i]==text)
            {
                qDebug()<<"exist !";
                break;
            }
        }
        if(i!=fileCount)
        {
            QString text2 = QInputDialog::getText(NULL, "重命名文件／文件夹", "请输入更改后的文件／文件夹名",QLineEdit::Normal,"",&isOK);
            if(isOK){
                emit sendRenameAction(text,text2);
            }
        }else
        {
            QMessageBox::information(this, QString::fromLocal8Bit("警告"),text+"该文件／文件夹在当前目录不存在！");
        }
    }
}

void GUI::on_delete_2_clicked()
{
    bool isOK;
    QString text = QInputDialog::getText(NULL, "删除文件/文件夹", "请输入要删除的文件／文件夹名",QLineEdit::Normal,"",&isOK);
    if(isOK) {
        qDebug()<<text;
        qDebug()<<"--------";
        int i;
        for(i=0;i<fileCount;i++)
        {
            qDebug()<<fileName[i];
            if(fileName[i]==text)
            {
                qDebug()<<"exist !";
                break;
            }
        }
        if(i!=fileCount)
        {
            QMessageBox::StandardButton rb=QMessageBox::question(NULL, "删除文件警告","确认要删除<b>" + text + "</b>么？",QMessageBox::Yes | QMessageBox::No,QMessageBox::Yes);
            if(rb == QMessageBox::Yes)
            {
                    qDebug()<<"确认删除";
                    emit sendDeleteAction(text);
            }
        }else
        {
            QMessageBox::information(this, QString::fromLocal8Bit("警告"),text+"该文件／文件夹在当前目录不存在！");
        }
    }
}

void GUI::on_home_clicked()
{
    emit sendHomeAction();  //发送返回主页信号
}
