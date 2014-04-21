#ifndef GOPTIMIZERVIEWCONTROLLER_H
#define GOPTIMIZERVIEWCONTROLLER_H

#include <QMainWindow>
#include "goptimizermodel.h"

namespace Ui {
class GOptimizerViewController;
}

class GOptimizerViewController : public QMainWindow
{
    Q_OBJECT

public:
    explicit GOptimizerViewController(QWidget *parent = 0);
    ~GOptimizerViewController();

private slots:
    void on_processButton_clicked();

private:
    Ui::GOptimizerViewController *ui; //view
    GOptimizerModel *model; //model
};

#endif // GOPTIMIZERVIEWCONTROLLER_H
