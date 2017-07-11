#ifndef INI_H
#define INI_H



#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class iNI;
}

class iNI : public QMainWindow
{
    Q_OBJECT

public:
    explicit iNI(QWidget *parent = 0);
    ~iNI();


private slots:
    void on_refresh_clicked();
    void receiveInodeData(INode*,MainFileDirectory,SymbolFileDirectory*);
    void receiveRefreshAction();
signals:
    void sendGetInodeDataInfo(bool);
private:
    Ui::iNI *ui;
};

#endif // INI_H
