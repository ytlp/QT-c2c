#include "buyerwidget.h"
#include "ui_buyerwidget.h"

BuyerWidget::BuyerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuyerWidget)
{
    ui->setupUi(this);
    commodity->set_cnt(0);
    read_commodity(commodity);
    order->set_cnt(0);
    read_order(order);
    bidlist->set_cnt(0);
    read_bidlist(bidlist);
    buyer=ui->buyerEdit->text();
}

BuyerWidget::~BuyerWidget()
{
    delete ui;
}

void BuyerWidget::sendData_buyer(QString data)
{
    ui->buyerEdit->setText(data); //在textEdit中显示传递的数据
}

void BuyerWidget::on_pushButton_clicked()
{
    this->model = new QStandardItemModel;   //创建一个标准的条目模型
    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

    this->model->setHorizontalHeaderItem(0, new QStandardItem("ID") );
    this->model->setHorizontalHeaderItem(1, new QStandardItem("Name"));
    this->model->setHorizontalHeaderItem(2, new QStandardItem("Price"));
    this->model->setHorizontalHeaderItem(3, new QStandardItem("Seller"));
    this->model->setHorizontalHeaderItem(4, new QStandardItem("Date"));
    int cnt=0;

    for(int i=0;i<commodity->get_cnt();++i)
    {
        if(strcmp(commodity[i].get_condition(),"onAuction")==0)
        {
            this->model->setItem(cnt, 0, new QStandardItem(commodity[i].get_commodityid() ) );
            this->model->setItem(cnt, 1, new QStandardItem(commodity[i].get_commodityname() ) );
            this->model->setItem(cnt, 2, new QStandardItem(QString::number(commodity[i].get_price(),10,1 )) );
            this->model->setItem(cnt, 3, new QStandardItem(commodity[i].get_sellerid() ) );
            this->model->setItem(cnt, 4, new QStandardItem(commodity[i].get_date() ) );
            ++cnt;
        }
    }
}

void BuyerWidget::on_pushButton_2_clicked()
{
    QString name=ui->nameEdit->text();
    this->model = new QStandardItemModel;   //创建一个标准的条目模型
    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

    this->model->setHorizontalHeaderItem(0, new QStandardItem("ID") );
    this->model->setHorizontalHeaderItem(1, new QStandardItem("Name"));
    this->model->setHorizontalHeaderItem(2, new QStandardItem("Price"));
    this->model->setHorizontalHeaderItem(3, new QStandardItem("Seller"));
    this->model->setHorizontalHeaderItem(4, new QStandardItem("Date"));
    int cnt=0;

    for(int i=0;i<commodity->get_cnt();++i)
    {
        if(strcmp(commodity[i].get_condition(),"onAuction")==0&&name==QLatin1String(commodity[i].get_commodityname()))
        {
            this->model->setItem(cnt, 0, new QStandardItem(commodity[i].get_commodityid() ) );
            this->model->setItem(cnt, 1, new QStandardItem(commodity[i].get_commodityname() ) );
            this->model->setItem(cnt, 2, new QStandardItem(QString::number(commodity[i].get_price(),10,1 )) );
            this->model->setItem(cnt, 3, new QStandardItem(commodity[i].get_sellerid() ) );
            this->model->setItem(cnt, 4, new QStandardItem(commodity[i].get_date() ) );
            ++cnt;
        }
    }
}

