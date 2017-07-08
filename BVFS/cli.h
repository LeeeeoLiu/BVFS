#ifndef CLI_H
#define CLI_H

#include <QMainWindow>

namespace Ui {
class CLI;
}

class CLI : public QMainWindow
{
    Q_OBJECT

public:
    explicit CLI(QWidget *parent = 0);
    ~CLI();
public: void keyPressEvent(QKeyEvent  *event);
private slots:
    void receiveShow();
    void on_lineEdit_returnPressed();
private:
    Ui::CLI *ui;
};

#endif // CLI_H