#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#define BLOCKSIZE 32			//块大小
#define BLOCKNUMBER 199     //块个数
#define INODEFREESTACKNUM 32    //i节点空闲栈
#define DATABLOCKFREESTACKNUM 10	//数据空闲栈
#define DISKADDRESSNUM 10        //每个i节点最多指向10块，addr[0]~addr[9]
#define DIRECTORYITEMLENGTH 20      //the length of filename or username
#define DIRECTORYITEMSIZE 16		//大小
#define NAMESIZE 8   //名字长度
#define DIRECTORYITEMNUM 10 // SFD大小
#define DIRECTORYNUM 1024
#define INODENUM 32  //
#define STARTBLOCKNUM 4////
#define TRUE 1
#define FALSE 0
//#define null ((void *)0)
#define CMDSIZE 20

//i节点定义
struct TTime {
    char tdate[64];
    char ttime[64];
};
struct INode {//i节点
    int id;//节点号
    int fileCount;//引用计数,表示有几个目录引用这个文件
    int size;
    //文件的大小,如果这是一个文件 这里表示文件所占的物理块个数，
    //如果是一个目录，表示该目录下已经有的文件个数,用于判断是不是超过10个了
    int fileMode;//文件类型,区分该i节点是文件(2)还是目录(1)还是用户, 1 means file, 0 means dir
    int userId;   //使用者ID
    int userRight[DIRECTORYITEMNUM];//使用者权限
    TTime time;
    int diskAddress[DISKADDRESSNUM];
    //如果这个i结点是一个文件，Addr数组表示文件各个物理块位置编号
    //如果是一个目录，表示目录的各个文件or文件夹的SFD的下标,所以一个目录下最大有NADDR个文件/目录
    //如果是NADDR，那么Inode[0]存放的是用户，addr存放的是NADDR个用户的主文件夹的i结点的下标???????
};

//MFD定义
struct MainFileDirectoryItem {
    char name[DIRECTORYITEMLENGTH];	//文件名字
    int iNode;			//i结点的编号,-1表示没有
    char psw[20];
};
struct MainFileDirectory {
    int iNode;
    MainFileDirectoryItem item[DIRECTORYITEMNUM];
    int sz;
};

//SFD定义
struct SymbolFileDirectoryItem {
    char name[DIRECTORYITEMLENGTH];	//文件名字
    int iNode;			//i结点的编号,-1表示没有
};
struct SymbolFileDirectory {
    int iNode;
    SymbolFileDirectoryItem item[DIRECTORYITEMNUM];
    int sz;
    int right;
};
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();




private slots:
    void on_pushButton_2_clicked();

    void on_commandLinkButton_clicked();

    void on_pushButton_clicked();
    void receiveLoginInfo(QString,QString);
    void receiveSetInodeInfo(bool);
    void receiveOrder(QString);
    void receiveVimContent(QString,QString);

signals:
    void showGUI();
    void showCLI();
    void sendLoginStatus(bool);
    void sendInodeToIni(INode*,MainFileDirectory,SymbolFileDirectory*);
    void sendRoute(QString);
    void sendCatReturn(QString);
    void sendLsReturn(QString);
    void sendLlReturn(QString);
    void sendPwdReturn(QString);
    void sendVimAction(QString);
    void sendRefreshAction();
private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
