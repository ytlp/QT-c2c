#ifndef PIM_H
#define PIM_H

#include <QWidget>

namespace Ui {
class PIM;
}

class PIM : public QWidget
{
    Q_OBJECT

public:
    explicit PIM(QWidget *parent = nullptr);
    ~PIM();

private:
    Ui::PIM *ui;
};

#endif // PIM_H
