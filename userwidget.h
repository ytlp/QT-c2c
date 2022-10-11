#ifndef USERWIDGET_H
#define USERWIDGET_H

#include <QWidget>
#include "pim.h"
#include"sellerwidget.h"
#include "buyerwidget.h"

namespace Ui {
class Userwidget;
}

class Userwidget : public QWidget
{
    Q_OBJECT

public:
    explicit Userwidget(QWidget *parent = nullptr);
    ~Userwidget();
    void sendData(QString userID);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Userwidget *ui;
    PIM * pim;
    SellerWidget* seller;
    BuyerWidget* buyer;
};

#endif // USERWIDGET_H
