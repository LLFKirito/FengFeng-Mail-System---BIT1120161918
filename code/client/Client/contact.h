#ifndef CONTACT_H
#define CONTACT_H

#include <QMainWindow>

namespace Ui {
class Contact;
}

class Contact : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Contact(QWidget *parent = 0);
    ~Contact();
    
private slots:
    void ContactShow(QString);

    void on_Write_released();
    void on_Inbox_released();
    void on_Contact2_released();
    void on_Send_released();
    void on_Drafts_released();
    void on_Dustbin_released();
    void on_Help_clicked();
    void on_Write_clicked();
    void on_Inbox_clicked();
    void on_Logout_2_clicked();

    void on_Send_clicked();

    void on_Drafts_clicked();

    void on_Dustbin_clicked();

signals:
    void ContactGoEdit(QString);
    void ContactGoLogin();
    void ContactGoInbox(QString);
    void ContactGoSend(QString);
    void ContactGoDrafts(QString);
    void ContactGoDustbin(QString);

private:
    Ui::Contact *ui;
};

#endif // CONTACT_H
