#include "adminwidget.h"
#include "ui_adminwidget.h"

Adminwidget::Adminwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Adminwidget)
{
    ui->setupUi(this);
    commodity->set_cnt(0);
    order->set_cnt(0);
    users->set_cnt(0);
    read_commodity(commodity);
    read_order(order);
    read_user(users);
    connect(ui->pushButton_2,&QPushButton::clicked,this,[=](){
       QString name=ui->lineEdit->text();
       //Adminwidget admin;
       //admin.SearchCommodity(commodityName);
       this->model = new QStandardItemModel;   //创建一个标准的条目模型
       this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

       this->model->setHorizontalHeaderItem(0, new QStandardItem("Commodity_ID") );
       this->model->setHorizontalHeaderItem(1, new QStandardItem("Commodity_Name"));
       this->model->setHorizontalHeaderItem(2, new QStandardItem("Price"));
       this->model->setHorizontalHeaderItem(3, new QStandardItem("Discription"));
       this->model->setHorizontalHeaderItem(4, new QStandardItem("Date"));
       this->model->setHorizontalHeaderItem(5, new QStandardItem("Seller_ID"));
       this->model->setHorizontalHeaderItem(6, new QStandardItem("Status"));

       this->ui->tableView->setColumnWidth(0, 100);    //设置列的宽度
       this->ui->tableView->setColumnWidth(1, 150);
       this->ui->tableView->setColumnWidth(2, 50);
       this->ui->tableView->setColumnWidth(3, 50);
       this->ui->tableView->setColumnWidth(4, 100);
       this->ui->tableView->setColumnWidth(5, 150);
       this->ui->tableView->setColumnWidth(6, 150);
       for(int i=0;i<commodity->get_cnt();++i)
       {
           if(QString(QLatin1String(commodity[i].get_commodityname()))==name)
           {

               this->model->setItem(i, 0, new QStandardItem(commodity[i].get_commodityid() ) );
               this->model->setItem(i, 1, new QStandardItem(commodity[i].get_commodityname() ) );
               this->model->setItem(i, 2, new QStandardItem(QString::number(commodity[i].get_price(),10,1 )) );
               this->model->setItem(i, 3, new QStandardItem(commodity[i].get_discription() ) );
               this->model->setItem(i, 4, new QStandardItem(commodity[i].get_date() ) );
               this->model->setItem(i, 5, new QStandardItem(commodity[i].get_sellerid() ) );
               this->model->setItem(i, 6, new QStandardItem(commodity[i].get_condition() ) );
           }
       }

    });
    connect(ui->pushButton_5,&QPushButton::clicked,this,[=](){//shi fou ji shi geng xin
       QString userid=ui->lineEdit->text();
       for(int i=0;i<users->get_cnt();++i)
       {
           if(QString(QLatin1String(users[i].get_userid()))==userid)
           {
               users[i].set_status(1);
               break;
           }
       }
       write_users(users);
    });

    connect(ui->pushButton_6,&QPushButton::clicked,this,[=](){//shi fou ji shi geng xin
       QString commodityid=ui->lineEdit->text();
       for(int i=0;i<commodity->get_cnt();++i)
       {
           if(QString(QLatin1String(commodity[i].get_commodityid()))==commodityid)
           {
               commodity[i].set_condition("removed");
               break;
           }
       }
       write_commodity(commodity);
    });


}

Adminwidget::~Adminwidget()
{
    delete ui;
}

