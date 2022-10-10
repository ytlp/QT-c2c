#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QWidget>
#include <Users.h>
#include <QMessageBox>
#include <userwidget.h>
namespace Ui {
class UserLogin;
}

class UserLogin : public QWidget
{
    Q_OBJECT

public:
    explicit UserLogin(QWidget *parent = nullptr);
    ~UserLogin();

private:
    Ui::UserLogin *ui;
    Users_class users[100];
    QString name;
    QString password;
    Userwidget*userwidget;
};

#endif // USERLOGIN_H
