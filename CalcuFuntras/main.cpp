#include "mainwindow.h"
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
