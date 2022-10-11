#ifndef PIM_H
#define PIM_H

#include <QWidget>
#include "Users.h"
#include <QStandardItemModel>
#include <QMessageBox>

namespace Ui {
class PIM;
}

class PIM : public QWidget
{
    Q_OBJECT

public:
    explicit PIM(QWidget *parent = nullptr);
    ~PIM();
    void sendData_pim(QString userID);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::PIM *ui;
    Users_class users[100];
    QStandardItemModel* model;
};

#endif // PIM_H
