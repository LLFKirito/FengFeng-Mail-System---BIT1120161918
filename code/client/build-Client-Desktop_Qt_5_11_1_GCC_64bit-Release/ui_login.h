/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLineEdit *edit_username;
    QLineEdit *edit_password;
    QLabel *label_username;
    QLabel *label_password;
    QPushButton *btn_login;
    QPushButton *btn_register;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(1024, 625);
        Login->setMaximumSize(QSize(1024, 625));
        QFont font;
        font.setFamily(QStringLiteral("Abyssinica SIL"));
        Login->setFont(font);
        Login->setAutoFillBackground(false);
        Login->setStyleSheet(QStringLiteral(""));
        edit_username = new QLineEdit(Login);
        edit_username->setObjectName(QStringLiteral("edit_username"));
        edit_username->setGeometry(QRect(440, 220, 281, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Nimbus Sans L"));
        font1.setPointSize(20);
        edit_username->setFont(font1);
        edit_username->setLayoutDirection(Qt::LeftToRight);
        edit_username->setAutoFillBackground(false);
        edit_username->setStyleSheet(QLatin1String("background-color: rgba(163,166,181,220);\n"
"border:0;"));
        edit_username->setAlignment(Qt::AlignCenter);
        edit_password = new QLineEdit(Login);
        edit_password->setObjectName(QStringLiteral("edit_password"));
        edit_password->setGeometry(QRect(440, 300, 281, 51));
        edit_password->setFont(font1);
        edit_password->setLayoutDirection(Qt::LeftToRight);
        edit_password->setAutoFillBackground(false);
        edit_password->setStyleSheet(QLatin1String("background-color: rgba(163,166,181,220);\n"
"border:0;"));
        edit_password->setEchoMode(QLineEdit::Password);
        edit_password->setAlignment(Qt::AlignCenter);
        label_username = new QLabel(Login);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(275, 220, 140, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Nimbus Sans L"));
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setWeight(50);
        label_username->setFont(font2);
        label_username->setLayoutDirection(Qt::LeftToRight);
        label_password = new QLabel(Login);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(275, 300, 140, 50));
        QFont font3;
        font3.setFamily(QStringLiteral("Nimbus Sans L"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_password->setFont(font3);
        label_password->setLayoutDirection(Qt::LeftToRight);
        btn_login = new QPushButton(Login);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        btn_login->setGeometry(QRect(330, 440, 131, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("Nimbus Sans L"));
        font4.setPointSize(15);
        btn_login->setFont(font4);
        btn_login->setFocusPolicy(Qt::NoFocus);
        btn_login->setLayoutDirection(Qt::LeftToRight);
        btn_login->setStyleSheet(QLatin1String("background-color: rgba(100, 57, 31, 255);\n"
"border:0;\n"
"color:rgb(255,255,255);"));
        btn_register = new QPushButton(Login);
        btn_register->setObjectName(QStringLiteral("btn_register"));
        btn_register->setGeometry(QRect(540, 440, 131, 41));
        btn_register->setFont(font4);
        btn_register->setFocusPolicy(Qt::NoFocus);
        btn_register->setLayoutDirection(Qt::LeftToRight);
        btn_register->setStyleSheet(QLatin1String("background-color: rgba(100, 57, 31, 255);\n"
"border:0;\n"
"color:rgb(255,255,255);"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        edit_username->setText(QString());
        label_username->setText(QApplication::translate("Login", "Email", nullptr));
        label_password->setText(QApplication::translate("Login", "Password:", nullptr));
        btn_login->setText(QApplication::translate("Login", "Login", nullptr));
        btn_register->setText(QApplication::translate("Login", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
