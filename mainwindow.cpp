#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    mainLogin  = new QPushButton("User login in",this);
//    mainLogin->show();
//    mainLogin->move(250,100);

//    mainRegister=new QPushButton("User regieter",this);
//    mainRegister->show();
//    mainRegister->move(250,150);

//    mainAdmin=new QPushButton("Admin",this);
//    mainAdmin->show();
//    mainAdmin->move(250,200);

//    resize(600,400);
//    setFixedSize(600,400);

      setWindowTitle("Main Menu");
      //read_commodity(commodity);

    //this->admin=new Adminwindow(this);
    //connect(mainLogin,&QPushButton::clicked,&admin,&QWidget::close);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_3_clicked()//admin
{
    //this->hide();
    adminlogin=new Adminlogin;
    adminlogin->show();
    //this->show();

}
