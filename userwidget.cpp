#include "userwidget.h"
#include "ui_userwidget.h"

Userwidget::Userwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Userwidget)
{
    ui->setupUi(this);
}

Userwidget::~Userwidget()
{
    delete ui;
}
