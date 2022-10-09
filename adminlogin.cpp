#include "adminlogin.h"
#include "ui_adminlogin.h"

Adminlogin::Adminlogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Adminlogin)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        adminID=ui->adminIDEdit->text();
        adminkey=ui->adminkeyEdit->text();
        if(adminID=="admin"&&adminkey=="123456")
        {
            QMessageBox::information(this,"Login","Success");

            adminwidget=new Adminwidget;
            adminwidget->show();
            this->hide();
            connect(adminwidget,SIGNAL(ExitWin()),this,SLOT(show()));
        }
    });

}

Adminlogin::~Adminlogin()
{
    delete ui;
}
