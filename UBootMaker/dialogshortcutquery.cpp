#include "dialogshortcutquery.h"
#include "ui_dialogshortcutquery.h"
#include <QPixmap>
#include <QPainter>
#include <QMouseEvent>

DialogShortcutQuery::DialogShortcutQuery(QWidget *parent) :
    pPageAssumbPC(NULL),
    pPageIconNotePC(NULL),
    pPageIconDeskPC(NULL),
    QDialog(parent),
    ui(new Ui::DialogShortcutQuery)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    ui->pushButton_close->setStyleSheet("QPushButton{border-image: url(:/images/9_Close_1.jpg);}"
                                        "QPushButton:hover{border-image: url(:/images/9_Close_2.jpg);}"
                                        "QPushButton:pressed{border-image: url(:/images/9_Close_2.jpg);}");
    ui->pushButton_assamble->setStyleSheet("QPushButton{border-image: url(:/images/3_btn1_1.jpg);}"
                                           "QPushButton:hover{border-image: url(:/images/3_btn1_2.jpg);}"
                                           "QPushButton:pressed{border-image: url(:/images/3_btn1_3.jpg);}"
                                           "QPushButton:checked{border-image: url(:/images/3_btn1_3.jpg);}");
    ui->pushButton_icon_note->setStyleSheet("QPushButton{border-image: url(:/images/3_btn2_1.jpg);}"
                                            "QPushButton:hover{border-image: url(:/images/3_btn2_2.jpg);}"
                                            "QPushButton:pressed{border-image: url(:/images/3_btn2_3.jpg);}"
                                            "QPushButton:checked{border-image: url(:/images/3_btn2_3.jpg);}");
    ui->pushButton_icon_pc->setStyleSheet("QPushButton{border-image: url(:/images/3_btn3_1.jpg);}"
                                          "QPushButton:hover{border-image: url(:/images/3_btn3_2.jpg);}"
                                          "QPushButton:pressed{border-image: url(:/images/3_btn3_3.jpg);}"
                                          "QPushButton:checked{border-image: url(:/images/3_btn3_3.jpg);}");
    pPageAssumbPC = new QWidget(this);
    pPageAssumbPC->setStyleSheet("background-image: url(:/images/3_list1.jpg);");
    pPageAssumbPC->resize(580,270);
    pPageAssumbPC->move(0,110);
    pPageAssumbPC->show();
    pPageIconNotePC = new QWidget(this);
    pPageIconNotePC->setStyleSheet("background-image: url(:/images/3_list2.jpg);");
    pPageIconNotePC->resize(580,270);
    pPageIconNotePC->move(0,110);
    pPageIconNotePC->hide();
    pPageIconDeskPC = new QWidget(this);
    pPageIconDeskPC->setStyleSheet("background-image: url(:/images/3_list3.jpg);");
    pPageIconDeskPC->resize(580,270);
    pPageIconDeskPC->move(0,110);
    pPageIconDeskPC->hide();
}

DialogShortcutQuery::~DialogShortcutQuery()
{
    delete pPageAssumbPC;
    delete pPageIconNotePC;
    delete pPageIconDeskPC;
    delete ui;
}

void DialogShortcutQuery::paintEvent(QPaintEvent *)
{
    // 注意：需要在center中绘制背景，在MainFrame中执行一下代码无效。
    QPixmap pixmap = QPixmap(":/images/3_bg.jpg").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}

void DialogShortcutQuery::on_pushButton_assamble_clicked()
{
    ui->pushButton_assamble->setChecked(true);
    ui->pushButton_icon_note->setChecked(false);
    ui->pushButton_icon_pc->setChecked(false);
    pPageAssumbPC->show();
    pPageIconDeskPC->hide();
    pPageIconNotePC->hide();
}

void DialogShortcutQuery::on_pushButton_close_clicked()
{
    close();
}

void DialogShortcutQuery::on_pushButton_icon_note_clicked()
{
    ui->pushButton_assamble->setChecked(false);
    ui->pushButton_icon_note->setChecked(true);
    ui->pushButton_icon_pc->setChecked(false);
    pPageAssumbPC->hide();
    pPageIconNotePC->show();
    pPageIconDeskPC->hide();
}

void DialogShortcutQuery::on_pushButton_icon_pc_clicked()
{
    ui->pushButton_assamble->setChecked(false);
    ui->pushButton_icon_note->setChecked(false);
    ui->pushButton_icon_pc->setChecked(true);
    pPageAssumbPC->hide();
    pPageIconNotePC->hide();
    pPageIconDeskPC->show();
}

static QPoint dragPosition = {0,0};
void DialogShortcutQuery::mousePressEvent(QMouseEvent *event)
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
void DialogShortcutQuery::mouseMoveEvent(QMouseEvent *event)
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
