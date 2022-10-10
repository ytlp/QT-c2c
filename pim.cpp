#include "pim.h"
#include "ui_pim.h"

PIM::PIM(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PIM)
{
    ui->setupUi(this);
}

PIM::~PIM()
{
    delete ui;
}
