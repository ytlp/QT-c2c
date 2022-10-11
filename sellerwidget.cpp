#include "sellerwidget.h"
#include "ui_sellerwidget.h"

SellerWidget::SellerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SellerWidget)
{
    ui->setupUi(this);
}

SellerWidget::~SellerWidget()
{
    delete ui;
}
