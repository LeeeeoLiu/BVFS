/********************************************************************************
** Form generated from reading UI file 'cli.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLI_H
#define UI_CLI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CLI
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CLI)
    {
        if (CLI->objectName().isEmpty())
            CLI->setObjectName(QStringLiteral("CLI"));
        CLI->resize(800, 377);
        centralwidget = new QWidget(CLI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 771, 261));
        textEdit->setReadOnly(true);
        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFrame(false);

        verticalLayout->addWidget(lineEdit);

        CLI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CLI);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        CLI->setMenuBar(menubar);
        statusbar = new QStatusBar(CLI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CLI->setStatusBar(statusbar);

        retranslateUi(CLI);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CLI);
    } // setupUi

    void retranslateUi(QMainWindow *CLI)
    {
        CLI->setWindowTitle(QApplication::translate("CLI", "MainWindow", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CLI", "Tab 1", Q_NULLPTR));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CLI: public Ui_CLI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLI_H