void BuyerWidget::on_pushButton_3_clicked()//order
{
    buyer=ui->buyerEdit->text();
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
        if(QLatin1String(order[i].get_buyerid())==buyer)
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

void BuyerWidget::on_pushButton_4_clicked()//detail
{
    QString id=ui->detailEdit->text();
    this->model = new QStandardItemModel;   //创建一个标准的条目模型
    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

    this->model->setHorizontalHeaderItem(0, new QStandardItem("ID") );
    this->model->setHorizontalHeaderItem(1, new QStandardItem("Name"));
    this->model->setHorizontalHeaderItem(2, new QStandardItem("Price"));
    this->model->setHorizontalHeaderItem(3, new QStandardItem("Seller"));
    this->model->setHorizontalHeaderItem(4, new QStandardItem("Date"));
    this->model->setHorizontalHeaderItem(5, new QStandardItem("Discription"));
    int cnt=0;

    for(int i=0;i<commodity->get_cnt();++i)
    {
        if(strcmp(commodity[i].get_condition(),"onAuction")==0&&id==QLatin1String(commodity[i].get_commodityid()))
        {
            this->model->setItem(cnt, 0, new QStandardItem(commodity[i].get_commodityid() ) );
            this->model->setItem(cnt, 1, new QStandardItem(commodity[i].get_commodityname() ) );
            this->model->setItem(cnt, 2, new QStandardItem(QString::number(commodity[i].get_price(),10,1 )) );
            this->model->setItem(cnt, 3, new QStandardItem(commodity[i].get_sellerid() ) );
            this->model->setItem(cnt, 4, new QStandardItem(commodity[i].get_date() ) );
            this->model->setItem(cnt, 5, new QStandardItem(commodity[i].get_discription() ) );
            ++cnt;
        }
    }
}

void BuyerWidget::on_pushButton_5_clicked()//keyword search
{
    QString keyword=ui->keywordEdit->text();
    this->model = new QStandardItemModel;   //创建一个标准的条目模型
    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

    this->model->setHorizontalHeaderItem(0, new QStandardItem("ID") );
    this->model->setHorizontalHeaderItem(1, new QStandardItem("Name"));
    this->model->setHorizontalHeaderItem(2, new QStandardItem("Price"));
    this->model->setHorizontalHeaderItem(3, new QStandardItem("Seller"));
    this->model->setHorizontalHeaderItem(4, new QStandardItem("Date"));
    int cnt=0;

    for(int i=0;i<commodity->get_cnt();++i)
    {
        if(strcmp(commodity[i].get_condition(),"onAuction")==0&&strstr(commodity[i].get_commodityname(),keyword.toLatin1().data())!=NULL)
        {
            this->model->setItem(cnt, 0, new QStandardItem(commodity[i].get_commodityid() ) );
            this->model->setItem(cnt, 1, new QStandardItem(commodity[i].get_commodityname() ) );
            this->model->setItem(cnt, 2, new QStandardItem(QString::number(commodity[i].get_price(),10,1 )) );
            this->model->setItem(cnt, 4, new QStandardItem(commodity[i].get_sellerid() ) );
            this->model->setItem(cnt, 3, new QStandardItem(commodity[i].get_date() ) );
            ++cnt;
        }
    }
}

void BuyerWidget::on_pushButton_6_clicked()
{
    QString id=ui->bididEdit->text();
    QString price=ui->bidpriceEdit->text();
    buyer=ui->buyerEdit->text();
    int on_flag=0;
    int find_commodity=-1;
    if(!id.isEmpty()&&!price.isEmpty())
    {
    for(int i=0;i<commodity->get_cnt();++i)
    {
        if(id==QLatin1String(commodity[i].get_commodityid()))
        {
            on_flag=1;
            if(strcmp(commodity[i].get_condition(),"onAuction")==0)
            {
                find_commodity=i;
                on_flag=2;
                if(commodity[i].get_price()>price.toDouble())//bao jia di yu di jia
                {
                    on_flag=3;
                }
            }
        }
    }
    if(on_flag==1)
        QMessageBox::information(this,"Bidding","The commodity has been removed!");
    else if(on_flag==0)
    {
         QMessageBox::information(this,"Bidding","The commodity does not exist!");
    }
    else if(on_flag==3)
    {
        QMessageBox::information(this,"Bidding","The quotation is lower than the low price!");
    }
    else
    {
        int bid_flag=0;
        for(int j=0;j<bidlist->get_cnt();++j)
        {
            if(QLatin1String(bidlist[j].get_commodityid())==id)
            {
                bid_flag=1;
            }
        }
        if(bid_flag==1)
        {
            QMessageBox::information(this,"Bidding","The commodity has been offered,please go to 'Modify' to change");
        }
        else
        {
            time_t now = time(0);
            tm* ltm = localtime(&now);
            int sec=ltm->tm_min*60+ltm->tm_hour*3600+ltm->tm_sec;
            int day=ltm->tm_mon*30+ltm->tm_mday;
            bidlist[bidlist->get_cnt()].set_bidlist(buyer.toLatin1().data(),id.toLatin1().data(),commodity[find_commodity].get_commodityname(),price.toDouble(),sec,day,0);
            bidlist->add_cnt();
            write_bidlist(bidlist);
            QMessageBox::information(this,"Bidding","success!");
        }
    }
    }

}

void BuyerWidget::on_pushButton_7_clicked()
{
    QString id=ui->bididEdit->text();
    QString price=ui->bidpriceEdit->text();
    buyer=ui->buyerEdit->text();
    int on_flag=0;
    int find_commodity=-1;
    if(!id.isEmpty()&&!price.isEmpty())
    {
    for(int i=0;i<commodity->get_cnt();++i)
    {
        if(id==QLatin1String(commodity[i].get_commodityid()))
        {
            on_flag=1;
            if(strcmp(commodity[i].get_condition(),"onAuction")==0)
            {
                find_commodity=i;
                on_flag=2;
                if(commodity[i].get_price()>price.toDouble())//bao jia di yu di jia
                {
                    on_flag=3;
                }
            }
        }
    }
    if(on_flag==1)
        QMessageBox::information(this,"Bidding","The commodity has been removed!");
    else if(on_flag==0)
    {
         QMessageBox::information(this,"Bidding","The commodity does not exist!");
    }
    else if(on_flag==3)
    {
        QMessageBox::information(this,"Bidding","The quotation is lower than the low price!");
    }
    else
    {
        int bid_flag=0;
        int find_bid=-1;
        for(int j=0;j<bidlist->get_cnt();++j)
        {
            if(QLatin1String(bidlist[j].get_commodityid())==id)
            {
                bid_flag=1;
                find_bid=j;
            }
        }
        if(bid_flag==0)
        {
            QMessageBox::information(this,"Bidding","The commodity has bot been offered,please go to 'Bid'");
        }
        else
        {
            if(bidlist[find_bid].get_condition()==1)
            {
                QMessageBox::information(this,"Bidding","The offer is invalid");
            }
            {
                time_t now = time(0);
                tm* ltm = localtime(&now);
                int sec=ltm->tm_min*60+ltm->tm_hour*3600+ltm->tm_sec;
                int day=ltm->tm_mon*30+ltm->tm_mday;
                bidlist[find_bid].set_money(price.toDouble());
                bidlist[find_bid].set_sec(sec);
                bidlist[find_bid].set_day(day);
                write_bidlist(bidlist);
                QMessageBox::information(this,"Modify","success!");
            }
        }
    }
    }

}
