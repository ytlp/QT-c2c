#include "sellerwidget.h"
#include "ui_sellerwidget.h"

SellerWidget::SellerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SellerWidget)
{
    ui->setupUi(this);
    commodity->set_cnt(0);
    read_commodity(commodity);
    order->set_cnt(0);
    read_order(order);
    seller=ui->sellerEdit->text();
}

SellerWidget::~SellerWidget()
{
    delete ui;
}

void SellerWidget::sendData_seller(QString data)
{
    ui->sellerEdit->setText(data); //在textEdit中显示传递的数据
}

void SellerWidget::on_pushButton_clicked()
{
    seller=ui->sellerEdit->text();
    c_name=ui->lineEdit->text();
    price=ui->lineEdit_2->text();
    dis=ui->lineEdit_3->text();
    number=ui->lineEdit_4->text();
    if(c_name.isEmpty()||price.isEmpty()||dis.isEmpty()||number.isEmpty())
    {
        QMessageBox::information(this,"Fail","Please finish all of the information first!");
    }
    else
    {

        char commodity_id[7]="M008";

            if (b < 10)
            {
                char d[15] = { 'M','0','0' };
                char c[5];
                sprintf(c,"%d",b);
                strcat(d, c);
                strcpy(commodity_id, d);
            }
            else
                if (b >= 10 && b < 100)
                {
                    char d[15] = { 'M','0'};
                    char c[5];
                    sprintf(c,"%d",b);
                    strcat(d, c);
                    strcpy(commodity_id, d);
                }
                else
                    if (b >= 100 && b < 1000)
                    {
                        char d[15] = { 'M'};
                        char c[5];
                        sprintf(c,"%d",b);
                        strcat(d, c);
                        strcpy(commodity_id, d);
                    }
            ++b;
                time_t now = time(0);
                tm* ltm = localtime(&now);
                int year = 1900 + ltm->tm_year;
                int month = 1 + ltm->tm_mon;
                int date = ltm->tm_mday;
                char y[20], m[10], d[10];
                sprintf(y,"%d",year);
                sprintf(m,"%d",month);
                sprintf(d,"%d",date);
                strcat(y, "-");
                if (month >= 10)
                    strcat(y, m);
                else
                {
                    strcat(y, "0");
                    strcat(y, m);
                }
                strcat(y, "-");
                if (date >= 10)
                    strcat(y, d);
                else
                {
                    strcat(y, "0");
                    strcat(y, d);
                }

                int sec=ltm->tm_min*60+ltm->tm_hour*3600+ltm->tm_sec;
                int day=ltm->tm_mon*30+ltm->tm_mday;
                int commodity_cnt= commodity->get_cnt();
                QString status="onAuction";
                commodity[commodity_cnt].set_commodity(commodity_id,c_name.toLatin1().data(),price.toDouble(),number.toInt(),dis.toLatin1().data(),seller.toLatin1().data(),y,status.toLatin1().data(),sec,day);
                commodity->add_cnt();
                write_commodity(commodity);
    }
}

void SellerWidget::on_pushButton_2_clicked()
{
    seller=ui->sellerEdit->text();
    this->model = new QStandardItemModel;   //创建一个标准的条目模型
    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

    this->model->setHorizontalHeaderItem(0, new QStandardItem("ID") );
    this->model->setHorizontalHeaderItem(1, new QStandardItem("Name"));
    this->model->setHorizontalHeaderItem(2, new QStandardItem("Price"));
    this->model->setHorizontalHeaderItem(3, new QStandardItem("date"));
    this->model->setHorizontalHeaderItem(4, new QStandardItem("status"));
    int cnt=0;
    for(int i=0;i<commodity->get_cnt();++i)
    {
        if(seller==QLatin1String(commodity[i].get_sellerid()))
        {

            this->model->setItem(cnt, 0, new QStandardItem(commodity[i].get_commodityid() ) );
            this->model->setItem(cnt, 1, new QStandardItem(commodity[i].get_commodityname() ) );
            this->model->setItem(cnt, 2, new QStandardItem(QString::number(commodity[i].get_price(),10,1 )) );
            this->model->setItem(cnt, 3, new QStandardItem(commodity[i].get_date() ) );
            this->model->setItem(cnt, 4, new QStandardItem(commodity[i].get_condition() ) );
            ++cnt;
        }
    }


}

