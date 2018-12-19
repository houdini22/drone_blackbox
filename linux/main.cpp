#include "mainwindow.h"
#include <QApplication>
#include "include.h"

int main(int argc, char *argv[])
{
    qRegisterMetaType<MyMat>("MyMat");
    qRegisterMetaType<ButtonsPressed>("Button");

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
