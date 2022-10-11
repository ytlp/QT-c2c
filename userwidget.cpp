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

void Userwidget::on_pushButton_clicked()//PIM
{
    pim=new PIM;
    pim->sendData_pim(ui->idEdit->text());
    pim->show();
}

void Userwidget::sendData(QString data)
{
    ui->idEdit->setText(data); //在textEdit中显示传递的数据
}

void Userwidget::on_pushButton_3_clicked()
{
    seller=new SellerWidget;
    seller->sendData_seller(ui->idEdit->text());
    seller->show();
}

void Userwidget::on_pushButton_2_clicked()
{
    buyer=new BuyerWidget;
    buyer->sendData_buyer(ui->idEdit->text());
    buyer->show();
}
