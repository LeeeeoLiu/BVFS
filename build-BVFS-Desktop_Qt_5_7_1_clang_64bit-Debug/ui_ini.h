/********************************************************************************
** Form generated from reading UI file 'ini.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INI_H
#define UI_INI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_iNI
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_2;
    QTableWidget *tableWidget_3;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *iNI)
    {
        if (iNI->objectName().isEmpty())
            iNI->setObjectName(QStringLiteral("iNI"));
        iNI->resize(774, 364);
        centralwidget = new QWidget(iNI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget_2 = new QTableWidget(centralwidget);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setRowCount(1);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setHighlightSections(true);

        gridLayout->addWidget(tableWidget_2, 4, 0, 1, 1);

        tableWidget_3 = new QTableWidget(centralwidget);
        if (tableWidget_3->columnCount() < 3)
            tableWidget_3->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_3->horizontalHeader()->setMinimumSectionSize(19);
        tableWidget_3->horizontalHeader()->setStretchLastSection(true);
        tableWidget_3->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget_3, 4, 1, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setSortingEnabled(false);
        tableWidget->setRowCount(1);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 2);

        tableWidget_4 = new QTableWidget(centralwidget);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));

        gridLayout->addWidget(tableWidget_4, 5, 0, 1, 2);

        iNI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(iNI);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 774, 22));
        iNI->setMenuBar(menubar);
        statusbar = new QStatusBar(iNI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        iNI->setStatusBar(statusbar);

        retranslateUi(iNI);

        QMetaObject::connectSlotsByName(iNI);
    } // setupUi

    void retranslateUi(QMainWindow *iNI)
    {
        iNI->setWindowTitle(QApplication::translate("iNI", "MainWindow", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("iNI", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("iNI", "\345\257\206\347\240\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("iNI", "iNode", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("iNI", "SFDInode", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("iNI", "\346\226\207\344\273\266\357\274\210\347\233\256\345\275\225\357\274\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("iNI", "iNode", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("iNI", "iNodeId", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("iNI", "fileCount", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("iNI", "fileMode", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("iNI", "userId", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("iNI", "diskAddress", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class iNI: public Ui_iNI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INI_H
