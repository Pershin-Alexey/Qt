#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    /* что-то добавили
    давай еще что нибудь добавим
    еще для примера*/

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
