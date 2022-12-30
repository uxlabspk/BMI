#include "msg.h"
#include "ui_msg.h"

msg::msg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::msg)
{
    ui->setupUi(this);
    setFixedSize(465, 243);
}

msg::~msg()
{
    delete ui;
}

void msg::setValues(QString value, QString status)
{
    ui->bmi_Value->setText(value);
    ui->bmi_status->setText(status);
}

void msg::on_closeBtn_clicked()
{
    msg::close();
}

