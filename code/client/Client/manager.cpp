#include "manager.h"
#include "ui_manager.h"
#include "login.h"
#include <QPixmap>
#include <QPalette>
#include <QBitmap>
#include<QDebug>
#include<QMessageBox>
manager::manager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manager)
{
    this->setAutoFillBackground(true);
    this->setGeometry(500,120,1024,625);
    QPalette bgPalette = this->palette();
    QPixmap bgImages = QPixmap(":/jpg/bgimg.jpg" ).scaled(1024,625);
    bgPalette.setBrush(QPalette::Background,QBrush(bgImages));
    this->setPalette(bgPalette);
    ui->setupUi(this);
    this-> setWindowFlags (Qt::WindowCloseButtonHint);
}

manager::~manager()
{
    delete ui;
}



void manager::ManagerShow(QString username){
    ui->label_2->setText(username);
    this->show();
}

void manager::on_Write_clicked()
{
    this->close();
    emit ManagerGoEdit(Login::username);
}

void manager::on_Inbox_clicked()
{
    this->close();
    emit ManagerGoInbox(Login::username);
}

void manager::on_Drafts_clicked()
{
    this->close();
    emit ManagerGoDrafts(Login::username);
}

void manager::on_Dustbin_clicked()
{
    this->close();
    emit ManagerGoDustbin(Login::username);
}

void manager::on_Logout_clicked()
{
    this->close();
    emit ManagerGoLogin();
}

void manager::on_Help_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "Help", "Content!!!!!!!!!!!!!!!!!!!!!!.");
    message.exec();
}

void manager::on_Contact_clicked()
{
    this->close();
    emit ManagerGoContact(Login::username);
}


void manager::on_Write_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void manager::on_Inbox_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void manager::on_Contact_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void manager::on_Drafts_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void manager::on_Dustbin_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void manager::on_Logout_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void manager::on_Help_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void manager::on_Send_clicked()
{
    this->close();
    emit ManagerGoSend(Login::username);
}

void manager::on_Send_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}
