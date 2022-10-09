#ifndef ADMINWIDGET_H
#define ADMINWIDGET_H

#include <QWidget>

#include <QStandardItemModel>
#include "commodity.h"
#include "order.h"
#include"Users.h"
#include <QCloseEvent>
namespace Ui {
class Adminwidget;
}

class Adminwidget : public QWidget
{
    Q_OBJECT

public:
    explicit Adminwidget(QWidget *parent = nullptr);
    ~Adminwidget();
    void closeEvent(QCloseEvent *);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    //void SearchCommodity(QString name);


private:
    Ui::Adminwidget *ui;
    QStandardItemModel* model;
    Commodity_class commodity[100];
    Order_class order[100];
    Users_class users[100];

signals:
    void ExitWin();//新建一个信号槽
};


#endif // ADMINWIDGET_H
