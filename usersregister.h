#ifndef USERSREGISTER_H
#define USERSREGISTER_H

#include <QWidget>
#include <Users.h>
#include <QMessageBox>
#include <QByteArray>
namespace Ui {
class UsersRegister;
}

class UsersRegister : public QWidget
{
    Q_OBJECT

public:
    explicit UsersRegister(QWidget *parent = nullptr);
    ~UsersRegister();

private:
    Ui::UsersRegister *ui;
    QString Name;
    QString Password;
    QString Tele;
    QString Address;
    Users_class users[100];
};

#endif // USERSREGISTER_H
