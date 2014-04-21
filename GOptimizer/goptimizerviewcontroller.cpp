#include "goptimizerviewcontroller.h"
#include "ui_goptimizerviewcontroller.h"
#include <QString>

GOptimizerViewController::GOptimizerViewController(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GOptimizerViewController)
{
    ui->setupUi(this);
    model = new GOptimizerModel();
    ui->atCheckBox->setChecked(true);
}

GOptimizerViewController::~GOptimizerViewController()
{
    delete ui;
}

//called when start button is clicked
void GOptimizerViewController::on_processButton_clicked()
{

    //get the text
    QString textEditText = ui->textEdit->toPlainText();

    //let the model do the work
    model->process(textEditText.toStdString());

}
