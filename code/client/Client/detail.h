#ifndef DETAIL_H
#define DETAIL_H

#include <QWidget>

namespace Ui {
class Detail;
}

class Detail : public QWidget
{
    Q_OBJECT
    
public:
    explicit Detail(QWidget *parent = 0);
    ~Detail();
    
private slots:
    void DetailShow(QString);
    void DetailShow(QString, QString, QString, QString);

    void on_Help_clicked();
    void on_Logout_clicked();

    void on_Back_clicked();

    void on_Back_released();


private:
    Ui::Detail *ui;
};

#endif // DETAIL_H
