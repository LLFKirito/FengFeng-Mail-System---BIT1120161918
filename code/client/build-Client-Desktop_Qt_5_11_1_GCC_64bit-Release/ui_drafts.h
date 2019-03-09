/********************************************************************************
** Form generated from reading UI file 'drafts.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAFTS_H
#define UI_DRAFTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Drafts
{
public:
    QLabel *label_2;
    QPushButton *Drafts_2;
    QListWidget *DraftList;
    QPushButton *Contact;
    QPushButton *Send;
    QPushButton *Help;
    QLabel *label_3;
    QPushButton *Inbox;
    QPushButton *Logout;
    QLabel *label;
    QPushButton *Write;
    QPushButton *Dustbin;
    QLabel *label_4;

    void setupUi(QWidget *Drafts)
    {
        if (Drafts->objectName().isEmpty())
            Drafts->setObjectName(QStringLiteral("Drafts"));
        Drafts->resize(1024, 625);
        Drafts->setMinimumSize(QSize(1024, 625));
        Drafts->setMaximumSize(QSize(1024, 625));
        label_2 = new QLabel(Drafts);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 90, 211, 51));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        Drafts_2 = new QPushButton(Drafts);
        Drafts_2->setObjectName(QStringLiteral("Drafts_2"));
        Drafts_2->setGeometry(QRect(50, 420, 150, 40));
        Drafts_2->setFont(font);
        Drafts_2->setFocusPolicy(Qt::NoFocus);
        Drafts_2->setStyleSheet(QLatin1String("background-image: url(:/jpg/draft.png);\n"
"border:0;"));
        DraftList = new QListWidget(Drafts);
        DraftList->setObjectName(QStringLiteral("DraftList"));
        DraftList->setGeometry(QRect(250, 150, 691, 401));
        DraftList->setStyleSheet(QStringLiteral("background-color:rgba(0,0,0,0);"));
        Contact = new QPushButton(Drafts);
        Contact->setObjectName(QStringLiteral("Contact"));
        Contact->setGeometry(QRect(50, 300, 150, 40));
        Contact->setFont(font);
        Contact->setFocusPolicy(Qt::NoFocus);
        Contact->setStyleSheet(QLatin1String("background-image: url(:/jpg/contact.png);\n"
"border:0;"));
        Send = new QPushButton(Drafts);
        Send->setObjectName(QStringLiteral("Send"));
        Send->setGeometry(QRect(50, 360, 150, 40));
        Send->setFont(font);
        Send->setFocusPolicy(Qt::NoFocus);
        Send->setAutoFillBackground(false);
        Send->setStyleSheet(QLatin1String("background-image: url(:/jpg/send.png);\n"
"border:0;"));
        Help = new QPushButton(Drafts);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setGeometry(QRect(910, 40, 80, 30));
        QFont font1;
        font1.setPointSize(12);
        Help->setFont(font1);
        Help->setFocusPolicy(Qt::NoFocus);
        Help->setAutoFillBackground(false);
        Help->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:0;"));
        label_3 = new QLabel(Drafts);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 100, 121, 31));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        Inbox = new QPushButton(Drafts);
        Inbox->setObjectName(QStringLiteral("Inbox"));
        Inbox->setGeometry(QRect(50, 240, 150, 40));
        Inbox->setFont(font);
        Inbox->setFocusPolicy(Qt::NoFocus);
        Inbox->setStyleSheet(QLatin1String("background-image: url(:/jpg/inbox.png);\n"
"border:0;"));
        Logout = new QPushButton(Drafts);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setGeometry(QRect(820, 40, 80, 30));
        Logout->setFont(font1);
        Logout->setFocusPolicy(Qt::NoFocus);
        Logout->setAutoFillBackground(false);
        Logout->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);\n"
"border:0;"));
        label = new QLabel(Drafts);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 521, 51));
        label->setMaximumSize(QSize(1024, 625));
        QFont font3;
        font3.setPointSize(25);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        Write = new QPushButton(Drafts);
        Write->setObjectName(QStringLiteral("Write"));
        Write->setGeometry(QRect(50, 180, 150, 40));
        Write->setFont(font);
        Write->setFocusPolicy(Qt::NoFocus);
        Write->setAutoFillBackground(false);
        Write->setStyleSheet(QLatin1String("background-image: url(:/jpg/write.png);\n"
"border:0px;"));
        Dustbin = new QPushButton(Drafts);
        Dustbin->setObjectName(QStringLiteral("Dustbin"));
        Dustbin->setGeometry(QRect(50, 480, 150, 40));
        Dustbin->setFont(font);
        Dustbin->setFocusPolicy(Qt::NoFocus);
        Dustbin->setStyleSheet(QLatin1String("background-image: url(:/jpg/dustbin.png);\n"
"border:0;"));
        label_4 = new QLabel(Drafts);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 150, 150, 400));
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(222, 182, 181);"));
        label_4->raise();
        label_2->raise();
        Drafts_2->raise();
        DraftList->raise();
        Contact->raise();
        Send->raise();
        Help->raise();
        label_3->raise();
        Inbox->raise();
        Logout->raise();
        label->raise();
        Write->raise();
        Dustbin->raise();

        retranslateUi(Drafts);

        QMetaObject::connectSlotsByName(Drafts);
    } // setupUi

    void retranslateUi(QWidget *Drafts)
    {
        Drafts->setWindowTitle(QApplication::translate("Drafts", "Drafts", nullptr));
        label_2->setText(QApplication::translate("Drafts", "123456789@qq.com", nullptr));
        Drafts_2->setText(QApplication::translate("Drafts", "        Drafts", nullptr));
        Contact->setText(QApplication::translate("Drafts", "        Contact", nullptr));
        Send->setText(QApplication::translate("Drafts", "        Send", nullptr));
        Help->setText(QApplication::translate("Drafts", "Help", nullptr));
        label_3->setText(QApplication::translate("Drafts", "Mail:", nullptr));
        Inbox->setText(QApplication::translate("Drafts", "        Inbox", nullptr));
        Logout->setText(QApplication::translate("Drafts", "Logout", nullptr));
        label->setText(QApplication::translate("Drafts", "FengFeng Email", nullptr));
        Write->setText(QApplication::translate("Drafts", "        Write", nullptr));
        Dustbin->setText(QApplication::translate("Drafts", "        Dustbin", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Drafts: public Ui_Drafts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAFTS_H
