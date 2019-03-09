/********************************************************************************
** Form generated from reading UI file 'inboxwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INBOXWIDGET_H
#define UI_INBOXWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InboxWidget
{
public:
    QLabel *mail;
    QLabel *theme;
    QLabel *content;
    QLabel *time;
    QFrame *line;
    QPushButton *Click;

    void setupUi(QWidget *InboxWidget)
    {
        if (InboxWidget->objectName().isEmpty())
            InboxWidget->setObjectName(QStringLiteral("InboxWidget"));
        InboxWidget->resize(679, 46);
        mail = new QLabel(InboxWidget);
        mail->setObjectName(QStringLiteral("mail"));
        mail->setGeometry(QRect(10, 10, 221, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        mail->setFont(font);
        mail->setStyleSheet(QLatin1String("font-weight:bold;\n"
"font-size:16px;"));
        theme = new QLabel(InboxWidget);
        theme->setObjectName(QStringLiteral("theme"));
        theme->setGeometry(QRect(220, 10, 121, 31));
        QFont font1;
        font1.setPointSize(13);
        theme->setFont(font1);
        content = new QLabel(InboxWidget);
        content->setObjectName(QStringLiteral("content"));
        content->setGeometry(QRect(350, 10, 201, 31));
        content->setFont(font1);
        content->setStyleSheet(QStringLiteral("color:rgba(11,10,10,90);"));
        time = new QLabel(InboxWidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(560, 10, 111, 31));
        time->setFont(font1);
        time->setStyleSheet(QStringLiteral("color:rgba(11,10,10,90);"));
        line = new QFrame(InboxWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-70, 30, 751, 20));
        line->setStyleSheet(QStringLiteral("color:rgba(11,10,10,90);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        Click = new QPushButton(InboxWidget);
        Click->setObjectName(QStringLiteral("Click"));
        Click->setGeometry(QRect(0, 0, 741, 61));
        Click->setFocusPolicy(Qt::NoFocus);
        Click->setAutoFillBackground(false);
        Click->setStyleSheet(QStringLiteral("border:0;"));

        retranslateUi(InboxWidget);

        QMetaObject::connectSlotsByName(InboxWidget);
    } // setupUi

    void retranslateUi(QWidget *InboxWidget)
    {
        InboxWidget->setWindowTitle(QApplication::translate("InboxWidget", "Form", nullptr));
        mail->setText(QApplication::translate("InboxWidget", "1234567890@qq.com", nullptr));
        theme->setText(QApplication::translate("InboxWidget", "ThemeTheme", nullptr));
        content->setText(QApplication::translate("InboxWidget", "ContentContentContent", nullptr));
        time->setText(QApplication::translate("InboxWidget", "2018/09/06", nullptr));
        Click->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InboxWidget: public Ui_InboxWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INBOXWIDGET_H
