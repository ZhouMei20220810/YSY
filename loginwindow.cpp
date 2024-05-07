#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "forgetpwwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    setWindowFlags(Qt::FramelessWindowHint);
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_clicked()
{
    this->close();
}


void LoginWindow::on_btnForgetPW_clicked()
{
    //忘记密码
    qDebug()<<"忘记密码被点击";
    ForgetPWWindow forgetPW;
    forgetPW.show();
    this->hide();
}


void LoginWindow::on_btnLogin_clicked()
{
    //登录
    qDebug()<<"登录被点击";
}


void LoginWindow::on_btnRegister_clicked()
{
    //注册
    qDebug()<<"注册被点击";
}

