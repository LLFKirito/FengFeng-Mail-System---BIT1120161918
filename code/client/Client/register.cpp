#include "register.h"
#include "ui_register.h"
#include "json/json.h"

Register::Register(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Register)
{
    this->setAutoFillBackground(true);
    this->setGeometry(500,120,1024,625);
    QPalette bgPalette = this->palette();
     QPixmap bgImages = QPixmap(":/jpg/logbg.jpg" ).scaled(1024,625);
    bgPalette.setBrush(QPalette::Background,QBrush(bgImages));
    this->setPalette(bgPalette);
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_btn_submit_clicked()
{
    QString username = ui->edit_address->text();
    QString password = ui->edit_password->text();
    Json::Value root;
    root["op"] = "register";
    root["username"] = username.toStdString();
    root["password"] = password.toStdString();
    static char buffer[1 << 15];
    strcpy(buffer, root.toStyledString().data());
    tcpSocket->write(buffer, 1 << 15);
    tcpSocket->waitForReadyRead();

    this->close();
}

void Register::on_btn_submit_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}

QTcpSocket* Register::tcpSocket;
