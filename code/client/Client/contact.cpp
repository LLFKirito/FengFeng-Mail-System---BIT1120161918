#include "contact.h"
#include "ui_contact.h"
#include<contactwidget.h>
#include <QPushButton>
#include<QListWidget>
#include<QMessageBox>
#include<QListWidgetItem>
#include<string>
#include "login.h"

using namespace std;

Contact::Contact(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Contact)
{
    this->setAutoFillBackground(true);
    this->setGeometry(500,120,1024,625);
    QPalette bgPalette = this->palette();
     QPixmap bgImages = QPixmap(":/jpg/bgimg.jpg" ).scaled(1024,625);
    bgPalette.setBrush(QPalette::Background,QBrush(bgImages));
    this->setPalette(bgPalette);

    ui->setupUi(this);
    ui->label_2->setText(Login::username);

    for(int i = 0; i <20; i ++)
        {
            QListWidgetItem *aItem = new QListWidgetItem(ui->ContactInfoList);
            aItem->setSizeHint(QSize(0,40));
            aItem->setFlags(0);
            ui->ContactInfoList->addItem(aItem);
            ui->ContactInfoList->setItemWidget(aItem,new ContactWidget("123", "123"));
        }

    this->setFixedSize(1024,625);
    this-> setWindowFlags (Qt::WindowCloseButtonHint);
}

Contact::~Contact()
{
    delete ui;
}

void Contact::ContactShow(QString username)
{
    ui->label_2->setText(username);
    this->show();
}

void Contact::on_Write_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Contact::on_Inbox_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Contact::on_Contact2_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Contact::on_Send_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Contact::on_Drafts_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Contact::on_Dustbin_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Contact::on_Help_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "Help", "Content!!!!!!!!!!!!!!!!!!!!!!.");
    message.exec();
}

void Contact::on_Write_clicked()
{
    this->close();
    emit ContactGoEdit(Login::username);
}

void Contact::on_Inbox_clicked()
{
    this->close();
    emit ContactGoInbox(Login::username);
}

void Contact::on_Logout_2_clicked()
{
    this->close();
    emit ContactGoLogin();
}



void Contact::on_Send_clicked()
{
    this->close();
    emit ContactGoSend(Login::username);
}

void Contact::on_Drafts_clicked()
{
    this->close();
    emit ContactGoDrafts(Login::username);
}

void Contact::on_Dustbin_clicked()
{
    this->close();
    emit ContactGoDustbin(Login::username);
}
