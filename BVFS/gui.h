#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QAction>
#include <QDebug>

namespace Ui {
class GUI;
}

class GUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit GUI(QWidget *parent = 0);
    ~GUI();
    void contextMenuEvent(QContextMenuEvent *);

//定义用于接收信号操作槽函数，也有当前界面控件的基本槽函数如click动作
private slots:
    void receiveShow();
    void receiveRoute(QString);
    void receiveFileName(QString);
    void receiveEnterFile(int);
    void receiveFrontName(QString);
    void on_back_clicked();
    void newDirectory();
    void newFile();
    void on_file2_clicked();
    void on_forward_clicked();
    void on_home_customContextMenuRequested(const QPoint &pos);
    void on_home_pressed();
    void on_new_2_clicked();
    void on_edit_clicked();
    void on_delete_2_clicked();
    void on_home_clicked();

//用于发送操作信号，通过main函数中的connect函数传递参数触发接收信号的槽函数
signals:
    void sendEnterFileName(QString);
    void sendReturnAction();
    void sendFileEditAction(QString);
    void sendNewDirectoryAction(QString);
    void sendNewFileAction(QString);
    void sendRenameAction(QString,QString);
    void sendDeleteAction(QString);
    void sendHomeAction();

private:
    Ui::GUI *ui;    //用于获取当前界面的各个控件
    QAction* NewDirectory;  //鼠标右键新建文件夹
    QAction* NewFile;   //鼠标右键新建文件

protected:
    bool eventFilter(QObject *target, QEvent *e);  //用于捕捉键盘按键事件
};

#endif // GUI_H
