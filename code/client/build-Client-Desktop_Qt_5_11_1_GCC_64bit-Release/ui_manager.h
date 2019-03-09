/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manager
{
public:
    QLabel *label;
    QPushButton *Write;
    QPushButton *Inbox;
    QPushButton *Drafts;
    QPushButton *Dustbin;
    QPushButton *Logout;
    QLabel *label_3;
    QPushButton *Help;
    QPushButton *Contact;
    QPushButton *Send;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *Time;
    QLabel *label_7;
    QLabel *Number;
    QLabel *label_2;

    void setupUi(QWidget *manager)
    {
        if (manager->objectName().isEmpty())
            manager->setObjectName(QStringLiteral("manager"));
        manager->resize(1024, 625);
        manager->setMaximumSize(QSize(1024, 625));
        label = new QLabel(manager);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 521, 51));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        Write = new QPushButton(manager);
        Write->setObjectName(QStringLiteral("Write"));
        Write->setGeometry(QRect(50, 180, 150, 40));
        QFont font1;
        font1.setPointSize(15);
        Write->setFont(font1);
        Write->setFocusPolicy(Qt::NoFocus);
        Write->setAutoFillBackground(false);
        Write->setStyleSheet(QLatin1String("background-image: url(:/jpg/write.png);\n"
"border:0px;"));
        Inbox = new QPushButton(manager);
        Inbox->setObjectName(QStringLiteral("Inbox"));
        Inbox->setGeometry(QRect(50, 240, 150, 40));
        Inbox->setFont(font1);
        Inbox->setFocusPolicy(Qt::NoFocus);
        Inbox->setStyleSheet(QLatin1String("background-image: url(:/jpg/inbox.png);\n"
"border:0;"));
        Drafts = new QPushButton(manager);
        Drafts->setObjectName(QStringLiteral("Drafts"));
        Drafts->setGeometry(QRect(50, 420, 150, 40));
        Drafts->setFont(font1);
        Drafts->setFocusPolicy(Qt::NoFocus);
        Drafts->setStyleSheet(QLatin1String("background-image: url(:/jpg/draft.png);\n"
"border:0;"));
        Dustbin = new QPushButton(manager);
        Dustbin->setObjectName(QStringLiteral("Dustbin"));
        Dustbin->setGeometry(QRect(50, 480, 150, 40));
        Dustbin->setFont(font1);
        Dustbin->setFocusPolicy(Qt::NoFocus);
        Dustbin->setStyleSheet(QLatin1String("background-image: url(:/jpg/dustbin.png);\n"
"border:0;"));
        Logout = new QPushButton(manager);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setGeometry(QRect(820, 40, 80, 30));
        QFont font2;
        font2.setPointSize(12);
        Logout->setFont(font2);
        Logout->setFocusPolicy(Qt::NoFocus);
        Logout->setAutoFillBackground(false);
        Logout->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);\n"
"border:0;"));
        label_3 = new QLabel(manager);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 100, 121, 31));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        Help = new QPushButton(manager);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setGeometry(QRect(910, 40, 80, 30));
        Help->setFont(font2);
        Help->setFocusPolicy(Qt::NoFocus);
        Help->setAutoFillBackground(false);
        Help->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:0;"));
        Contact = new QPushButton(manager);
        Contact->setObjectName(QStringLiteral("Contact"));
        Contact->setGeometry(QRect(50, 300, 150, 40));
        Contact->setFont(font1);
        Contact->setFocusPolicy(Qt::NoFocus);
        Contact->setStyleSheet(QLatin1String("background-image: url(:/jpg/contact.png);\n"
"border:0;"));
        Send = new QPushButton(manager);
        Send->setObjectName(QStringLiteral("Send"));
        Send->setGeometry(QRect(50, 360, 150, 40));
        Send->setFont(font1);
        Send->setFocusPolicy(Qt::NoFocus);
        Send->setAutoFillBackground(false);
        Send->setStyleSheet(QLatin1String("background-image: url(:/jpg/send.png);\n"
"border:0;"));
        label_4 = new QLabel(manager);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 150, 150, 400));
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(222, 182, 181);"));
        label_5 = new QLabel(manager);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 170, 581, 61));
        label_5->setFont(font1);
        label_5->setAutoFillBackground(false);
        label_5->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));
        Time = new QLabel(manager);
        Time->setObjectName(QStringLiteral("Time"));
        Time->setGeometry(QRect(350, 180, 101, 41));
        Time->setFont(font1);
        Time->setAutoFillBackground(false);
        Time->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255 ,0);"));
        label_7 = new QLabel(manager);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 290, 421, 41));
        label_7->setFont(font1);
        label_7->setAutoFillBackground(false);
        label_7->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));
        Number = new QLabel(manager);
        Number->setObjectName(QStringLiteral("Number"));
        Number->setGeometry(QRect(400, 300, 31, 21));
        Number->setFont(font1);
        Number->setAutoFillBackground(false);
        Number->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        label_2 = new QLabel(manager);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 90, 221, 51));
        label_2->setFont(font1);
        label_4->raise();
        label->raise();
        Write->raise();
        Inbox->raise();
        Drafts->raise();
        Dustbin->raise();
        Logout->raise();
        label_3->raise();
        Help->raise();
        Contact->raise();
        Send->raise();
        label_5->raise();
        Time->raise();
        label_7->raise();
        Number->raise();
        label_2->raise();

        retranslateUi(manager);

        QMetaObject::connectSlotsByName(manager);
    } // setupUi

    void retranslateUi(QWidget *manager)
    {
        manager->setWindowTitle(QApplication::translate("manager", "Home", nullptr));
        label->setText(QApplication::translate("manager", "FengFeng Email", nullptr));
        Write->setText(QApplication::translate("manager", "        Write", nullptr));
        Inbox->setText(QApplication::translate("manager", "        Inbox", nullptr));
        Drafts->setText(QApplication::translate("manager", "        Drafts", nullptr));
        Dustbin->setText(QApplication::translate("manager", "        Dustbin", nullptr));
        Logout->setText(QApplication::translate("manager", "Logout", nullptr));
        label_3->setText(QApplication::translate("manager", "Mail:", nullptr));
        Help->setText(QApplication::translate("manager", "Help", nullptr));
        Contact->setText(QApplication::translate("manager", "        Contact", nullptr));
        Send->setText(QApplication::translate("manager", "        Send", nullptr));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("manager", "    Good                          ! Welcome to your Email.", nullptr));
        Time->setText(QApplication::translate("manager", "Morning", nullptr));
        label_7->setText(QApplication::translate("manager", "   You have (              ) mails to read.", nullptr));
        Number->setText(QApplication::translate("manager", "1", nullptr));
        label_2->setText(QApplication::translate("manager", "123456789@qq.com", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manager: public Ui_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
