#include "ini.h"
#include "ui_ini.h"

bool flag=false;
iNI::iNI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::iNI)
{
    ui->setupUi(this);
    /*设置tablewidget等宽*/
    QHeaderView* headerView = ui->tableWidget->horizontalHeader();
    headerView->setSectionResizeMode(QHeaderView::Stretch);
    /*或者下面的代码*/
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    /*设置tablewidget等宽*/
    headerView = ui->tableWidget_2->horizontalHeader();
    headerView->setSectionResizeMode(QHeaderView::Stretch);
    /*或者下面的代码*/
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    /*设置tablewidget等宽*/
    headerView = ui->tableWidget_3->horizontalHeader();
    headerView->setSectionResizeMode(QHeaderView::Stretch);
    /*或者下面的代码*/
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

iNI::~iNI()
{
    delete ui;
}

void iNI::on_refresh_clicked()
{
    flag=true;
    emit sendGetInodeDataInfo(flag);


}
void iNI::receiveInodeData(INode* inodePoint,MainFileDirectory mfdPoint,SymbolFileDirectory* sfdPoint)
{


    for(int i = ui->tableWidget->rowCount();i > 0;i--)
      {
         ui->tableWidget->removeRow(0);
      }
    for (int i = 0; i<INODENUM; i++)
    {
       int row=ui->tableWidget->rowCount();
       ui->tableWidget->setRowCount(row+1);
       ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(inodePoint[i].id)));
       ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(inodePoint[i].fileCount)));
       ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(inodePoint[i].fileMode)));
       ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(inodePoint[i].userId)));
        for (int j = 0; j < DISKADDRESSNUM; j++)
        {

            ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(inodePoint[i].diskAddress[0])+" "
                                     +QString::number(inodePoint[i].diskAddress[1])+" "
                                     +QString::number(inodePoint[i].diskAddress[2])+" "
                                     +QString::number(inodePoint[i].diskAddress[3])+" "
                                     +QString::number(inodePoint[i].diskAddress[5])+" "
                                     +QString::number(inodePoint[i].diskAddress[6])+" "
                                     +QString::number(inodePoint[i].diskAddress[7])+" "
                                     +QString::number(inodePoint[i].diskAddress[8])+" "
                                     +QString::number(inodePoint[i].diskAddress[9])));
        }
    }


    for(int i = ui->tableWidget_2->rowCount();i > 0;i--)
      {
         ui->tableWidget_2->removeRow(0);
      }
    for (int i = 0; i <mfdPoint.sz; i++)//mfd
    {
        if(mfdPoint.item[i].iNode!=-1)
        {
          int row=ui->tableWidget_2->rowCount();
          ui->tableWidget_2->setRowCount(row+1);
          ui->tableWidget_2->setItem(i,0,new QTableWidgetItem(mfdPoint.item[i].name));
          ui->tableWidget_2->setItem(i,1,new QTableWidgetItem(mfdPoint.item[i].psw));
          ui->tableWidget_2->setItem(i,2,new QTableWidgetItem(QString::number( mfdPoint.item[i].iNode)));
        }
        else
            break;
    }

    for(int i = ui->tableWidget_3->rowCount();i > 0;i--)
      {
         ui->tableWidget_3->removeRow(0);
      }
    for(int i=0;i<DIRECTORYNUM;i++) {
       if(sfdPoint[i].iNode!=-1)
       {


           for (int j = 0; j <DIRECTORYITEMNUM; j++)
           {
               if(sfdPoint[i].item[j].iNode!=-1)
               {
                 int row=ui->tableWidget_3->rowCount();
                 ui->tableWidget_3->setRowCount(row+1);
                 ui->tableWidget_3->setItem(j,0,new QTableWidgetItem(QString::number(sfdPoint[i].iNode)));
                 ui->tableWidget_3->setItem(j,1,new QTableWidgetItem(sfdPoint[i].item[j].name));
                 ui->tableWidget_3->setItem(j,2,new QTableWidgetItem(QString::number(sfdPoint[i].item[j].iNode)));
               }
               else
                   break;
           }
       }
       else
           break;


    }
}

void iNI::receiveRefreshAction(){
    flag=true;
    emit sendGetInodeDataInfo(flag);
}