void Adminwidget::on_pushButton_clicked()//all commodity
{
        this->model = new QStandardItemModel;   //创建一个标准的条目模型
        this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

        this->model->setHorizontalHeaderItem(0, new QStandardItem("Commodity_ID") );
        this->model->setHorizontalHeaderItem(1, new QStandardItem("Commodity_Name"));
        this->model->setHorizontalHeaderItem(2, new QStandardItem("Price"));
        this->model->setHorizontalHeaderItem(3, new QStandardItem("Discription"));
        this->model->setHorizontalHeaderItem(4, new QStandardItem("Seller_ID"));
        this->model->setHorizontalHeaderItem(5, new QStandardItem("ShelfTime"));
        this->model->setHorizontalHeaderItem(6, new QStandardItem("Status"));

        this->ui->tableView->setColumnWidth(0, 100);    //设置列的宽度
        this->ui->tableView->setColumnWidth(1, 150);
        this->ui->tableView->setColumnWidth(2, 50);
        this->ui->tableView->setColumnWidth(3, 50);
        this->ui->tableView->setColumnWidth(4, 100);
        this->ui->tableView->setColumnWidth(5, 150);
        this->ui->tableView->setColumnWidth(6, 150);

        for(int i=0;i<commodity->get_cnt();++i)
        {

              this->model->setItem(i, 0, new QStandardItem(commodity[i].get_commodityid() ) );
              this->model->setItem(i, 1, new QStandardItem(commodity[i].get_commodityname() ) );
              this->model->setItem(i, 2, new QStandardItem(QString::number(commodity[i].get_price(),10,1 )) );
              this->model->setItem(i, 3, new QStandardItem(commodity[i].get_discription() ) );
              this->model->setItem(i, 4, new QStandardItem(commodity[i].get_sellerid() ) );
              this->model->setItem(i, 5, new QStandardItem(commodity[i].get_date() ) );
              this->model->setItem(i, 6, new QStandardItem(commodity[i].get_condition() ) );
        }
}

void Adminwidget::on_pushButton_3_clicked()//all orders
{
    this->model = new QStandardItemModel;   //创建一个标准的条目模型
    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

    this->model->setHorizontalHeaderItem(0, new QStandardItem("Order_ID") );
    this->model->setHorizontalHeaderItem(1, new QStandardItem("Commodity_ID"));
    this->model->setHorizontalHeaderItem(2, new QStandardItem("Price"));
    this->model->setHorizontalHeaderItem(3, new QStandardItem("Date"));
    this->model->setHorizontalHeaderItem(4, new QStandardItem("Seller_ID"));
    this->model->setHorizontalHeaderItem(5, new QStandardItem("Buyer_ID"));
    this->model->setHorizontalHeaderItem(6, new QStandardItem("Status"));

    this->ui->tableView->setColumnWidth(0, 100);    //设置列的宽度
    this->ui->tableView->setColumnWidth(1, 150);
    this->ui->tableView->setColumnWidth(2, 50);
    this->ui->tableView->setColumnWidth(3, 50);
    this->ui->tableView->setColumnWidth(4, 100);
    this->ui->tableView->setColumnWidth(5, 150);
    this->ui->tableView->setColumnWidth(6, 150);

    for(int i=0;i<order->get_cnt();++i)
    {

          this->model->setItem(i, 0, new QStandardItem(order[i].get_orderid() ) );
          this->model->setItem(i, 1, new QStandardItem(order[i].get_commodityid() ) );
          this->model->setItem(i, 2, new QStandardItem(QString::number(order[i].get_amount(),10,1 )) );
          this->model->setItem(i, 3, new QStandardItem(order[i].get_date() ) );
          this->model->setItem(i, 4, new QStandardItem(order[i].get_sellerid() ) );
          this->model->setItem(i, 5, new QStandardItem(order[i].get_buyerid() ) );
        if(order[i].get_commoditystatus()==0)
          this->model->setItem(i, 6, new QStandardItem("normal" ) );
        else
          this->model->setItem(i, 6, new QStandardItem("unnormal" ) );
    }
}

