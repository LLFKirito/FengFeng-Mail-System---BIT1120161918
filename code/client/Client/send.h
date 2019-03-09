#ifndef SEND_H
#define SEND_H

#include <QWidget>

namespace Ui {
class Send;
}

class Send : public QWidget
{
    Q_OBJECT
    
public:
    explicit Send(QWidget *parent = 0);
    ~Send();

signals:
    void SendGoManager(QString);
    void SendGoLogin();
    void SendGoContact(QString);
    void SendGoDrafts(QString);
    void SendGoDustbin(QString);
    void SendGoInbox(QString);
    void SendGoEdit(QString);
    
private slots:
    void on_Logout_clicked();
    void on_Logout_released();
    void on_Help_released();
    void on_Help_clicked();
    void on_Write_clicked();
    void on_Write_released();
    void on_Inbox_2_clicked();
    void on_Inbox_2_released();
    void on_Contact_clicked();
    void on_Contact_released();
    void on_Send_2_clicked();
    void on_Send_2_released();
    void on_Drafts_clicked();
    void on_Drafts_released();
    void on_Dustbin_clicked();
    void on_Dustbin_released();

    void SendShow(QString);

private:
    Ui::Send *ui;
};

#endif // SEND_H
