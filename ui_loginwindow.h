/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QFrame *frame_2;
    QLabel *labelTitle;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelPhoneImage;
    QLineEdit *lineEditPhone;
    QPushButton *btnArrow;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelPWImage;
    QLineEdit *lineEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxRemberPW;
    QCheckBox *checkBoxAutoLogin;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnForgetPW;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnLogin;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnRegister;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(620, 392);
        LoginWindow->setMinimumSize(QSize(620, 392));
        LoginWindow->setMaximumSize(QSize(620, 392));
        LoginWindow->setStyleSheet(QString::fromUtf8("QMainWindow{border-top-left-radius: 6px;border-top-right-radius: 6px;}"));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:#FFFFFFFF;"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 32));
        frame->setMaximumSize(QSize(16777215, 32));
        QPalette palette;
        QBrush brush(QColor(0, 128, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        frame->setPalette(palette);
        frame->setStyleSheet(QString::fromUtf8("background-color:#FF0080FF;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(12, 0, 12, 0);
        label = new QLabel(frame);
        label->setObjectName("label");
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label->setPalette(palette1);
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(507, 9, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(24, 32));
        pushButton->setMaximumSize(QSize(24, 32));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"     background-color: #FFD31111\n"
" }\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/login/resource/login/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(24, 32));
        pushButton->setFlat(true);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addWidget(frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(260, 360));
        label_2->setMaximumSize(QSize(260, 360));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/login/resource/login/logo.png")));

        horizontalLayout->addWidget(label_2);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("color:#FF4A4A4A;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        labelTitle = new QLabel(frame_2);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setGeometry(QRect(31, 10, 281, 60));
        labelTitle->setMinimumSize(QSize(0, 60));
        labelTitle->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        labelTitle->setFont(font1);
        labelTitle->setAlignment(Qt::AlignCenter);
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(31, 80, 281, 98));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(0, 33));
        frame_3->setMaximumSize(QSize(16777215, 33));
        frame_3->setStyleSheet(QString::fromUtf8("color:#FF4A4A4A;\n"
"background: #FFE7E8EE;\n"
"border-radius: 3px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelPhoneImage = new QLabel(frame_3);
        labelPhoneImage->setObjectName("labelPhoneImage");
        labelPhoneImage->setPixmap(QPixmap(QString::fromUtf8(":/login/resource/login/ico_phone.png")));

        horizontalLayout_3->addWidget(labelPhoneImage);

        lineEditPhone = new QLineEdit(frame_3);
        lineEditPhone->setObjectName("lineEditPhone");
        lineEditPhone->setStyleSheet(QString::fromUtf8("border:none"));

        horizontalLayout_3->addWidget(lineEditPhone);

        btnArrow = new QPushButton(frame_3);
        btnArrow->setObjectName("btnArrow");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/login/resource/login/ico_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnArrow->setIcon(icon1);
        btnArrow->setFlat(true);

        horizontalLayout_3->addWidget(btnArrow);


        verticalLayout_2->addWidget(frame_3);

        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(0, 33));
        frame_5->setMaximumSize(QSize(16777215, 33));
        frame_5->setStyleSheet(QString::fromUtf8("color:#FF4A4A4A;\n"
"background: #FFE7E8EE;\n"
"border-radius: 3px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        labelPWImage = new QLabel(frame_5);
        labelPWImage->setObjectName("labelPWImage");
        labelPWImage->setPixmap(QPixmap(QString::fromUtf8(":/login/resource/login/ico_lock.png")));

        horizontalLayout_6->addWidget(labelPWImage);

        lineEdit = new QLineEdit(frame_5);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 0));
        lineEdit->setMaximumSize(QSize(16777215, 16777215));
        lineEdit->setStyleSheet(QString::fromUtf8("border:none"));
        lineEdit->setMaxLength(20);
        lineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(lineEdit);


        verticalLayout_2->addWidget(frame_5);

        widget = new QWidget(frame_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(31, 191, 283, 41));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        checkBoxRemberPW = new QCheckBox(widget);
        checkBoxRemberPW->setObjectName("checkBoxRemberPW");
        QFont font2;
        font2.setPointSize(10);
        checkBoxRemberPW->setFont(font2);
        checkBoxRemberPW->setStyleSheet(QString::fromUtf8(" QCheckBox {\n"
"     spacing: 5px;\n"
" }\n"
"\n"
" QCheckBox::indicator {\n"
"     width: 16px;\n"
"     height: 16px;\n"
" }\n"
"\n"
" QCheckBox::indicator:unchecked {\n"
"     image: url(:/login/resource/login/option_normal.png);\n"
" }\n"
"\n"
" QCheckBox::indicator:unchecked:hover {\n"
"     image: url(:/login/resource/login/option_normal.png);\n"
" }\n"
"\n"
" QCheckBox::indicator:unchecked:pressed {\n"
"     image: url(:/login/resource/login/option_normal.png);\n"
" }\n"
"\n"
" QCheckBox::indicator:checked {\n"
"     image: url(:/login/resource/login/option_select.png);\n"
" }\n"
"\n"
" QCheckBox::indicator:checked:hover {\n"
"     image: url(:/login/resource/login/option_select.png);\n"
" }\n"
"\n"
" QCheckBox::indicator:checked:pressed {\n"
"     image: url(:/login/resource/login/option_select.png);\n"
" }\n"
""));

        horizontalLayout_4->addWidget(checkBoxRemberPW);

        checkBoxAutoLogin = new QCheckBox(widget);
        checkBoxAutoLogin->setObjectName("checkBoxAutoLogin");
        checkBoxAutoLogin->setFont(font2);
        checkBoxAutoLogin->setStyleSheet(QString::fromUtf8(" QCheckBox {\n"
"     spacing: 5px;\n"
" }\n"
"\n"
" QCheckBox::indicator {\n"
"     width: 16px;\n"
"     height: 16px;\n"
" }\n"
"\n"
" QCheckBox::indicator:unchecked {\n"
"     image: url(:/login/resource/login/option_normal.png);\n"
" }\n"
"\n"
" QCheckBox::indicator:unchecked:hover {\n"
"     image: url(:/login/resource/login/option_normal.png);\n"
" }\n"
"\n"
" QCheckBox::indicator:unchecked:pressed {\n"
"     image: url(:/login/resource/login/option_normal.png);\n"
" }\n"
"\n"
" QCheckBox::indicator:checked {\n"
"     image: url(:/login/resource/login/option_select.png);\n"
" }\n"
"\n"
" QCheckBox::indicator:checked:hover {\n"
"     image: url(:/login/resource/login/option_select.png);\n"
" }\n"
"\n"
" QCheckBox::indicator:checked:pressed {\n"
"     image: url(:/login/resource/login/option_select.png);\n"
" }\n"
""));

        horizontalLayout_4->addWidget(checkBoxAutoLogin);

        horizontalSpacer_5 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        btnForgetPW = new QPushButton(widget);
        btnForgetPW->setObjectName("btnForgetPW");
        btnForgetPW->setLayoutDirection(Qt::LeftToRight);
        btnForgetPW->setStyleSheet(QString::fromUtf8("QPushButton{text-align: right;color:#FFF96D6F;border:none;}"));
        btnForgetPW->setAutoRepeat(false);
        btnForgetPW->setAutoExclusive(false);
        btnForgetPW->setFlat(true);

        horizontalLayout_4->addWidget(btnForgetPW);

        widget1 = new QWidget(frame_2);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(31, 231, 290, 70));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        btnLogin = new QPushButton(widget1);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setMinimumSize(QSize(100, 28));
        btnLogin->setFont(font2);
        btnLogin->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 2px solid #555764;\n"
"     border-radius:2px;\n"
"	 background-color: #FF555764;\n"
"	 color:#FFFFFFFF;\n"
" }\n"
"QPushButton:hover\n"
"{\n"
"	border:2px solid  #FF27282B;\n"
"	background-color: #FF27282B;\n"
"}\n"
" QPushButton:pressed {\n"
"     border: 2px solid #555764;\n"
"     border-radius: 2px;\n"
"	 background-color: #FF555764;\n"
"	 color:#FFFFFFFF;\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
""));

        horizontalLayout_5->addWidget(btnLogin);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        btnRegister = new QPushButton(widget1);
        btnRegister->setObjectName("btnRegister");
        btnRegister->setMinimumSize(QSize(100, 28));
        btnRegister->setFont(font2);
        btnRegister->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 2px solid #555764;\n"
"     border-radius:2px;\n"
"	 background-color: #FF555764;\n"
"	 color:#FFFFFFFF;\n"
" }\n"
"QPushButton:hover\n"
"{\n"
"	border:2px solid  #FF27282B;\n"
"	background-color: #FF27282B;\n"
"}\n"
" QPushButton:pressed {\n"
"     border: 2px solid #555764;\n"
"     border-radius: 2px;\n"
"	 background-color: #FF555764;\n"
"	 color:#FFFFFFFF;\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
""));

        horizontalLayout_5->addWidget(btnRegister);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        horizontalLayout->addWidget(frame_2);


        verticalLayout->addLayout(horizontalLayout);

        LoginWindow->setCentralWidget(centralwidget);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "\346\230\223\350\210\234\344\272\221\346\211\213\346\234\272", nullptr));
        pushButton->setText(QString());
        label_2->setText(QString());
        labelTitle->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        labelPhoneImage->setText(QString());
        lineEditPhone->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\350\276\223\345\205\245\346\202\250\347\232\204\346\211\213\346\234\272\345\217\267\347\240\201", nullptr));
        btnArrow->setText(QString());
        labelPWImage->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201", nullptr));
        checkBoxRemberPW->setText(QCoreApplication::translate("LoginWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        checkBoxAutoLogin->setText(QCoreApplication::translate("LoginWindow", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
        btnForgetPW->setText(QCoreApplication::translate("LoginWindow", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        btnLogin->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        btnRegister->setText(QCoreApplication::translate("LoginWindow", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