void Adminwidget::on_pushButton_4_clicked()//all users
{
    this->model = new QStandardItemModel;   //创建一个标准的条目模型
    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

    this->model->setHorizontalHeaderItem(0, new QStandardItem("User_ID") );
    this->model->setHorizontalHeaderItem(1, new QStandardItem("User_name"));
    this->model->setHorizontalHeaderItem(2, new QStandardItem("PassWord"));
    this->model->setHorizontalHeaderItem(3, new QStandardItem("Tele"));
    this->model->setHorizontalHeaderItem(4, new QStandardItem("Address"));
    this->model->setHorizontalHeaderItem(5, new QStandardItem("balance"));
    this->model->setHorizontalHeaderItem(6, new QStandardItem("Status"));

    this->ui->tableView->setColumnWidth(0, 100);    //设置列的宽度
    this->ui->tableView->setColumnWidth(1, 150);
    this->ui->tableView->setColumnWidth(2, 50);
    this->ui->tableView->setColumnWidth(3, 50);
    this->ui->tableView->setColumnWidth(4, 100);
    this->ui->tableView->setColumnWidth(5, 150);
    this->ui->tableView->setColumnWidth(6, 150);

    for(int i=0;i<users->get_cnt();++i)
    {

          this->model->setItem(i, 0, new QStandardItem(users[i].get_userid() ) );
          this->model->setItem(i, 1, new QStandardItem(users[i].get_username() ) );

          this->model->setItem(i, 2, new QStandardItem(users[i].get_key() ) );
          this->model->setItem(i, 3, new QStandardItem(users[i].get_tele() ) );
          this->model->setItem(i, 4, new QStandardItem(users[i].get_location() ) );
         this->model->setItem(i, 5, new QStandardItem(QString::number(users[i].get_balance(),10,1 )) );
        if(users[i].get_status()==0)
          this->model->setItem(i, 6, new QStandardItem("normal" ) );
        else
          this->model->setItem(i, 6, new QStandardItem("unnormal" ) );
    }
}

//void Adminwidget::SearchCommodity(QString name)
//{
//    this->model = new QStandardItemModel;   //创建一个标准的条目模型
//    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

//    this->model->setHorizontalHeaderItem(0, new QStandardItem("Commodity_ID") );
//    this->model->setHorizontalHeaderItem(1, new QStandardItem("Commodity_Name"));
//    this->model->setHorizontalHeaderItem(2, new QStandardItem("Price"));
//    this->model->setHorizontalHeaderItem(3, new QStandardItem("Discription"));
//    this->model->setHorizontalHeaderItem(4, new QStandardItem("Date"));
//    this->model->setHorizontalHeaderItem(5, new QStandardItem("Seller_ID"));
//    this->model->setHorizontalHeaderItem(6, new QStandardItem("Status"));

//    this->ui->tableView->setColumnWidth(0, 100);    //设置列的宽度
//    this->ui->tableView->setColumnWidth(1, 150);
//    this->ui->tableView->setColumnWidth(2, 50);
//    this->ui->tableView->setColumnWidth(3, 50);
//    this->ui->tableView->setColumnWidth(4, 100);
//    this->ui->tableView->setColumnWidth(5, 150);
//    this->ui->tableView->setColumnWidth(6, 150);
//    for(int i=0;i<commodity->get_cnt();++i)
//    {
//        if(QString(QLatin1String(commodity[i].get_commodityname()))==name)
//        {

//            this->model->setItem(i, 0, new QStandardItem(commodity[i].get_commodityid() ) );
//            this->model->setItem(i, 1, new QStandardItem(commodity[i].get_commodityname() ) );
//            this->model->setItem(i, 2, new QStandardItem(QString::number(commodity[i].get_price(),10,1 )) );
//            this->model->setItem(i, 3, new QStandardItem(commodity[i].get_discription() ) );
//            this->model->setItem(i, 4, new QStandardItem(commodity[i].get_date() ) );
//            this->model->setItem(i, 5, new QStandardItem(commodity[i].get_sellerid() ) );
//            this->model->setItem(i, 6, new QStandardItem(commodity[i].get_condition() ) );
//        }
//    }
//}

void Adminwidget::closeEvent(QCloseEvent *)
{
    emit ExitWin();
}
