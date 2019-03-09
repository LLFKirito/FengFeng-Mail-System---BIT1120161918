#include "contactwidget.h"
#include "ui_contactwidget.h"
#include<string>

using namespace std;

ContactWidget::ContactWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContactWidget)
{
    ui->setupUi(this);
}

ContactWidget::ContactWidget(const char* name,const char* mail,QWidget *parent):
    QWidget(parent),
    ui(new Ui::ContactWidget)
{
    ui->setupUi(this);
    ui->ContactMail->setText(mail);
    ui->ContactName->setText(name);
}

ContactWidget::~ContactWidget()
{
    delete ui;
}

void ContactWidget::on_Click_clicked()
{
    QString mail=ui->ContactMail->text();
    QObject::connect(this,SIGNAL(ItemGoEdit(QString)),&hhh,SLOT(EditShow(QString)));
    emit ItemGoEdit(mail);
    this->setFocusPolicy(Qt::NoFocus);
}
