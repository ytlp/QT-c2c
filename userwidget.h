#ifndef USERWIDGET_H
#define USERWIDGET_H

#include <QWidget>

namespace Ui {
class Userwidget;
}

class Userwidget : public QWidget
{
    Q_OBJECT

public:
    explicit Userwidget(QWidget *parent = nullptr);
    ~Userwidget();

private:
    Ui::Userwidget *ui;
};

#endif // USERWIDGET_H
