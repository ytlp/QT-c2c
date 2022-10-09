#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QWidget>
#include "adminwidget.h"
#include <QMessageBox>
namespace Ui {
class Adminlogin;
}

class Adminlogin : public QWidget
{
    Q_OBJECT

public:
    explicit Adminlogin(QWidget *parent = nullptr);
    ~Adminlogin();

private:
    Ui::Adminlogin *ui;
    QString adminID;
    QString adminkey;
    Adminwidget*adminwidget;
};

#endif // ADMINLOGIN_H
