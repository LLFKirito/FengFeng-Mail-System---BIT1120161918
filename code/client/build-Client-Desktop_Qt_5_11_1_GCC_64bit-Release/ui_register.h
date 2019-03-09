/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *centralwidget;
    QLineEdit *edit_address;
    QLineEdit *edit_password;
    QLineEdit *edit_verify;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_8;
    QPushButton *btn_submit;
    QLabel *label_7;

    void setupUi(QMainWindow *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(1024, 625);
        Register->setMaximumSize(QSize(1024, 625));
        centralwidget = new QWidget(Register);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        edit_address = new QLineEdit(centralwidget);
        edit_address->setObjectName(QStringLiteral("edit_address"));
        edit_address->setGeometry(QRect(460, 190, 281, 41));
        QFont font;
        font.setFamily(QStringLiteral("Nimbus Sans L"));
        font.setPointSize(17);
        edit_address->setFont(font);
        edit_address->setAutoFillBackground(false);
        edit_address->setStyleSheet(QLatin1String("background-color: rgba(163,166,181,220);\n"
"border:0;"));
        edit_password = new QLineEdit(centralwidget);
        edit_password->setObjectName(QStringLiteral("edit_password"));
        edit_password->setGeometry(QRect(460, 270, 281, 41));
        edit_password->setStyleSheet(QLatin1String("background-color: rgba(163,166,181,220);\n"
"border:0;"));
        edit_password->setEchoMode(QLineEdit::Password);
        edit_verify = new QLineEdit(centralwidget);
        edit_verify->setObjectName(QStringLiteral("edit_verify"));
        edit_verify->setGeometry(QRect(460, 350, 281, 41));
        edit_verify->setStyleSheet(QLatin1String("background-color: rgba(163,166,181,220);\n"
"border:0;"));
        edit_verify->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 180, 181, 61));
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 270, 151, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 350, 191, 41));
        label_3->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(570, 220, 421, 61));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(570, 400, 281, 31));
        btn_submit = new QPushButton(centralwidget);
        btn_submit->setObjectName(QStringLiteral("btn_submit"));
        btn_submit->setGeometry(QRect(430, 480, 121, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Nimbus Sans L"));
        font1.setPointSize(15);
        btn_submit->setFont(font1);
        btn_submit->setFocusPolicy(Qt::NoFocus);
        btn_submit->setAutoFillBackground(false);
        btn_submit->setStyleSheet(QLatin1String("background-color: rgba(100, 57, 31, 255);\n"
"border:0;\n"
"color:rgb(255,255,255);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(570, 300, 321, 61));
        Register->setCentralWidget(centralwidget);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QMainWindow *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Regster", nullptr));
        label->setText(QApplication::translate("Register", "Email Address:", nullptr));
        label_2->setText(QApplication::translate("Register", "Password:", nullptr));
        label_3->setText(QApplication::translate("Register", "Verify Password:", nullptr));
        label_6->setText(QApplication::translate("Register", "6~16 charactors(English letters, numbers, underscores only)", nullptr));
        label_8->setText(QApplication::translate("Register", "Please verify the password.", nullptr));
        btn_submit->setText(QApplication::translate("Register", "Submit", nullptr));
        label_7->setText(QApplication::translate("Register", "6~16 charactors, please note it is case-sensitive.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
