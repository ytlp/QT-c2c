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

void PIM::sendData_pim(QString data)
{
    ui->idEdit->setText(data); //在textEdit中显示传递的数据
}

void PIM::on_pushButton_clicked()//view
{
    QString id=ui->idEdit->text();
    this->model = new QStandardItemModel;   //创建一个标准的条目模型
    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

    this->model->setHorizontalHeaderItem(0, new QStandardItem("User_Name") );
    this->model->setHorizontalHeaderItem(1, new QStandardItem("Tele"));
    this->model->setHorizontalHeaderItem(2, new QStandardItem("Address"));
    this->model->setHorizontalHeaderItem(3, new QStandardItem("Balance"));

    this->ui->tableView->setColumnWidth(0, 100);    //设置列的宽度
    this->ui->tableView->setColumnWidth(1, 150);
    this->ui->tableView->setColumnWidth(2, 150);
    this->ui->tableView->setColumnWidth(3, 50);
    users->set_cnt(0);
    read_user(users);
    for(int i=0;i<users->get_cnt();++i)
    {
        if(QString(QLatin1String(users[i].get_userid()))==id)
        {
            this->model->setItem(1, 0, new QStandardItem(users[i].get_username() ) );
            this->model->setItem(1, 1, new QStandardItem(users[i].get_tele() ) );
            this->model->setItem(1, 2, new QStandardItem(users[i].get_location() ) );
            this->model->setItem(1, 3, new QStandardItem(QString::number(users[i].get_balance(),10,1 )) );

        }
    }
}

void PIM::on_pushButton_2_clicked()//address
{
    QString id=ui->idEdit->text();
    QString address =ui->addressEdit->text();
    users->set_cnt(0);
    read_user(users);
    //if(!address.isEmpty())
    //{
        for(int i=0;i<users->get_cnt();++i)
        {
            if(QString(QLatin1String(users[i].get_userid()))==id)
            {

                users[i].set_location(address.toLatin1().data());
                //break;
            }
        }
        write_users(users);
        QMessageBox::information(this,"Modify","Success");
    //}
}

void PIM::on_pushButton_4_clicked()//tele
{
    QString id=ui->idEdit->text();
    QString tele =ui->teleEdit->text();
    users->set_cnt(0);
    read_user(users);
    //if(!address.isEmpty())
    //{
        for(int i=0;i<users->get_cnt();++i)
        {
            if(QString(QLatin1String(users[i].get_userid()))==id)
            {

                users[i].set_tele(tele.toLatin1().data());
                //break;
            }
        }
        write_users(users);
        QMessageBox::information(this,"Modify","Success");
    //}
}

void PIM::on_pushButton_3_clicked()//balance
{
    QString id=ui->idEdit->text();
    QString money =ui->moneyEdit->text();
    users->set_cnt(0);
    read_user(users);
    //if(!address.isEmpty())
    //{
        for(int i=0;i<users->get_cnt();++i)
        {
            if(QString(QLatin1String(users[i].get_userid()))==id)
            {

                users[i].set_balance(users[i].get_balance()+money.toDouble());
                //break;
            }
        }
        write_users(users);
        QMessageBox::information(this,"Modify","Success");
    //}
}
