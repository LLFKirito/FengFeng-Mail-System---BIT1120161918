#ifndef INBOXWIDGET_H
#define INBOXWIDGET_H

#include <QWidget>
#include<QListWidgetItem>
#include<detail.h>

namespace Ui {
class InboxWidget;
}

class InboxWidget : public QWidget, public QListWidgetItem
{
    Q_OBJECT
    
public:
    explicit InboxWidget(QWidget *parent = 0);
    InboxWidget(const char* mail,const char* theme, const char* content, const char* time, QWidget *parent = 0);
    ~InboxWidget();
    
private slots:
    void on_Click_clicked();

signals:
    void ItemGoDetail(QString mail, QString subject, QString content, QString time);

private:
    Ui::InboxWidget *ui;
    Detail detail;
};

#endif // INBOXWIDGET_H
