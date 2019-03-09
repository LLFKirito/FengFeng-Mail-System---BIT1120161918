#include "edit.h"
#include "ui_edit.h"
#include<QFileDialog>
#include<QIcon>
#include"QMessageBox"
#include"QString"

#include "login.h"

edit::edit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::edit)
{
    this->setAutoFillBackground(true);
    this->setGeometry(500,120,1024,625);
    QPalette bgPalette = this->palette();
     QPixmap bgImages = QPixmap(":/jpg/bgimg.jpg" ).scaled(1024,625);
    bgPalette.setBrush(QPalette::Background,QBrush(bgImages));
    this->setPalette(bgPalette);
    ui->setupUi(this);
    ui->label_5->setText(Login::username);
    this-> setWindowFlags (Qt::WindowCloseButtonHint);


}


edit::~edit()
{
    delete ui;
}

void edit::EditShow(QString username){
    ui->label_5->setText(username);
    this->show();
}

void edit::on_Send_clicked()
{
    QString recUser = ui->ReceiverLine->text();
    QString theme = ui->SubjectLine->text();
    QString content = ui->MailContent->toPlainText();

    Json::Value root;
    root["op"] = "send";
    root["sendUser"] = Login::username.toStdString();
    root["recUser"] = recUser.toStdString();
    root["theme"] = theme.toStdString();
    root["content"] = content.toStdString();
    static char buffer[1 << 15];
    strcpy(buffer, root.toStyledString().data());
    tcpSocket->write(buffer, 1 << 15);
    if (!tcpSocket->waitForReadyRead())
    {
        QMessageBox message(QMessageBox::Critical, "", "Login failed!");
        message.exec();
    }

    this->close();
    emit EditGoManager(Login::username);
}


void edit::on_Enclosure_clicked()
{
    QFileDialog::getOpenFileName(this);
}

void edit::on_Close_clicked()
{
    this->close();
    emit EditGoManager(Login::username);
}

void edit::on_Logout_clicked()
{
    this->close();
    emit EditGoLogin();
}

void edit::on_Logout_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void edit::on_Help_released()
{
     this->setFocusPolicy(Qt::NoFocus);
}

void edit::on_Help_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "Help", "Content!!!!!!!!!!!!!!!!!!!!!!.");
    message.exec();
}

void edit::on_Write_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void edit::on_Inbox_clicked()
{
    this->close();
    emit EditGoInbox(Login::username);
}

void edit::on_Inbox_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void edit::on_Contact_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void edit::on_Contact_clicked()
{
    this->close();
    emit EditGoContact(Login::username);
}

void edit::on_Send_2_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void edit::on_Drafts_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void edit::on_Dustbin_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void edit::on_Close_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void edit::on_Send_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void edit::on_Save_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void edit::on_Enclosure_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void edit::on_Save_clicked()
{
    this->close();
    emit EditGoInbox(Login::username);
}

void edit::on_Write_clicked()
{

}

void edit::on_Send_2_clicked()
{
    this->close();
    emit EditGoSend(Login::username);
}

void edit::on_Drafts_clicked()
{
    this->close();
    emit EditGoDrafts(Login::username);
}

void edit::on_Dustbin_clicked()
{
    this->close();
    emit EditGoDustbin(Login::username);
}

QTcpSocket* edit::tcpSocket;
