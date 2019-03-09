#ifndef DRAFTS_H
#define DRAFTS_H

#include <QWidget>

namespace Ui {
class Drafts;
}

class Drafts : public QWidget
{
    Q_OBJECT
    
public:
    explicit Drafts(QWidget *parent = 0);
    ~Drafts();
signals:
    void DraftsGoManager(QString);
    void DraftsGoLogin();
    void DraftsGoContact(QString);
    void DraftsGoSend(QString);
    void DraftsGoDustbin(QString);
    void DraftsGoInbox(QString);
    void DraftsGoEdit(QString);
    
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
    void on_Drafts_2_clicked();
    void on_Drafts_2_released();
    void on_Dustbin_clicked();
    void on_Dustbin_released();

    void DraftsShow(QString);

private:
    Ui::Drafts *ui;
};

#endif // DRAFTS_H
