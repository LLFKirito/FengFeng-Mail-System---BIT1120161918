/********************************************************************************
** Form generated from reading UI file 'inbox.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INBOX_H
#define UI_INBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inbox
{
public:
    QPushButton *Write;
    QPushButton *Inbox_2;
    QPushButton *Dustbin;
    QPushButton *Logout;
    QPushButton *Help;
    QPushButton *Send;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *Drafts;
    QPushButton *Contact;
    QLabel *label;
    QLabel *label_2;
    QListWidget *InboxList;
    QPushButton *btn_refresh;

    void setupUi(QWidget *Inbox)
    {
        if (Inbox->objectName().isEmpty())
            Inbox->setObjectName(QStringLiteral("Inbox"));
        Inbox->resize(1024, 625);
        Inbox->setMaximumSize(QSize(1024, 625));
        Write = new QPushButton(Inbox);
        Write->setObjectName(QStringLiteral("Write"));
        Write->setGeometry(QRect(50, 180, 150, 40));
        QFont font;
        font.setPointSize(15);
        Write->setFont(font);
        Write->setFocusPolicy(Qt::NoFocus);
        Write->setAutoFillBackground(false);
        Write->setStyleSheet(QLatin1String("background-image: url(:/jpg/write.png);\n"
"border:0px;"));
        Inbox_2 = new QPushButton(Inbox);
        Inbox_2->setObjectName(QStringLiteral("Inbox_2"));
        Inbox_2->setGeometry(QRect(50, 240, 150, 40));
        Inbox_2->setFont(font);
        Inbox_2->setFocusPolicy(Qt::NoFocus);
        Inbox_2->setStyleSheet(QLatin1String("background-image: url(:/jpg/inbox.png);\n"
"border:0;"));
        Dustbin = new QPushButton(Inbox);
        Dustbin->setObjectName(QStringLiteral("Dustbin"));
        Dustbin->setGeometry(QRect(50, 480, 150, 40));
        Dustbin->setFont(font);
        Dustbin->setFocusPolicy(Qt::NoFocus);
        Dustbin->setStyleSheet(QLatin1String("background-image: url(:/jpg/dustbin.png);\n"
"border:0;"));
        Logout = new QPushButton(Inbox);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setGeometry(QRect(820, 60, 80, 30));
        QFont font1;
        font1.setPointSize(12);
        Logout->setFont(font1);
        Logout->setFocusPolicy(Qt::NoFocus);
        Logout->setAutoFillBackground(false);
        Logout->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);\n"
"border:0;"));
        Help = new QPushButton(Inbox);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setGeometry(QRect(910, 60, 80, 30));
        Help->setFont(font1);
        Help->setFocusPolicy(Qt::NoFocus);
        Help->setAutoFillBackground(false);
        Help->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:0;"));
        Send = new QPushButton(Inbox);
        Send->setObjectName(QStringLiteral("Send"));
        Send->setGeometry(QRect(50, 360, 150, 40));
        Send->setFont(font);
        Send->setFocusPolicy(Qt::NoFocus);
        Send->setAutoFillBackground(false);
        Send->setStyleSheet(QLatin1String("background-image: url(:/jpg/send.png);\n"
"border:0;"));
        label_3 = new QLabel(Inbox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 100, 121, 31));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_4 = new QLabel(Inbox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 150, 150, 400));
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(222, 182, 181);"));
        Drafts = new QPushButton(Inbox);
        Drafts->setObjectName(QStringLiteral("Drafts"));
        Drafts->setGeometry(QRect(50, 420, 150, 40));
        Drafts->setFont(font);
        Drafts->setFocusPolicy(Qt::NoFocus);
        Drafts->setStyleSheet(QLatin1String("background-image: url(:/jpg/draft.png);\n"
"border:0;"));
        Contact = new QPushButton(Inbox);
        Contact->setObjectName(QStringLiteral("Contact"));
        Contact->setGeometry(QRect(50, 300, 150, 40));
        Contact->setFont(font);
        Contact->setFocusPolicy(Qt::NoFocus);
        Contact->setStyleSheet(QLatin1String("background-image: url(:/jpg/contact.png);\n"
"border:0;"));
        label = new QLabel(Inbox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 521, 51));
        label->setMaximumSize(QSize(1024, 625));
        QFont font3;
        font3.setPointSize(25);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label_2 = new QLabel(Inbox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 90, 211, 51));
        label_2->setFont(font);
        InboxList = new QListWidget(Inbox);
        InboxList->setObjectName(QStringLiteral("InboxList"));
        InboxList->setGeometry(QRect(250, 150, 691, 401));
        InboxList->setStyleSheet(QStringLiteral("background-color:rgba(0,0,0,0);"));
        btn_refresh = new QPushButton(Inbox);
        btn_refresh->setObjectName(QStringLiteral("btn_refresh"));
        btn_refresh->setGeometry(QRect(320, 100, 89, 25));
        btn_refresh->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:0;"));
        label_4->raise();
        Write->raise();
        Inbox_2->raise();
        Dustbin->raise();
        Logout->raise();
        Help->raise();
        Send->raise();
        label_3->raise();
        Drafts->raise();
        Contact->raise();
        label->raise();
        label_2->raise();
        InboxList->raise();
        btn_refresh->raise();

        retranslateUi(Inbox);

        QMetaObject::connectSlotsByName(Inbox);
    } // setupUi

    void retranslateUi(QWidget *Inbox)
    {
        Inbox->setWindowTitle(QApplication::translate("Inbox", "Inbox", nullptr));
        Write->setText(QApplication::translate("Inbox", "        Write", nullptr));
        Inbox_2->setText(QApplication::translate("Inbox", "        Inbox", nullptr));
        Dustbin->setText(QApplication::translate("Inbox", "        Dustbin", nullptr));
        Logout->setText(QApplication::translate("Inbox", "Logout", nullptr));
        Help->setText(QApplication::translate("Inbox", "Help", nullptr));
        Send->setText(QApplication::translate("Inbox", "        Send", nullptr));
        label_3->setText(QApplication::translate("Inbox", "Mail:", nullptr));
        label_4->setText(QString());
        Drafts->setText(QApplication::translate("Inbox", "        Drafts", nullptr));
        Contact->setText(QApplication::translate("Inbox", "        Contact", nullptr));
        label->setText(QApplication::translate("Inbox", "FengFeng Email", nullptr));
        label_2->setText(QApplication::translate("Inbox", "123456789@qq.com", nullptr));
        btn_refresh->setText(QApplication::translate("Inbox", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inbox: public Ui_Inbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INBOX_H
