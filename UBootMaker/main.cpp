#include "mainwindow.h"
#include <QApplication>
#include <qtextcodec.h>
#include "DlgAdvanceSetting.h"

DlgAdvanceSetting *dlgAdvanceSetting = nullptr;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
