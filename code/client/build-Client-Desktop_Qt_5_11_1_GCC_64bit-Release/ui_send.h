/********************************************************************************
** Form generated from reading UI file 'send.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEND_H
#define UI_SEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Send
{
public:
    QPushButton *Contact;
    QPushButton *Send_2;
    QLabel *label_4;
    QPushButton *Logout;
    QPushButton *Write;
    QLabel *label;
    QPushButton *Dustbin;
    QListWidget *SendList;
    QPushButton *Drafts;
    QLabel *label_3;
    QPushButton *Help;
    QPushButton *Inbox_2;
    QLabel *label_2;

    void setupUi(QWidget *Send)
    {
        if (Send->objectName().isEmpty())
            Send->setObjectName(QStringLiteral("Send"));
        Send->resize(1024, 625);
        Send->setMinimumSize(QSize(1024, 625));
        Send->setMaximumSize(QSize(1024, 625));
        Contact = new QPushButton(Send);
        Contact->setObjectName(QStringLiteral("Contact"));
        Contact->setGeometry(QRect(50, 300, 150, 40));
        QFont font;
        font.setPointSize(15);
        Contact->setFont(font);
        Contact->setFocusPolicy(Qt::NoFocus);
        Contact->setStyleSheet(QLatin1String("background-image: url(:/jpg/contact.png);\n"
"border:0;"));
        Send_2 = new QPushButton(Send);
        Send_2->setObjectName(QStringLiteral("Send_2"));
        Send_2->setGeometry(QRect(50, 360, 150, 40));
        Send_2->setFont(font);
        Send_2->setFocusPolicy(Qt::NoFocus);
        Send_2->setAutoFillBackground(false);
        Send_2->setStyleSheet(QLatin1String("background-image: url(:/jpg/send.png);\n"
"border:0;"));
        label_4 = new QLabel(Send);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 150, 150, 400));
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(222, 182, 181);"));
        Logout = new QPushButton(Send);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setGeometry(QRect(820, 40, 80, 30));
        QFont font1;
        font1.setPointSize(12);
        Logout->setFont(font1);
        Logout->setFocusPolicy(Qt::NoFocus);
        Logout->setAutoFillBackground(false);
        Logout->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);\n"
"border:0;"));
        Write = new QPushButton(Send);
        Write->setObjectName(QStringLiteral("Write"));
        Write->setGeometry(QRect(50, 180, 150, 40));
        Write->setFont(font);
        Write->setFocusPolicy(Qt::NoFocus);
        Write->setAutoFillBackground(false);
        Write->setStyleSheet(QLatin1String("background-image: url(:/jpg/write.png);\n"
"border:0px;"));
        label = new QLabel(Send);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 521, 51));
        label->setMaximumSize(QSize(1024, 625));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        Dustbin = new QPushButton(Send);
        Dustbin->setObjectName(QStringLiteral("Dustbin"));
        Dustbin->setGeometry(QRect(50, 480, 150, 40));
        Dustbin->setFont(font);
        Dustbin->setFocusPolicy(Qt::NoFocus);
        Dustbin->setStyleSheet(QLatin1String("background-image: url(:/jpg/dustbin.png);\n"
"border:0;"));
        SendList = new QListWidget(Send);
        SendList->setObjectName(QStringLiteral("SendList"));
        SendList->setGeometry(QRect(250, 150, 691, 401));
        SendList->setStyleSheet(QStringLiteral("background-color:rgba(0,0,0,0);"));
        Drafts = new QPushButton(Send);
        Drafts->setObjectName(QStringLiteral("Drafts"));
        Drafts->setGeometry(QRect(50, 420, 150, 40));
        Drafts->setFont(font);
        Drafts->setFocusPolicy(Qt::NoFocus);
        Drafts->setStyleSheet(QLatin1String("background-image: url(:/jpg/draft.png);\n"
"border:0;"));
        label_3 = new QLabel(Send);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 100, 121, 31));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        Help = new QPushButton(Send);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setGeometry(QRect(910, 40, 80, 30));
        Help->setFont(font1);
        Help->setFocusPolicy(Qt::NoFocus);
        Help->setAutoFillBackground(false);
        Help->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:0;"));
        Inbox_2 = new QPushButton(Send);
        Inbox_2->setObjectName(QStringLiteral("Inbox_2"));
        Inbox_2->setGeometry(QRect(50, 240, 150, 40));
        Inbox_2->setFont(font);
        Inbox_2->setFocusPolicy(Qt::NoFocus);
        Inbox_2->setStyleSheet(QLatin1String("background-image: url(:/jpg/inbox.png);\n"
"border:0;"));
        label_2 = new QLabel(Send);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 90, 211, 51));
        label_2->setFont(font);
        label_4->raise();
        Contact->raise();
        Send_2->raise();
        Logout->raise();
        Write->raise();
        label->raise();
        Dustbin->raise();
        SendList->raise();
        Drafts->raise();
        label_3->raise();
        Help->raise();
        Inbox_2->raise();
        label_2->raise();

        retranslateUi(Send);

        QMetaObject::connectSlotsByName(Send);
    } // setupUi

    void retranslateUi(QWidget *Send)
    {
        Send->setWindowTitle(QApplication::translate("Send", "Send", nullptr));
        Contact->setText(QApplication::translate("Send", "        Contact", nullptr));
        Send_2->setText(QApplication::translate("Send", "        Send", nullptr));
        label_4->setText(QString());
        Logout->setText(QApplication::translate("Send", "Logout", nullptr));
        Write->setText(QApplication::translate("Send", "        Write", nullptr));
        label->setText(QApplication::translate("Send", "FengFeng Email", nullptr));
        Dustbin->setText(QApplication::translate("Send", "        Dustbin", nullptr));
        Drafts->setText(QApplication::translate("Send", "        Drafts", nullptr));
        label_3->setText(QApplication::translate("Send", "Mail:", nullptr));
        Help->setText(QApplication::translate("Send", "Help", nullptr));
        Inbox_2->setText(QApplication::translate("Send", "        Inbox", nullptr));
        label_2->setText(QApplication::translate("Send", "123456789@qq.com", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Send: public Ui_Send {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEND_H
