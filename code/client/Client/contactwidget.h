#ifndef CONTACTWIDGET_H
#define CONTACTWIDGET_H

#include <QWidget>
#include"QListWidgetItem"
#include"edit.h"
namespace Ui {
class ContactWidget;
}

class ContactWidget : public QWidget, public QListWidgetItem
{
    Q_OBJECT
    
public:
    explicit ContactWidget(QWidget *parent = 0);
    ContactWidget(const char* name,const char* mail,QWidget *parent = 0);
    ~ContactWidget();
    
private slots:
    void on_Click_clicked();

signals:

    void ItemGoEdit(QString mail);

private:
    Ui::ContactWidget *ui;
    edit hhh;

};

#endif // CONTACTWIDGET_H
