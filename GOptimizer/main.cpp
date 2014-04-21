#include "goptimizerviewcontroller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GOptimizerViewController w;
    w.show();

    return a.exec();
}
