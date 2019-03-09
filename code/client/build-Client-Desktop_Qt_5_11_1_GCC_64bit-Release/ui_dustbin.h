/********************************************************************************
** Form generated from reading UI file 'dustbin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUSTBIN_H
#define UI_DUSTBIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dustbin
{
public:
    QPushButton *Help;
    QPushButton *Write;
    QPushButton *Drafts;
    QPushButton *Send;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Contact;
    QLabel *label_3;
    QListWidget *DustbinList;
    QLabel *label_4;
    QPushButton *Logout;
    QPushButton *Dustbin_2;
    QPushButton *Inbox;

    void setupUi(QWidget *Dustbin)
    {
        if (Dustbin->objectName().isEmpty())
            Dustbin->setObjectName(QStringLiteral("Dustbin"));
        Dustbin->resize(1024, 625);
        Dustbin->setMinimumSize(QSize(1024, 625));
        Dustbin->setMaximumSize(QSize(1024, 625));
        Help = new QPushButton(Dustbin);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setGeometry(QRect(910, 40, 80, 30));
        QFont font;
        font.setPointSize(12);
        Help->setFont(font);
        Help->setFocusPolicy(Qt::NoFocus);
        Help->setAutoFillBackground(false);
        Help->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:0;"));
        Write = new QPushButton(Dustbin);
        Write->setObjectName(QStringLiteral("Write"));
        Write->setGeometry(QRect(50, 180, 150, 40));
        QFont font1;
        font1.setPointSize(15);
        Write->setFont(font1);
        Write->setFocusPolicy(Qt::NoFocus);
        Write->setAutoFillBackground(false);
        Write->setStyleSheet(QLatin1String("background-image: url(:/jpg/write.png);\n"
"border:0px;"));
        Drafts = new QPushButton(Dustbin);
        Drafts->setObjectName(QStringLiteral("Drafts"));
        Drafts->setGeometry(QRect(50, 420, 150, 40));
        Drafts->setFont(font1);
        Drafts->setFocusPolicy(Qt::NoFocus);
        Drafts->setStyleSheet(QLatin1String("background-image: url(:/jpg/draft.png);\n"
"border:0;"));
        Send = new QPushButton(Dustbin);
        Send->setObjectName(QStringLiteral("Send"));
        Send->setGeometry(QRect(50, 360, 150, 40));
        Send->setFont(font1);
        Send->setFocusPolicy(Qt::NoFocus);
        Send->setAutoFillBackground(false);
        Send->setStyleSheet(QLatin1String("background-image: url(:/jpg/send.png);\n"
"border:0;"));
        label = new QLabel(Dustbin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 521, 51));
        label->setMaximumSize(QSize(1024, 625));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label_2 = new QLabel(Dustbin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 90, 211, 51));
        label_2->setFont(font1);
        Contact = new QPushButton(Dustbin);
        Contact->setObjectName(QStringLiteral("Contact"));
        Contact->setGeometry(QRect(50, 300, 150, 40));
        Contact->setFont(font1);
        Contact->setFocusPolicy(Qt::NoFocus);
        Contact->setStyleSheet(QLatin1String("background-image: url(:/jpg/contact.png);\n"
"border:0;"));
        label_3 = new QLabel(Dustbin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 100, 121, 31));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        DustbinList = new QListWidget(Dustbin);
        DustbinList->setObjectName(QStringLiteral("DustbinList"));
        DustbinList->setGeometry(QRect(250, 150, 691, 401));
        DustbinList->setStyleSheet(QStringLiteral("background-color:rgba(0,0,0,0);"));
        label_4 = new QLabel(Dustbin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 150, 150, 400));
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(222, 182, 181);"));
        Logout = new QPushButton(Dustbin);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setGeometry(QRect(820, 40, 80, 30));
        Logout->setFont(font);
        Logout->setFocusPolicy(Qt::NoFocus);
        Logout->setAutoFillBackground(false);
        Logout->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);\n"
"border:0;"));
        Dustbin_2 = new QPushButton(Dustbin);
        Dustbin_2->setObjectName(QStringLiteral("Dustbin_2"));
        Dustbin_2->setGeometry(QRect(50, 480, 150, 40));
        Dustbin_2->setFont(font1);
        Dustbin_2->setFocusPolicy(Qt::NoFocus);
        Dustbin_2->setStyleSheet(QLatin1String("background-image: url(:/jpg/dustbin.png);\n"
"border:0;"));
        Inbox = new QPushButton(Dustbin);
        Inbox->setObjectName(QStringLiteral("Inbox"));
        Inbox->setGeometry(QRect(50, 240, 150, 40));
        Inbox->setFont(font1);
        Inbox->setFocusPolicy(Qt::NoFocus);
        Inbox->setStyleSheet(QLatin1String("background-image: url(:/jpg/inbox.png);\n"
"border:0;"));
        label_4->raise();
        Help->raise();
        Write->raise();
        Drafts->raise();
        Send->raise();
        label->raise();
        label_2->raise();
        Contact->raise();
        label_3->raise();
        DustbinList->raise();
        Logout->raise();
        Dustbin_2->raise();
        Inbox->raise();

        retranslateUi(Dustbin);

        QMetaObject::connectSlotsByName(Dustbin);
    } // setupUi

    void retranslateUi(QWidget *Dustbin)
    {
        Dustbin->setWindowTitle(QApplication::translate("Dustbin", "Dustbin", nullptr));
        Help->setText(QApplication::translate("Dustbin", "Help", nullptr));
        Write->setText(QApplication::translate("Dustbin", "        Write", nullptr));
        Drafts->setText(QApplication::translate("Dustbin", "        Drafts", nullptr));
        Send->setText(QApplication::translate("Dustbin", "        Send", nullptr));
        label->setText(QApplication::translate("Dustbin", "FengFeng Email", nullptr));
        label_2->setText(QApplication::translate("Dustbin", "123456789@qq.com", nullptr));
        Contact->setText(QApplication::translate("Dustbin", "        Contact", nullptr));
        label_3->setText(QApplication::translate("Dustbin", "Mail:", nullptr));
        label_4->setText(QString());
        Logout->setText(QApplication::translate("Dustbin", "Logout", nullptr));
        Dustbin_2->setText(QApplication::translate("Dustbin", "        Dustbin", nullptr));
        Inbox->setText(QApplication::translate("Dustbin", "        Inbox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dustbin: public Ui_Dustbin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUSTBIN_H
