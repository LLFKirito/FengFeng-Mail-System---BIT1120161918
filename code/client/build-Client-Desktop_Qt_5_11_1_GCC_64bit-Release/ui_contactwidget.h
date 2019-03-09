/********************************************************************************
** Form generated from reading UI file 'contactwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTWIDGET_H
#define UI_CONTACTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactWidget
{
public:
    QLabel *ContactName;
    QLabel *ContactMail;
    QFrame *line;
    QPushButton *Click;

    void setupUi(QWidget *ContactWidget)
    {
        if (ContactWidget->objectName().isEmpty())
            ContactWidget->setObjectName(QStringLiteral("ContactWidget"));
        ContactWidget->resize(737, 42);
        ContactWidget->setStyleSheet(QStringLiteral(""));
        ContactName = new QLabel(ContactWidget);
        ContactName->setObjectName(QStringLiteral("ContactName"));
        ContactName->setGeometry(QRect(20, 10, 211, 31));
        QFont font;
        font.setPointSize(13);
        ContactName->setFont(font);
        ContactMail = new QLabel(ContactWidget);
        ContactMail->setObjectName(QStringLiteral("ContactMail"));
        ContactMail->setGeometry(QRect(290, 10, 321, 31));
        ContactMail->setFont(font);
        line = new QFrame(ContactWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 30, 741, 20));
        line->setStyleSheet(QLatin1String("color:rgba(11,10,10,90);\n"
""));
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        Click = new QPushButton(ContactWidget);
        Click->setObjectName(QStringLiteral("Click"));
        Click->setGeometry(QRect(0, -10, 741, 61));
        Click->setFocusPolicy(Qt::NoFocus);
        Click->setAutoFillBackground(false);
        Click->setStyleSheet(QStringLiteral("border:0;"));

        retranslateUi(ContactWidget);

        QMetaObject::connectSlotsByName(ContactWidget);
    } // setupUi

    void retranslateUi(QWidget *ContactWidget)
    {
        ContactWidget->setWindowTitle(QApplication::translate("ContactWidget", "Form", nullptr));
        ContactName->setText(QApplication::translate("ContactWidget", "nametest", nullptr));
        ContactMail->setText(QApplication::translate("ContactWidget", "123456789@qq.com", nullptr));
        Click->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ContactWidget: public Ui_ContactWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTWIDGET_H
