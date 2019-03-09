/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit
{
public:
    QLineEdit *ReceiverLine;
    QPlainTextEdit *MailContent;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *SubjectLine;
    QLabel *label_4;
    QPushButton *Send;
    QPushButton *Enclosure;
    QCheckBox *BCC;
    QLineEdit *CC;
    QPushButton *Save;
    QPushButton *Write;
    QPushButton *Inbox;
    QPushButton *Dustbin;
    QPushButton *Logout;
    QPushButton *Help;
    QPushButton *Send_2;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *Drafts;
    QPushButton *Contact;
    QLabel *label;
    QCheckBox *CC_2;
    QPushButton *Close;
    QLabel *label_5;

    void setupUi(QWidget *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName(QStringLiteral("edit"));
        edit->resize(1024, 625);
        edit->setMaximumSize(QSize(1024, 625));
        QFont font;
        font.setPointSize(15);
        edit->setFont(font);
        edit->setAutoFillBackground(true);
        edit->setStyleSheet(QStringLiteral(""));
        ReceiverLine = new QLineEdit(edit);
        ReceiverLine->setObjectName(QStringLiteral("ReceiverLine"));
        ReceiverLine->setGeometry(QRect(320, 140, 351, 40));
        ReceiverLine->setAutoFillBackground(false);
        ReceiverLine->setStyleSheet(QStringLiteral("border:0px;"));
        MailContent = new QPlainTextEdit(edit);
        MailContent->setObjectName(QStringLiteral("MailContent"));
        MailContent->setGeometry(QRect(320, 280, 671, 271));
        MailContent->setStyleSheet(QStringLiteral("border:0px;"));
        label_2 = new QLabel(edit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 150, 271, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color:rgb(156, 12, 39);"));
        label_3 = new QLabel(edit);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 220, 141, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color:rgb(156, 12, 39);"));
        SubjectLine = new QLineEdit(edit);
        SubjectLine->setObjectName(QStringLiteral("SubjectLine"));
        SubjectLine->setGeometry(QRect(320, 220, 520, 40));
        SubjectLine->setStyleSheet(QStringLiteral("border:0px;"));
        label_4 = new QLabel(edit);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(220, 280, 211, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color:rgb(156, 12, 39);"));
        Send = new QPushButton(edit);
        Send->setObjectName(QStringLiteral("Send"));
        Send->setGeometry(QRect(760, 570, 100, 30));
        Send->setFont(font);
        Send->setFocusPolicy(Qt::NoFocus);
        Send->setAutoFillBackground(false);
        Send->setStyleSheet(QLatin1String("background-color: rgba(193, 101, 110, 170);\n"
"border:0;"));
        Enclosure = new QPushButton(edit);
        Enclosure->setObjectName(QStringLiteral("Enclosure"));
        Enclosure->setGeometry(QRect(860, 230, 85, 27));
        Enclosure->setMaximumSize(QSize(1024, 625));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        Enclosure->setFont(font1);
        Enclosure->setFocusPolicy(Qt::NoFocus);
        Enclosure->setAutoFillBackground(false);
        Enclosure->setStyleSheet(QLatin1String("color:rgb(156, 12, 39);\n"
"border:0;\n"
"background-color: rgb(255, 235, 234);"));
        BCC = new QCheckBox(edit);
        BCC->setObjectName(QStringLiteral("BCC"));
        BCC->setGeometry(QRect(330, 180, 85, 40));
        BCC->setFont(font);
        BCC->setStyleSheet(QStringLiteral(""));
        CC = new QLineEdit(edit);
        CC->setObjectName(QStringLiteral("CC"));
        CC->setGeometry(QRect(680, 140, 301, 40));
        CC->setStyleSheet(QStringLiteral("border:0px;"));
        Save = new QPushButton(edit);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(890, 570, 100, 30));
        Save->setFont(font);
        Save->setFocusPolicy(Qt::NoFocus);
        Save->setAutoFillBackground(false);
        Save->setStyleSheet(QLatin1String("background-color: rgba(193, 101, 110, 170);\n"
"border:0;"));
        Write = new QPushButton(edit);
        Write->setObjectName(QStringLiteral("Write"));
        Write->setGeometry(QRect(50, 180, 150, 40));
        Write->setFont(font);
        Write->setFocusPolicy(Qt::NoFocus);
        Write->setAutoFillBackground(false);
        Write->setStyleSheet(QLatin1String("background-image: url(:/jpg/write.png);\n"
"border:0px;"));
        Inbox = new QPushButton(edit);
        Inbox->setObjectName(QStringLiteral("Inbox"));
        Inbox->setGeometry(QRect(50, 240, 150, 40));
        Inbox->setFont(font);
        Inbox->setFocusPolicy(Qt::NoFocus);
        Inbox->setStyleSheet(QLatin1String("background-image: url(:/jpg/inbox.png);\n"
"border:0;"));
        Dustbin = new QPushButton(edit);
        Dustbin->setObjectName(QStringLiteral("Dustbin"));
        Dustbin->setGeometry(QRect(50, 480, 150, 40));
        Dustbin->setFont(font);
        Dustbin->setFocusPolicy(Qt::NoFocus);
        Dustbin->setStyleSheet(QLatin1String("background-image: url(:/jpg/dustbin.png);\n"
"border:0;"));
        Logout = new QPushButton(edit);
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
        Help = new QPushButton(edit);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setGeometry(QRect(910, 40, 80, 30));
        Help->setFont(font2);
        Help->setFocusPolicy(Qt::NoFocus);
        Help->setAutoFillBackground(false);
        Help->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:0;"));
        Send_2 = new QPushButton(edit);
        Send_2->setObjectName(QStringLiteral("Send_2"));
        Send_2->setGeometry(QRect(50, 360, 150, 40));
        Send_2->setFont(font);
        Send_2->setFocusPolicy(Qt::NoFocus);
        Send_2->setAutoFillBackground(false);
        Send_2->setStyleSheet(QLatin1String("background-image: url(:/jpg/send.png);\n"
"border:0;"));
        label_7 = new QLabel(edit);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 100, 121, 31));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label_7->setFont(font3);
        label_8 = new QLabel(edit);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 150, 150, 400));
        label_8->setAutoFillBackground(false);
        label_8->setStyleSheet(QStringLiteral("background-color: rgb(222, 182, 181);"));
        Drafts = new QPushButton(edit);
        Drafts->setObjectName(QStringLiteral("Drafts"));
        Drafts->setGeometry(QRect(50, 420, 150, 40));
        Drafts->setFont(font);
        Drafts->setFocusPolicy(Qt::NoFocus);
        Drafts->setStyleSheet(QLatin1String("background-image: url(:/jpg/draft.png);\n"
"border:0;"));
        Contact = new QPushButton(edit);
        Contact->setObjectName(QStringLiteral("Contact"));
        Contact->setGeometry(QRect(50, 300, 150, 40));
        Contact->setFont(font);
        Contact->setFocusPolicy(Qt::NoFocus);
        Contact->setStyleSheet(QLatin1String("background-image: url(:/jpg/contact.png);\n"
"border:0;"));
        label = new QLabel(edit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 521, 51));
        QFont font4;
        font4.setPointSize(25);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        CC_2 = new QCheckBox(edit);
        CC_2->setObjectName(QStringLiteral("CC_2"));
        CC_2->setGeometry(QRect(680, 190, 301, 22));
        CC_2->setFont(font);
        CC_2->setStyleSheet(QStringLiteral(""));
        Close = new QPushButton(edit);
        Close->setObjectName(QStringLiteral("Close"));
        Close->setGeometry(QRect(630, 570, 100, 30));
        Close->setFont(font);
        Close->setFocusPolicy(Qt::NoFocus);
        Close->setAutoFillBackground(false);
        Close->setStyleSheet(QLatin1String("background-color: rgba(193, 101, 110, 170);\n"
"border:0;"));
        label_5 = new QLabel(edit);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 90, 211, 51));
        label_5->setFont(font);
        label_8->raise();
        ReceiverLine->raise();
        MailContent->raise();
        label_2->raise();
        label_3->raise();
        SubjectLine->raise();
        label_4->raise();
        Send->raise();
        Enclosure->raise();
        BCC->raise();
        CC->raise();
        Save->raise();
        Write->raise();
        Inbox->raise();
        Dustbin->raise();
        Logout->raise();
        Help->raise();
        Send_2->raise();
        label_7->raise();
        Drafts->raise();
        Contact->raise();
        label->raise();
        CC_2->raise();
        Close->raise();
        label_5->raise();

        retranslateUi(edit);

        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QWidget *edit)
    {
        edit->setWindowTitle(QApplication::translate("edit", "Edit", nullptr));
        label_2->setText(QApplication::translate("edit", "Receiver:", nullptr));
        label_3->setText(QApplication::translate("edit", "Subject:", nullptr));
        label_4->setText(QApplication::translate("edit", "Content:", nullptr));
        Send->setText(QApplication::translate("edit", "Send", nullptr));
        Enclosure->setText(QApplication::translate("edit", "Enclosure", nullptr));
        BCC->setText(QApplication::translate("edit", "BCC", nullptr));
        Save->setText(QApplication::translate("edit", "Save", nullptr));
        Write->setText(QApplication::translate("edit", "        Write", nullptr));
        Inbox->setText(QApplication::translate("edit", "        Inbox", nullptr));
        Dustbin->setText(QApplication::translate("edit", "        Dustbin", nullptr));
        Logout->setText(QApplication::translate("edit", "Logout", nullptr));
        Help->setText(QApplication::translate("edit", "Help", nullptr));
        Send_2->setText(QApplication::translate("edit", "        Send", nullptr));
        label_7->setText(QApplication::translate("edit", "Mail:", nullptr));
        label_8->setText(QString());
        Drafts->setText(QApplication::translate("edit", "        Drafts", nullptr));
        Contact->setText(QApplication::translate("edit", "        Contact", nullptr));
        label->setText(QApplication::translate("edit", "FengFeng Email", nullptr));
        CC_2->setText(QApplication::translate("edit", "Carbon Copy:(optional)", nullptr));
        Close->setText(QApplication::translate("edit", "Close", nullptr));
        label_5->setText(QApplication::translate("edit", "123456789@qq.com", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
