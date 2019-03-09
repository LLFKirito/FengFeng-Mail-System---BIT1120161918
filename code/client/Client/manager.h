#ifndef MANAGER_H
#define MANAGER_H

#include <QWidget>

namespace Ui {
class manager;
}

class manager : public QWidget
{
    Q_OBJECT
    
public:
    explicit manager(QWidget *parent = 0);
    ~manager();

    
private slots:
    void on_Write_clicked();
    void ManagerShow(QString);

    void on_Inbox_clicked();
    void on_Drafts_clicked();
    void on_Dustbin_clicked();
    void on_Logout_clicked();
    void on_Help_clicked();
    void on_Contact_clicked();
    void on_Write_released();
    void on_Inbox_released();
    void on_Contact_released();
    void on_Drafts_released();
    void on_Dustbin_released();
    void on_Logout_released();
    void on_Help_released();
    void on_Send_clicked();
    void on_Send_released();

signals:
    void ManagerGoEdit(QString);
    void ManagerGoLogin();
    void ManagerGoInbox(QString);
    void ManagerGoContact(QString);
    void ManagerGoSend(QString);
    void ManagerGoDrafts(QString);
    void ManagerGoDustbin(QString);

private:
    Ui::manager *ui;
};

#endif // MANAGER_H
