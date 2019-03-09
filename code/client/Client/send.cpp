#include "send.h"
#include "ui_send.h"
#include"QMessageBox"
#include "inboxwidget.h"
#include "login.h"

Send::Send(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Send)
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
            QListWidgetItem *aItem = new QListWidgetItem(ui->SendList);
            aItem->setSizeHint(QSize(0,40));
            aItem->setFlags(0);
            ui->SendList->addItem(aItem);
            ui->SendList->setItemWidget(aItem,new InboxWidget("1234567890@qq.com","ThemeTheme"
                                                               , "contentcontentcontent", "2018 08 08"));
        }
    this-> setWindowFlags (Qt::WindowCloseButtonHint);
}

Send::~Send()
{
    delete ui;
}

void Send::SendShow(QString username){
    ui->label_2->setText(username);
    this->show();
}

void Send::on_Logout_clicked()
{
    this->close();
    emit SendGoLogin();
}

void Send::on_Logout_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Send::on_Help_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Send::on_Help_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "Help", "Content!!!!!!!!!!!!!!!!!!!!!!.");
    message.exec();
}

void Send::on_Write_clicked()
{
    this->close();
    emit SendGoEdit(Login::username);
}

void Send::on_Write_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Send::on_Inbox_2_clicked()
{
    this->close();
    emit SendGoInbox(Login::username);
}

void Send::on_Inbox_2_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Send::on_Contact_clicked()
{
    this->close();
    emit SendGoContact(Login::username);
}

void Send::on_Contact_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Send::on_Send_2_clicked()
{

}

void Send::on_Send_2_released()
{

    this->setFocusPolicy(Qt::NoFocus);
}

void Send::on_Drafts_clicked()
{
    this->close();
    emit SendGoDrafts(Login::username);
}

void Send::on_Drafts_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Send::on_Dustbin_clicked()
{
    this->close();
    emit SendGoDustbin(Login::username);
}

void Send::on_Dustbin_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}


