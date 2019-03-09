#include "inbox.h"
#include "ui_inbox.h"
#include"QMessageBox"
#include "inboxwidget.h"
#include "json/json.h"
#include "login.h"

Inbox::Inbox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inbox)
{
    this->setAutoFillBackground(true);
    this->setGeometry(500,120,1024,625);
    QPalette bgPalette = this->palette();
     QPixmap bgImages = QPixmap(":/jpg/bgimg.jpg" ).scaled(1024,625);
    bgPalette.setBrush(QPalette::Background,QBrush(bgImages));
    this->setPalette(bgPalette);
    ui->setupUi(this);
    ui->label_2->setText(Login::username);

    this-> setWindowFlags (Qt::WindowCloseButtonHint);
}

Inbox::~Inbox()
{
    delete ui;
}

void Inbox::InboxShow(QString username){
    ui->label_2->setText(username);
    this->show();
}

void Inbox::on_Logout_clicked()
{
    this->close();
    emit InboxGoLogin();
}

void Inbox::on_Logout_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Inbox::on_Help_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void Inbox::on_Help_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "Help", "Content!!!!!!!!!!!!!!!!!!!!!!.");
    message.exec();
}

void Inbox::on_Write_clicked()
{
    this->close();
    emit InboxGoEdit(Login::username);
}

void Inbox::on_Write_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Inbox::on_Inbox_2_clicked()
{

}

void Inbox::on_Inbox_2_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Inbox::on_Contact_clicked()
{
    this->close();
    emit InboxGoContact(Login::username);
}

void Inbox::on_Contact_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Inbox::on_Send_clicked()
{
    this->close();
    emit InboxGoSend(Login::username);
}

void Inbox::on_Send_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Inbox::on_Drafts_clicked()
{
    this->close();
    emit InboxGoDrafts(Login::username);
}

void Inbox::on_Drafts_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Inbox::on_Dustbin_clicked()
{
    this->close();
    emit InboxGoDustbin(Login::username);
}

void Inbox::on_Dustbin_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void Inbox::on_btn_refresh_clicked()
{
    Json::Value root;
    root["op"] = "receive";
    root["recUser"] = Login::username.toStdString();
    static char buffer[1 << 15];
    strcpy(buffer, root.toStyledString().data());
    tcpSocket->write(buffer, 1 << 15);
    if (!tcpSocket->waitForReadyRead())
    {
        QMessageBox message(QMessageBox::Critical, "", "Refresh failed!");
        message.exec();
    }
    ui->InboxList->clear();
    int count = mails.size();
    for(int i = 0; i <count; i ++)
        {
            QListWidgetItem *aItem = new QListWidgetItem(ui->InboxList);
            aItem->setSizeHint(QSize(0,40));
            aItem->setFlags(0);
            ui->InboxList->addItem(aItem);
            ui->InboxList->setItemWidget(aItem,new InboxWidget(mails[i].sendUser.toStdString().data(),
                                                               mails[i].theme.toStdString().data(),
                                                               mails[i].content.toStdString().data(),
                                                               "2018 08 08"));
        }

    /*for (auto& i : mails)
    {
        qDebug() << i.sendUser;
        qDebug() << i.theme;
        qDebug() << i.content;
    }*/
}

Inbox::Mail::Mail(QString sendUser, QString theme, QString content)
    : sendUser(sendUser), theme(theme), content(content)
{
}

QTcpSocket* Inbox::tcpSocket;
std::vector<Inbox::Mail> Inbox::mails;
