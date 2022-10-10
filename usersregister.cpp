#include "usersregister.h"
#include "ui_usersregister.h"

UsersRegister::UsersRegister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UsersRegister)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        Name=ui->nameEdit->text();
        Password=ui->passwordEdit->text();
        Tele=ui->teleEdit->text();
        Address=ui->addressEdit->text();
        users->set_cnt(0);
        read_user(users);

        for(int i=0;i<users->get_cnt();++i)
        {
            if(QString(QLatin1String(users[i].get_username()))==Name)//yong hu ming yi zhan yong
            {
                QMessageBox::information(this,"ERROR","The Name has been Registered!");
                return;
            }
        }
        char user_id[10];
            if (a < 10)
            {
                char d[15] = { 'U','0','0' };
                char c[5];
                //itoa(a, c, 10);
                sprintf(c,"%d",a);
                strcat(d, c);
                strcpy(user_id, d);
            }
            else
                if (a >= 10 && a < 100)
                {
                    char d[15] = { 'U','0'};
                    char c[5];
                    //itoa(a, c, 10);
                    sprintf(c,"%d",a);
                    strcat(d, c);
                    strcpy(user_id, d);
                }
                else
                    if (a >= 100 && a < 1000)
                    {
                        char d[15] = { 'U' };
                        char c[5];
                        //itoa(a, c, 10);
                        sprintf(c,"%d",a);
                        strcat(d, c);
                        strcpy(user_id, d);
                    }
            ++a;//分配用户ID
        users[users->get_cnt()].set_user(user_id,(Name.toLatin1()).data(),Password.toLatin1().data(),Tele.toLatin1().data(),Address.toLatin1().data(),0,0);
        users->add_cnt();

        write_users(users);
        QMessageBox::information(this,"Register","Success!");
        this->close();
    });
}

UsersRegister::~UsersRegister()
{
    delete ui;
}
