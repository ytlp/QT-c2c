#ifndef SELLERWIDGET_H
#define SELLERWIDGET_H

#include <QWidget>
#include "commodity.h"
#include <QMessageBox>
#include <QStandardItemModel>
#include<ctime>
#include "order.h"

namespace Ui {
class SellerWidget;
}

class SellerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SellerWidget(QWidget *parent = nullptr);
    ~SellerWidget();
    void sendData_seller(QString userID);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::SellerWidget *ui;
    Commodity_class commodity[100];
    Order_class order[100];
    QString c_name;
    QString price;
    QString dis;
    QString number;
    QString seller;
    QStandardItemModel* model;
};

#endif // SELLERWIDGET_H
