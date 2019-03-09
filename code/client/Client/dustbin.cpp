#include "dustbin.h"
#include "ui_dustbin.h"
#include"QMessageBox"
#include "inboxwidget.h"
#include"login.h"

Dustbin::Dustbin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dustbin)
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
            QListWidgetItem *aItem = new QListWidgetItem(ui->DustbinList);
            aItem->setSizeHint(QSize(0,40));
            aItem->setFlags(0);
            ui->DustbinList->addItem(aItem);
            ui->DustbinList->setItemWidget(aItem,new InboxWidget("1234567890@qq.com","ThemeTheme"
                                                               , "contentcontentcontent", "2018 08 08"));
        }
    this-> setWindowFlags (Qt::WindowCloseButtonHint);
}

Dustbin::~Dustbin()
{
    delete ui;
}

void Dustbin::DustbinShow(QString username){
    ui->label_2->setText(username);
    this->show();
}

void Dustbin::on_Logout_clicked()
{
    this->close();
    emit DustbinGoLogin();
}

void Dustbin::on_Logout_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Dustbin::on_Help_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Dustbin::on_Help_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "Help", "Content!!!!!!!!!!!!!!!!!!!!!!.");
    message.exec();
}

void Dustbin::on_Write_clicked()
{
    this->close();
    emit DustbinGoEdit(Login::username);
}

void Dustbin::on_Write_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Dustbin::on_Inbox_clicked()
{
    this->close();
    emit DustbinGoInbox(Login::username);
}

void Dustbin::on_Inbox_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Dustbin::on_Contact_clicked()
{
    this->close();
    emit DustbinGoContact(Login::username);
}

void Dustbin::on_Contact_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Dustbin::on_Send_clicked()
{
    this->close();
    emit DustbinGoSend(Login::username);
}

void Dustbin::on_Send_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Dustbin::on_Drafts_clicked()
{
    this->close();
    emit DustbinGoDrafts(Login::username);
}

void Dustbin::on_Drafts_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Dustbin::on_Dustbin_2_clicked()
{

}

void Dustbin::on_Dustbin_2_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}
