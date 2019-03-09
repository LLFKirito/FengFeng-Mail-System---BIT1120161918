#ifndef EDIT_H
#define EDIT_H

#include <QWidget>
#include <QTcpSocket>

#include "json/json.h"

namespace Ui {
class edit;
}

class edit : public QWidget
{
    Q_OBJECT
    
public:
    static QTcpSocket* tcpSocket;

    explicit edit(QWidget *parent = 0);
    ~edit();
    
private slots:
    void EditShow(QString);
    void on_Send_clicked();
    void on_Enclosure_clicked();


    void on_Close_clicked();

    void on_Logout_clicked();

    void on_Logout_released();

    void on_Help_released();

    void on_Help_clicked();

    void on_Write_released();

    void on_Inbox_clicked();

    void on_Inbox_released();

    void on_Contact_released();

    void on_Contact_clicked();

    void on_Send_2_released();

    void on_Drafts_released();

    void on_Dustbin_released();

    void on_Close_released();

    void on_Send_released();

    void on_Save_released();

    void on_Enclosure_released();

    void on_Save_clicked();

    void on_Write_clicked();

    void on_Send_2_clicked();

    void on_Drafts_clicked();

    void on_Dustbin_clicked();

signals:
    void EditGoInbox(QString);
    void EditGoManager(QString);
    void EditGoLogin();
    void EditGoContact(QString);
    void EditGoSend(QString);
    void EditGoDrafts(QString);
    void EditGoDustbin(QString);

private:
    Ui::edit *ui;
    //AddEnclosure *add;
};

#endif // EDIT_H
