#include "inboxwidget.h"
#include "ui_inboxwidget.h"

InboxWidget::InboxWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InboxWidget)
{
    ui->setupUi(this);
}

InboxWidget::InboxWidget(const char* mail,const char* theme,
    const char* content, const char* time, QWidget *parent):
    QWidget(parent),
    ui(new Ui::InboxWidget)
{
    ui->setupUi(this);
    ui->content->setText(content);
    ui->mail->setText(mail);
    ui->theme->setText(theme);
    ui->time->setText(time);
}


InboxWidget::~InboxWidget()
{
    delete ui;
}

void InboxWidget::on_Click_clicked()
{
    QString content= ui->content->text();
    QString theme = ui->theme->text();
    QString time = ui->time->text();
    QString mail = ui->mail->text();
    QObject::connect(this,SIGNAL(ItemGoDetail(QString, QString, QString, QString)),
                     &detail,SLOT(DetailShow(QString, QString, QString, QString)));
    emit ItemGoDetail(mail, theme, content, time);
    this->setFocusPolicy(Qt::NoFocus);
}
