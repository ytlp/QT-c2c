#ifndef SELLERWIDGET_H
#define SELLERWIDGET_H

#include <QWidget>

namespace Ui {
class SellerWidget;
}

class SellerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SellerWidget(QWidget *parent = nullptr);
    ~SellerWidget();

private:
    Ui::SellerWidget *ui;
};

#endif // SELLERWIDGET_H
