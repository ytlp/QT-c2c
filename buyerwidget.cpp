#include "buyerwidget.h"
#include "ui_buyerwidget.h"

BuyerWidget::BuyerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuyerWidget)
{
    ui->setupUi(this);
}

BuyerWidget::~BuyerWidget()
{
    delete ui;
}
