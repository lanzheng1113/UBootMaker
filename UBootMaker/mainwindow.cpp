#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formmaincenter.h"
#include "qpainter.h"
#include <QtCore/qmath.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    centerWidget = new FormMainCenter(this);
    setCentralWidget(centerWidget);
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
}

MainWindow::~MainWindow()
{
    delete centerWidget;
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{

}
