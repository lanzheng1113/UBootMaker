#include "dialogcancelsupport.h"
#include "ui_dialogcancelsupport.h"
#include <QPixmap>
#include <QPainter>

DialogCancelSupport::DialogCancelSupport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCancelSupport)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    ui->pushButton_close->setStyleSheet("QPushButton{border-image: url(:/images/94_Close_1.jpg);}"
                                        "QPushButton:hover{border-image: url(:/images/94_Close_2.jpg);}"
                                        "QPushButton:pressed{border-image: url(:/images/94_Close_2.jpg);}");
    ui->pushButton_cancel_support->setStyleSheet("QPushButton{border-image: url(:/images/94_btn1_1.jpg);}"
                                         "QPushButton:hover{border-image: url(:/images/94_btn1_2.jpg);}"
                                         "QPushButton:pressed{border-image: url(:/images/94_btn1_3.jpg);}");
    ui->pushButton_support_continue->setStyleSheet("QPushButton{border-image: url(:/images/94_btn2_1.jpg);}"
                                         "QPushButton:hover{border-image: url(:/images/94_btn2_2.jpg);}"
                                         "QPushButton:pressed{border-image: url(:/images/94_btn2_3.jpg);}");
}

DialogCancelSupport::~DialogCancelSupport()
{
    delete ui;
}

void DialogCancelSupport::on_pushButton_cancel_support_clicked()
{
    accept();
}

void DialogCancelSupport::on_pushButton_support_continue_clicked()
{
    close();
}

void DialogCancelSupport::on_pushButton_close_clicked()
{
    close();
}

void DialogCancelSupport::paintEvent(QPaintEvent *)
{
    // 注意：需要在center中绘制背景，在MainFrame中执行一下代码无效。
    QPixmap pixmap = QPixmap(":/images/94_bg.jpg").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}
