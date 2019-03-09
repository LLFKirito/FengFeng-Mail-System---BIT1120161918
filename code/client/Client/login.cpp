#include "login.h"
#include "ui_login.h"
#include "register.h"
#include <stdio.h>
#include <qapplication.h>

#include <QDebug>
#include <QFileDialog>
#include "json/json.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    this->setAutoFillBackground(true);
    this->setGeometry(500,120,1024,625);
    QPalette bgPalette = this->palette();
     QPixmap bgImages = QPixmap(":/jpg/logbg.jpg" ).scaled(1024,625);
    bgPalette.setBrush(QPalette::Background,QBrush(bgImages));
    this->setPalette(bgPalette);
    ui->setupUi(this);
}


Login::~Login()
{
    delete ui;
}

void Login::on_btn_register_clicked()
{
    r = new Register(this);
    r->show();
}

void Login::LoginShow(){
    this->show();
}

void Login::on_btn_login_clicked()
{
    QString username = ui->edit_username->text();
    QString password = ui->edit_password->text();
    Json::Value root;
    root["op"] = "login";
    root["username"] = username.toStdString();
    root["password"] = password.toStdString();
    static char buffer[1 << 15];
    strcpy(buffer, root.toStyledString().data());
    tcpSocket->write(buffer, 1 << 15);
    tcpSocket->waitForReadyRead();
    if (userId)
    {
        Login::username = username;
        emit LoginGoManager(username);
        this->close();
    }
}

void Login::on_btn_register_released()
{

    this->setFocusPolicy(Qt::NoFocus);
}

void Login::on_btn_login_released()
{

    this->setFocusPolicy(Qt::NoFocus);
}

QTcpSocket* Login::tcpSocket;
uint32_t Login::userId;
QString Login::username = "FengFeng";
