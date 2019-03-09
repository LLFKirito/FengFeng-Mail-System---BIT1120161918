#include "detail.h"
#include "ui_detail.h"
#include "login.h"
#include "QMessageBox"

Detail::Detail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Detail)
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


void Detail::DetailShow(QString sender, QString subject, QString maildetail, QString time)
{
    ui->MailDetail->setText(maildetail);
    ui->SubjectDetail->setText(subject);
    ui->SenderDetail->setText(sender);
    ui->TimeDetail->setText(time);
    this->show();
}

Detail::~Detail()
{
    delete ui;
}

void Detail::DetailShow(QString username){
    ui->label_2->setText(username);
    this->show();
}

void Detail::on_Help_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "Help", "Content!!!!!!!!!!!!!!!!!!!!!!.");
    message.exec();
}

void Detail::on_Logout_clicked()
{
    this->close();
}


void Detail::on_Back_clicked()
{
    this->close();
}

void Detail::on_Back_released()
{
    this->setFocusPolicy(Qt::NoFocus);
}


