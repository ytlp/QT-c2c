#ifndef BUYERWIDGET_H
#define BUYERWIDGET_H

#include <QWidget>
#include "commodity.h"
#include <QStandardItemModel>
#include"order.h"
#include"bidlist.h"
#include "QMessageBox"

namespace Ui {
class BuyerWidget;
}

class BuyerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BuyerWidget(QWidget *parent = nullptr);
    ~BuyerWidget();
    void sendData_buyer(QString userID);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::BuyerWidget *ui;
    Commodity_class commodity[100];
    Order_class order[100];
    Bidlist_class bidlist[100];
    QString buyer;
    QStandardItemModel* model;
};

#endif // BUYERWIDGET_H
