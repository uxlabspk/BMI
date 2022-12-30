#include "bmi.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bmi w;
    w.show();
    return a.exec();
}
