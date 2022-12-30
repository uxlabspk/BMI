#ifndef MSG_H
#define MSG_H

#include <QMainWindow>

namespace Ui {
class msg;
}

class msg : public QMainWindow
{
    Q_OBJECT

public:
    explicit msg(QWidget *parent = nullptr);
    ~msg();

    void setValues(QString value, QString status);
private slots:
    void on_closeBtn_clicked();

private:
    Ui::msg *ui;
};

#endif // MSG_H
