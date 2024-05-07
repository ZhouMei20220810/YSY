#ifndef FORGETPWWINDOW_H
#define FORGETPWWINDOW_H

#include <QMainWindow>

namespace Ui {
class ForgetPWWindow;
}

class ForgetPWWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ForgetPWWindow(QWidget *parent = nullptr);
    ~ForgetPWWindow();

private slots:
    void on_btnClose_clicked();

private:
    Ui::ForgetPWWindow *ui;
};

#endif // FORGETPWWINDOW_H
