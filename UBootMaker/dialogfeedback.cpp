#include "dialogfeedback.h"
#include "ui_dialogfeedback.h"
#include <QPixmap>
#include <QPainter>
#include <QMouseEvent>

DialogFeedBack::DialogFeedBack(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFeedBack)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    setStyleSheet("QLineEdit{font:bold 12px \"Microsoft YaHei\";color: rgb(120, 120, 120);}"
                  "QTextEdit{font:bold 12px \"Microsoft YaHei\";color: rgb(120, 120, 120);}");

    ui->pushButton_close->setStyleSheet("QPushButton{border-image: url(:/images/9_Close_1.jpg);}"
                                        "QPushButton:hover{border-image: url(:/images/9_Close_2.jpg);}"
                                        "QPushButton:pressed{border-image: url(:/images/9_Close_2.jpg);}");
    ui->pushButton_submit->setStyleSheet("QPushButton{border-image: url(:/images/5_Btn1_1.jpg);}"
                                         "QPushButton:hover{border-image: url(:/images/5_Btn1_2.jpg);}"
                                         "QPushButton:pressed{border-image: url(:/images/5_Btn1_3.jpg);}");
    ui->pushButton_cancel->setStyleSheet("QPushButton{border-image: url(:/images/5_Btn2_1.jpg);}"
                                         "QPushButton:hover{border-image: url(:/images/5_Btn2_2.jpg);}"
                                         "QPushButton:pressed{border-image: url(:/images/5_Btn2_3.jpg);}");
}

DialogFeedBack::~DialogFeedBack()
{
    delete ui;
}

void DialogFeedBack::paintEvent(QPaintEvent *)
{
    // 注意：需要在center中绘制背景，在MainFrame中执行一下代码无效。
    QPixmap pixmap = QPixmap(":/images/5_bg.jpg").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}

void DialogFeedBack::on_pushButton_close_clicked()
{
    close();
}

void DialogFeedBack::on_pushButton_submit_clicked()
{
    accept();
}

void DialogFeedBack::on_pushButton_cancel_clicked()
{
    close();
}
static QPoint dragPosition = {0,0};
void DialogFeedBack::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        QPoint pt = mapFromGlobal(event->globalPos());
        if(pt.y() < 70)
        {
            dragPosition = event->globalPos() - frameGeometry().topLeft();
            event->accept();
        }
    }
}
void DialogFeedBack::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        QPoint pt = mapFromGlobal(event->globalPos());
        if(pt.y() < 70)
        {
            move(event->globalPos() - dragPosition);
            event->accept();
        }
    }
}
