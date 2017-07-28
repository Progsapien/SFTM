#include "generalwindow.h"
#include <QApplication>
#include "core/server.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GeneralWindow w;
    w.show();

    return a.exec();
}
