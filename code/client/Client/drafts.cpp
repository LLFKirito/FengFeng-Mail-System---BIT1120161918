#include "drafts.h"
#include "ui_drafts.h"
#include "QMessageBox"
#include "inboxwidget.h"
#include "login.h"

Drafts::Drafts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Drafts)
{
    this->setAutoFillBackground(true);
    this->setGeometry(500,120,1024,625);
    QPalette bgPalette = this->palette();
     QPixmap bgImages = QPixmap(":/jpg/bgimg.jpg" ).scaled(1024,625);
    bgPalette.setBrush(QPalette::Background,QBrush(bgImages));
    this->setPalette(bgPalette);

    ui->setupUi(this);
    ui->label_2->setText(Login::username);

    for(int i = 0; i < 20; i ++)
        {
            QListWidgetItem *aItem = new QListWidgetItem(ui->DraftList);
            aItem->setSizeHint(QSize(0,40));
            aItem->setFlags(0);
            ui->DraftList->addItem(aItem);
            ui->DraftList->setItemWidget(aItem,new InboxWidget("1234567890@qq.com","ThemeTheme"
                                                               , "contentcontentcontent", "2018 08 08"));
        }
    this-> setWindowFlags (Qt::WindowCloseButtonHint);
}

Drafts::~Drafts()
{
    delete ui;
}

void Drafts::DraftsShow(QString username){
    ui->label_2->setText(username);
    this->show();
}

void Drafts::on_Logout_clicked()
{
    this->close();
    emit DraftsGoLogin();
}

void Drafts::on_Logout_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Drafts::on_Help_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Drafts::on_Help_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "Help", "Content!!!!!!!!!!!!!!!!!!!!!!.");
    message.exec();
}

void Drafts::on_Write_clicked()
{
    this->close();
    emit DraftsGoEdit(Login::username);
}

void Drafts::on_Write_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Drafts::on_Inbox_clicked()
{
    this->close();
    emit DraftsGoInbox(Login::username);
}

void Drafts::on_Inbox_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Drafts::on_Contact_clicked()
{
    this->close();
    emit DraftsGoContact(Login::username);
}

void Drafts::on_Contact_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Drafts::on_Send_clicked()
{
    this->close();
    emit DraftsGoSend(Login::username);
}

void Drafts::on_Send_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Drafts::on_Drafts_2_clicked()
{

}

void Drafts::on_Drafts_2_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Drafts::on_Dustbin_clicked()
{
    this->close();
    emit DraftsGoDustbin(Login::username);
}

void Drafts::on_Dustbin_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}
