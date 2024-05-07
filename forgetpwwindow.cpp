#include "forgetpwwindow.h"
#include "ui_forgetpwwindow.h"

ForgetPWWindow::ForgetPWWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ForgetPWWindow)
{
    ui->setupUi(this);
}

ForgetPWWindow::~ForgetPWWindow()
{
    delete ui;
}

void ForgetPWWindow::on_btnClose_clicked()
{
    this->close();
}

