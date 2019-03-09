#ifndef DUSTBIN_H
#define DUSTBIN_H

#include <QWidget>

namespace Ui {
class Dustbin;
}

class Dustbin : public QWidget
{
    Q_OBJECT
    
public:
    explicit Dustbin(QWidget *parent = 0);
    ~Dustbin();

signals:
    void DustbinGoManager(QString);
    void DustbinGoLogin();
    void DustbinGoContact(QString);
    void DustbinGoSend(QString);
    void DustbinGoDrafts(QString);
    void DustbinGoInbox(QString);
    void DustbinGoEdit(QString);

private slots:
    void on_Logout_clicked();
    void on_Logout_released();
    void on_Help_released();
    void on_Help_clicked();
    void on_Write_clicked();
    void on_Write_released();
    void on_Inbox_clicked();
    void on_Inbox_released();
    void on_Contact_clicked();
    void on_Contact_released();
    void on_Send_clicked();
    void on_Send_released();
    void on_Drafts_clicked();
    void on_Drafts_released();
    void on_Dustbin_2_clicked();
    void on_Dustbin_2_released();

    void DustbinShow(QString);
    
private:
    Ui::Dustbin *ui;
};

#endif // DUSTBIN_H
