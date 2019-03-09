/********************************************************************************
** Form generated from reading UI file 'detail.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAIL_H
#define UI_DETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Detail
{
public:
    QPushButton *Help;
    QLabel *label;
    QLabel *label_3;
    QPushButton *Logout;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QTextBrowser *MailDetail;
    QLabel *SubjectDetail;
    QLabel *SenderDetail;
    QLabel *TimeDetail;
    QPushButton *Back;

    void setupUi(QWidget *Detail)
    {
        if (Detail->objectName().isEmpty())
            Detail->setObjectName(QStringLiteral("Detail"));
        Detail->resize(1024, 625);
        Detail->setMaximumSize(QSize(1024, 625));
        Detail->setAutoFillBackground(true);
        Help = new QPushButton(Detail);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setGeometry(QRect(910, 40, 80, 30));
        QFont font;
        font.setPointSize(12);
        Help->setFont(font);
        Help->setFocusPolicy(Qt::NoFocus);
        Help->setAutoFillBackground(false);
        Help->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:0;"));
        label = new QLabel(Detail);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 521, 51));
        label->setMaximumSize(QSize(1024, 625));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_3 = new QLabel(Detail);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 100, 121, 31));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        Logout = new QPushButton(Detail);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setGeometry(QRect(820, 40, 80, 30));
        Logout->setFont(font);
        Logout->setFocusPolicy(Qt::NoFocus);
        Logout->setAutoFillBackground(false);
        Logout->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);\n"
"border:0;"));
        label_2 = new QLabel(Detail);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 90, 211, 51));
        QFont font3;
        font3.setPointSize(15);
        label_2->setFont(font3);
        label_5 = new QLabel(Detail);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 210, 111, 21));
        label_5->setFont(font2);
        label_6 = new QLabel(Detail);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 290, 101, 17));
        label_6->setFont(font2);
        label_7 = new QLabel(Detail);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 370, 101, 17));
        label_7->setFont(font2);
        MailDetail = new QTextBrowser(Detail);
        MailDetail->setObjectName(QStringLiteral("MailDetail"));
        MailDetail->setGeometry(QRect(400, 210, 601, 291));
        MailDetail->setFont(font3);
        MailDetail->setStyleSheet(QStringLiteral("background-color:rgba(255, 255, 255, 150);"));
        SubjectDetail = new QLabel(Detail);
        SubjectDetail->setObjectName(QStringLiteral("SubjectDetail"));
        SubjectDetail->setGeometry(QRect(150, 250, 281, 21));
        SubjectDetail->setFont(font3);
        SenderDetail = new QLabel(Detail);
        SenderDetail->setObjectName(QStringLiteral("SenderDetail"));
        SenderDetail->setGeometry(QRect(150, 330, 211, 21));
        SenderDetail->setFont(font3);
        TimeDetail = new QLabel(Detail);
        TimeDetail->setObjectName(QStringLiteral("TimeDetail"));
        TimeDetail->setGeometry(QRect(150, 410, 161, 21));
        TimeDetail->setFont(font3);
        Back = new QPushButton(Detail);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setGeometry(QRect(870, 580, 100, 30));
        Back->setFont(font3);
        Back->setAutoFillBackground(false);
        Back->setStyleSheet(QLatin1String("background-color: rgba(193, 101, 110, 170);\n"
"border:0;"));

        retranslateUi(Detail);

        QMetaObject::connectSlotsByName(Detail);
    } // setupUi

    void retranslateUi(QWidget *Detail)
    {
        Detail->setWindowTitle(QApplication::translate("Detail", "Detail", nullptr));
        Help->setText(QApplication::translate("Detail", "Help", nullptr));
        label->setText(QApplication::translate("Detail", "FengFeng Email", nullptr));
        label_3->setText(QApplication::translate("Detail", "Mail:", nullptr));
        Logout->setText(QApplication::translate("Detail", "Logout", nullptr));
        label_2->setText(QApplication::translate("Detail", "123456789@qq.com", nullptr));
        label_5->setText(QApplication::translate("Detail", "Theme:", nullptr));
        label_6->setText(QApplication::translate("Detail", "Sender:", nullptr));
        label_7->setText(QApplication::translate("Detail", "Time:", nullptr));
        SubjectDetail->setText(QApplication::translate("Detail", "Hello World!", nullptr));
        SenderDetail->setText(QApplication::translate("Detail", "987654321@qq.com", nullptr));
        TimeDetail->setText(QApplication::translate("Detail", "2018.9.6", nullptr));
        Back->setText(QApplication::translate("Detail", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Detail: public Ui_Detail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAIL_H
