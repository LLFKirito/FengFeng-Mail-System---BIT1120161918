#ifndef LOGIN_H
#define LOGIN_H
#include"register.h"
#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT
    
public:
    explicit Login(QWidget *parent = 0);
    ~Login();

    static QTcpSocket* tcpSocket;
    static uint32_t userId;
    static QString username;
    
private slots:
    void on_btn_register_clicked();
    void on_btn_login_clicked();

    void LoginShow();

    void on_btn_register_released();

    void on_btn_login_released();

signals:
    void LoginGoManager(QString);

private:
    Ui::Login *ui;
    Register *r;
};

#endif // LOGIN_H
