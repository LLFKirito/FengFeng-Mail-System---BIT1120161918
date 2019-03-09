#ifndef INBOX_H
#define INBOX_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class Inbox;
}

class Inbox : public QWidget
{
    Q_OBJECT
    
public:
    class Mail
    {
    public:
        Mail(QString, QString, QString);

        QString sendUser;
        QString theme;
        QString content;
    };

    static QTcpSocket* tcpSocket;
    static std::vector<Mail> mails;

    explicit Inbox(QWidget *parent = 0);
    ~Inbox();
    

signals:
    void InboxGoManager(QString);
    void InboxGoLogin();
    void InboxGoContact(QString);
    void InboxGoDrafts(QString);
    void InboxGoDustbin(QString);
    void InboxGoSend(QString);
    void InboxGoEdit(QString);

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
    void on_Send_clicked();
    void on_Send_released();
    void on_Drafts_clicked();
    void on_Drafts_released();
    void on_Dustbin_clicked();
    void on_Dustbin_released();

    void InboxShow(QString);

    void on_btn_refresh_clicked();

private:
    Ui::Inbox *ui;
};

#endif // INBOX_H
