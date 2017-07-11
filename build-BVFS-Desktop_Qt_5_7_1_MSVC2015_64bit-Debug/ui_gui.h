/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI
{
public:
    QWidget *centralwidget;
    QPushButton *back;
    QPushButton *delete_2;
    QPushButton *edit;
    QPushButton *new_2;
    QPushButton *forward;
    QPushButton *file2;
    QPushButton *file1;
    QPushButton *home;
    QPushButton *icon;
    QPushButton *list;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GUI)
    {
        if (GUI->objectName().isEmpty())
            GUI->setObjectName(QStringLiteral("GUI"));
        GUI->resize(584, 310);
        centralwidget = new QWidget(GUI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 50, 31, 23));
        back->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/back.png);\n"
"border-image: url(:/new/prefix1/back1.png);\n"
"border-image: url(:/new/prefix1/back2.png);"));
        delete_2 = new QPushButton(centralwidget);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        delete_2->setGeometry(QRect(380, 50, 31, 23));
        delete_2->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/delete.png);\n"
"border-image: url(:/new/prefix1/delete1.png);\n"
"border-image: url(:/new/prefix1/delete2.png);"));
        edit = new QPushButton(centralwidget);
        edit->setObjectName(QStringLiteral("edit"));
        edit->setGeometry(QRect(340, 50, 31, 23));
        edit->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/edit.png);\n"
"border-image: url(:/new/prefix1/edit1.png);\n"
"border-image: url(:/new/prefix1/edit2.png);"));
        new_2 = new QPushButton(centralwidget);
        new_2->setObjectName(QStringLiteral("new_2"));
        new_2->setGeometry(QRect(300, 50, 31, 23));
        new_2->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/new.png);\n"
"border-image: url(:/new/prefix1/new1.png);\n"
"border-image: url(:/new/prefix1/new2.png);"));
        forward = new QPushButton(centralwidget);
        forward->setObjectName(QStringLiteral("forward"));
        forward->setGeometry(QRect(60, 50, 31, 23));
        forward->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/forward.png);\n"
"border-image: url(:/new/prefix1/forward1.png);\n"
"border-image: url(:/new/prefix1/forward2.png);"));
        file2 = new QPushButton(centralwidget);
        file2->setObjectName(QStringLiteral("file2"));
        file2->setGeometry(QRect(200, 140, 71, 51));
        file2->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/file2.png);\n"
"border-image: url(:/new/prefix1/file21.png);\n"
"border-image: url(:/new/prefix1/file22.png);"));
        file1 = new QPushButton(centralwidget);
        file1->setObjectName(QStringLiteral("file1"));
        file1->setGeometry(QRect(70, 150, 31, 23));
        file1->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/file1.png);\n"
"border-image: url(:/new/prefix1/file11.png);\n"
"border-image: url(:/new/prefix1/file12.png);"));
        home = new QPushButton(centralwidget);
        home->setObjectName(QStringLiteral("home"));
        home->setGeometry(QRect(70, 190, 31, 23));
        home->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/home.png);\n"
"border-image: url(:/new/prefix1/home1.png);\n"
"border-image: url(:/new/prefix1/home2.png);"));
        icon = new QPushButton(centralwidget);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setGeometry(QRect(180, 50, 31, 23));
        icon->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/icon.png);\n"
"border-image: url(:/new/prefix1/icon1.png);\n"
"border-image: url(:/new/prefix1/icon2.png);"));
        list = new QPushButton(centralwidget);
        list->setObjectName(QStringLiteral("list"));
        list->setGeometry(QRect(220, 50, 31, 23));
        list->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/list.png);\n"
"border-image: url(:/new/prefix1/list1.png);\n"
"border-image: url(:/new/prefix1/list2.png);"));
        GUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GUI);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 584, 23));
        GUI->setMenuBar(menubar);
        statusbar = new QStatusBar(GUI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GUI->setStatusBar(statusbar);

        retranslateUi(GUI);

        QMetaObject::connectSlotsByName(GUI);
    } // setupUi

    void retranslateUi(QMainWindow *GUI)
    {
        GUI->setWindowTitle(QApplication::translate("GUI", "MainWindow", Q_NULLPTR));
        back->setText(QString());
        delete_2->setText(QString());
        edit->setText(QString());
        new_2->setText(QString());
        forward->setText(QString());
        file2->setText(QString());
        file1->setText(QString());
        home->setText(QString());
        icon->setText(QString());
        list->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GUI: public Ui_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
