#include "dialogtutorial.h"
#include "ui_dialogtutorial.h"
#include <QPixmap>
#include <QPainter>
#include <QDesktopServices>
#include <QUrl>
#include <QMouseEvent>

DialogTutorial::DialogTutorial(QWidget *parent) :
    isJumpToShortCut(false),
    QDialog(parent),
    ui(new Ui::DialogTutorial)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    ui->pushButton_close->setStyleSheet("QPushButton{border-image: url(:/images/9_Close_1.jpg);}"
                                        "QPushButton:hover{border-image: url(:/images/9_Close_2.jpg);}"
                                        "QPushButton:pressed{border-image: url(:/images/9_Close_2.jpg);}");
    ui->pushButton_install_ori_win7->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_install_ori_xp->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_install_u_ghost_win7->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_install_u_ghost_xp->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_make_hdd_boot->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_make_iso_boot->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_make_uboot->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_make_uboot_shortcut->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_u_part_disk->setStyleSheet("QPushButton{border:0 none;background:none;}");
}

DialogTutorial::~DialogTutorial()
{
    delete ui;
}

void DialogTutorial::paintEvent(QPaintEvent *)
{
    // 注意：需要在center中绘制背景，在MainFrame中执行一下代码无效。
    QPixmap pixmap = QPixmap(":/images/4_bg.jpg").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}

void DialogTutorial::on_pushButton_close_clicked()
{
    close();
}

void DialogTutorial::on_pushButton_make_uboot_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.bigbaicai.com/jiaocheng/upqdzz.html"));
}

void DialogTutorial::on_pushButton_make_iso_boot_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.bigbaicai.com/rjjc/syjc/3269.html"));
}

void DialogTutorial::on_pushButton_make_hdd_boot_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.bigbaicai.com/rjjc/syjc/3271.html"));
}

void DialogTutorial::on_pushButton_install_u_ghost_xp_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.bigbaicai.com/jiaocheng/upzxp.html"));
}

void DialogTutorial::on_pushButton_install_ori_xp_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.bigbaicai.com/jiaocheng/upzybxp.html"));
}

void DialogTutorial::on_pushButton_install_u_ghost_win7_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.bigbaicai.com/jiaocheng/upzwin7.html"));
}

void DialogTutorial::on_pushButton_install_ori_win7_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.bigbaicai.com/jiaocheng/upzybwin7.html"));
}

void DialogTutorial::on_pushButton_make_uboot_shortcut_clicked()
{
    isJumpToShortCut = true;
    accept();
}

void DialogTutorial::on_pushButton_u_part_disk_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.bigbaicai.com/jiaocheng/cpfq.html"));
}

bool DialogTutorial::getIsJumpToShortCut() const
{
    return isJumpToShortCut;
}

static QPoint dragPosition = {0,0};
void DialogTutorial::mousePressEvent(QMouseEvent *event)
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
void DialogTutorial::mouseMoveEvent(QMouseEvent *event)
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
