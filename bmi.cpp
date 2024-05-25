#include "bmi.h"
#include "ui_bmi.h"

bmi::bmi(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::bmi)
{
    ui->setupUi(this);
    setFixedSize(480, 140);
}

bmi::~bmi()
{
    delete ui;
}

void bmi::on_bmiCalculateBtn_clicked()
{
    if (ui->weightInput->text().isEmpty() || ui->heightInput->text().isEmpty()) {
        QMessageBox::warning(this, "Error!", "Please enter a decimal or integer input.");
        return;
    }

    double weight = ui->weightInput->text().toDouble();
    double height = ui->heightInput->text().toDouble();

    double bmi = (weight / (height*height));

    QString status = "";

    if (bmi > 0 && bmi < 18.5)
        status = "Underweight";

    else if (bmi >= 18.5 && bmi < 25.0)
        status = "Normal";

    else if (bmi >= 25.0 && bmi <= 40.0)
        status = "Overweight";

    msgClass = new msg();
    msgClass->setValues(QString::number(bmi), status);
    msgClass->show();
}


