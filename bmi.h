#ifndef BMI_H
#define BMI_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtMath>
#include "msg.h"

QT_BEGIN_NAMESPACE
namespace Ui { class bmi; }
QT_END_NAMESPACE

class bmi : public QMainWindow
{
    Q_OBJECT

public:
    bmi(QWidget *parent = nullptr);
    ~bmi();

private slots:
    void on_bmiCalculateBtn_clicked();

private:
    Ui::bmi *ui;
    msg* msgClass;
};
#endif // BMI_H
