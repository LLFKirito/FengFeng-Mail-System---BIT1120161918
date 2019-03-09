#ifndef REGISTER_H
#define REGISTER_H

#include <QMainWindow>
#include <QTcpSocket>

namespace Ui {
class Register;
}

class Register : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Register(QWidget *parent = 0);
    ~Register();

    static QTcpSocket* tcpSocket;
    
private slots:
    void on_btn_submit_clicked();

    void on_btn_submit_released();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
