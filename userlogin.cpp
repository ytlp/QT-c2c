#include "userlogin.h"
#include "ui_userlogin.h"

UserLogin::UserLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserLogin)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        name=ui->nameEdit->text();
        password=ui->keyEdit->text();
        QString userID;
        int flag =0;
        users->set_cnt(0);
        read_user(users);
        for(int i=0;i<users->get_cnt();++i)
        {
            if(QString(QLatin1String(users[i].get_username()))==name&&QString(QLatin1String(users[i].get_key()))==password)
        {
                flag=1;
                userID=QString(QLatin1String(users[i].get_userid()));
        }
        }
        if(flag==1)
        {
             QMessageBox::information(this,"Login","Success");
             userwidget=new Userwidget;
             userwidget->sendData(userID);
             userwidget->show();
             this->hide();
        }
        else
        {
             QMessageBox::information(this,"Login","Failed");
        }
    });
}

UserLogin::~UserLogin()
{
    delete ui;
}
