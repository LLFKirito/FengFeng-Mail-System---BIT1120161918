/********************************************************************************
** Form generated from reading UI file 'contact.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACT_H
#define UI_CONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Contact
{
public:
    QLabel *label;
    QPushButton *Write;
    QPushButton *Inbox;
    QPushButton *Drafts;
    QPushButton *Dustbin;
    QLabel *label_3;
    QPushButton *Contact2;
    QPushButton *Send;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QListWidget *ContactInfoList;
    QPushButton *Help;
    QPushButton *Logout_2;
    QLabel *label_2;

    void setupUi(QWidget *Contact)
    {
        if (Contact->objectName().isEmpty())
            Contact->setObjectName(QStringLiteral("Contact"));
        Contact->resize(1024, 625);
        label = new QLabel(Contact);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 521, 51));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        Write = new QPushButton(Contact);
        Write->setObjectName(QStringLiteral("Write"));
        Write->setGeometry(QRect(50, 180, 150, 40));
        QFont font1;
        font1.setPointSize(15);
        Write->setFont(font1);
        Write->setFocusPolicy(Qt::NoFocus);
        Write->setAutoFillBackground(false);
        Write->setStyleSheet(QString::fromUtf8("background-image: url(:/jpg/write.png);\n"
"border:0px;\n"
"\n"
"/*widget\346\255\243\345\270\270\347\212\266\346\200\201*/  \n"
"\n"
"QWidget#widget_1{      \n"
"\n"
"    border:3px solid #CFCFCF;  \n"
"\n"
"}  \n"
"\n"
"/*widge\345\244\204\344\272\216\347\204\246\347\202\271\347\212\266\346\200\201*/  \n"
"\n"
"QWidget#widget_1:focus{      \n"
"\n"
"    border:5px solid #A5A6A1; \n"
"\n"
" }  "));
        Inbox = new QPushButton(Contact);
        Inbox->setObjectName(QStringLiteral("Inbox"));
        Inbox->setGeometry(QRect(50, 240, 150, 40));
        Inbox->setFont(font1);
        Inbox->setFocusPolicy(Qt::NoFocus);
        Inbox->setStyleSheet(QLatin1String("background-image: url(:/jpg/inbox.png);\n"
"border:0;"));
        Drafts = new QPushButton(Contact);
        Drafts->setObjectName(QStringLiteral("Drafts"));
        Drafts->setGeometry(QRect(50, 420, 150, 40));
        Drafts->setFont(font1);
        Drafts->setFocusPolicy(Qt::NoFocus);
        Drafts->setStyleSheet(QLatin1String("background-image: url(:/jpg/draft.png);\n"
"border:0;"));
        Dustbin = new QPushButton(Contact);
        Dustbin->setObjectName(QStringLiteral("Dustbin"));
        Dustbin->setGeometry(QRect(50, 480, 150, 40));
        Dustbin->setFont(font1);
        Dustbin->setFocusPolicy(Qt::NoFocus);
        Dustbin->setStyleSheet(QLatin1String("background-image: url(:/jpg/dustbin.png);\n"
"border:0;"));
        label_3 = new QLabel(Contact);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 100, 121, 31));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        Contact2 = new QPushButton(Contact);
        Contact2->setObjectName(QStringLiteral("Contact2"));
        Contact2->setGeometry(QRect(50, 300, 150, 40));
        Contact2->setFont(font1);
        Contact2->setFocusPolicy(Qt::NoFocus);
        Contact2->setStyleSheet(QLatin1String("background-image: url(:/jpg/contact.png);\n"
"border:0;"));
        Send = new QPushButton(Contact);
        Send->setObjectName(QStringLiteral("Send"));
        Send->setGeometry(QRect(50, 360, 150, 40));
        Send->setFont(font1);
        Send->setFocusPolicy(Qt::NoFocus);
        Send->setAutoFillBackground(false);
        Send->setStyleSheet(QLatin1String("background-image: url(:/jpg/send.png);\n"
"border:0;"));
        label_4 = new QLabel(Contact);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 150, 150, 400));
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(222,182,181);"));
        label_5 = new QLabel(Contact);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(400, 110, 101, 21));
        QFont font3;
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);
        label_6 = new QLabel(Contact);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(690, 110, 71, 21));
        label_6->setFont(font3);
        ContactInfoList = new QListWidget(Contact);
        ContactInfoList->setObjectName(QStringLiteral("ContactInfoList"));
        ContactInfoList->setGeometry(QRect(270, 150, 721, 401));
        ContactInfoList->setStyleSheet(QStringLiteral("background-color:rgba(0,0,0,0);"));
        Help = new QPushButton(Contact);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setGeometry(QRect(910, 39, 80, 31));
        QFont font4;
        font4.setPointSize(12);
        Help->setFont(font4);
        Help->setFocusPolicy(Qt::NoFocus);
        Help->setAutoFillBackground(false);
        Help->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:0;"));
        Logout_2 = new QPushButton(Contact);
        Logout_2->setObjectName(QStringLiteral("Logout_2"));
        Logout_2->setGeometry(QRect(820, 40, 80, 30));
        Logout_2->setFont(font4);
        Logout_2->setFocusPolicy(Qt::NoFocus);
        Logout_2->setAutoFillBackground(false);
        Logout_2->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);\n"
"border:0;"));
        label_2 = new QLabel(Contact);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 90, 211, 51));
        label_2->setFont(font1);
        label_4->raise();
        label->raise();
        Write->raise();
        Inbox->raise();
        Drafts->raise();
        Dustbin->raise();
        label_3->raise();
        Contact2->raise();
        Send->raise();
        label_5->raise();
        label_6->raise();
        ContactInfoList->raise();
        Help->raise();
        Logout_2->raise();
        label_2->raise();

        retranslateUi(Contact);

        QMetaObject::connectSlotsByName(Contact);
    } // setupUi

    void retranslateUi(QWidget *Contact)
    {
        Contact->setWindowTitle(QApplication::translate("Contact", "Contact", nullptr));
        label->setText(QApplication::translate("Contact", "FengFeng Email", nullptr));
        Write->setText(QApplication::translate("Contact", "        Write", nullptr));
        Inbox->setText(QApplication::translate("Contact", "        Inbox", nullptr));
        Drafts->setText(QApplication::translate("Contact", "        Drafts", nullptr));
        Dustbin->setText(QApplication::translate("Contact", "        Dustbin", nullptr));
        label_3->setText(QApplication::translate("Contact", "Mail:", nullptr));
        Contact2->setText(QApplication::translate("Contact", "        Contact", nullptr));
        Send->setText(QApplication::translate("Contact", "        Send", nullptr));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("Contact", "Name", nullptr));
        label_6->setText(QApplication::translate("Contact", "Mail", nullptr));
        Help->setText(QApplication::translate("Contact", "Help", nullptr));
        Logout_2->setText(QApplication::translate("Contact", "Logout", nullptr));
        label_2->setText(QApplication::translate("Contact", "123456789@qq.com", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Contact: public Ui_Contact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACT_H
