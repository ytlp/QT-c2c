#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "adminwidget.h"
#include "adminlogin.h"
#include"commodity.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QPushButton *mainLogin;
    QPushButton* mainRegister;
    QPushButton* mainAdmin;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    Adminlogin * adminlogin;
    //Commodity_class commodity[100];

};
#endif // MAINWINDOW_H