void SellerWidget::on_pushButton_3_clicked()
{
    seller=ui->sellerEdit->text();
    QString c_id=ui->idEdit_2->text();
    QString price_2=ui->priceEdit_2->text();
    for(int i=0;i<commodity->get_cnt();++i)
    {
         if(commodity[i].get_sellerid()==seller)
         {
        if(c_id==QLatin1String(commodity[i].get_commodityid()))
        {
            commodity[i].set_price(price_2.toDouble());
             QMessageBox::information(this,"Modify price","success");
        }
         }
         else
         {
             QMessageBox::information(this,"Modify price","The commodity is not your release!");
         }
    }
    write_commodity(commodity);
}

void SellerWidget::on_pushButton_4_clicked()
{
    seller=ui->sellerEdit->text();
    QString c_id=ui->idEdit_3->text();
    QString dis_2=ui->disEdit_3->text();
    for(int i=0;i<commodity->get_cnt();++i)
    {
        if(c_id==QLatin1String(commodity[i].get_commodityid()))
        {
            if(commodity[i].get_sellerid()==seller)
            {
            commodity[i].set_dis(dis_2.toLatin1().data());
             QMessageBox::information(this,"Modify price","success");
            }
            else
            {
                QMessageBox::information(this,"Modify price","The commodity is not your release!");
            }
        }
    }
    write_commodity(commodity);
}

void SellerWidget::on_pushButton_5_clicked()
{
    seller=ui->sellerEdit->text();
    QString c_id=ui->idEdit_4->text();
    for(int i=0;i<commodity->get_cnt();++i)
    {
        if(c_id==QLatin1String(commodity[i].get_commodityid()))
        {
            if(QLatin1String(commodity[i].get_sellerid())==seller)
            {
                if(strcmp(commodity[i].get_condition(),"onAuction")==0)
                {
                    commodity[i].set_condition("removed");
                    QMessageBox::information(this,"Delete","success");
                }
                else
                {
                    QMessageBox::information(this,"Delete","The commodity has been removed!");
                }
            }
            else
            {
                QMessageBox::information(this,"Delete","The commodity is not your release!");
            }
        }
    }
    write_commodity(commodity);
}

void SellerWidget::on_pushButton_6_clicked()
{
    seller =ui->sellerEdit->text();
    this->model = new QStandardItemModel;   //创建一个标准的条目模型
    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

    this->model->setHorizontalHeaderItem(0, new QStandardItem("Commodity_ID") );
    this->model->setHorizontalHeaderItem(1, new QStandardItem("Order_ID"));
    this->model->setHorizontalHeaderItem(2, new QStandardItem("Price"));
    this->model->setHorizontalHeaderItem(3, new QStandardItem("date"));
    this->model->setHorizontalHeaderItem(4, new QStandardItem("seller"));
    this->model->setHorizontalHeaderItem(5, new QStandardItem("buyer"));
    int cnt=0;
    for(int i=0;i<order->get_cnt();++i)
    {
        if(QLatin1String(order[i].get_sellerid())==seller)
        {
            this->model->setItem(cnt, 0, new QStandardItem(order[i].get_commodityid() ) );
            this->model->setItem(cnt, 1, new QStandardItem(order[i].get_orderid() ) );
            this->model->setItem(cnt, 2, new QStandardItem(QString::number(order[i].get_amount(),10,1 )) );
            this->model->setItem(cnt, 3, new QStandardItem(order[i].get_date() ) );
            this->model->setItem(cnt, 4, new QStandardItem(order[i].get_sellerid() ) );
            this->model->setItem(cnt, 5, new QStandardItem(order[i].get_buyerid() ) );
            ++cnt;
        }
    }

}
