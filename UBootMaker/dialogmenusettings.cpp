#include "dialogmenusettings.h"
#include "ui_dialogmenusettings.h"
#include <QPixmap>
#include <QPainter>
#include <QMouseEvent>
#include <QMessageBox>
#include <QFontDialog>
#include <QColorDialog>

DialogMenuSettings::DialogMenuSettings(QWidget *parent) :
    QDialog(parent),
    menuIndex(1),
    ui(new Ui::DialogMenuSettings)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    setStyleSheet("QPushButton{font:bold 12px \"Microsoft YaHei\";color: rgb(120, 120, 120);border: 1px solid green;}"
                  "QPushButton::hover{font:bold 12px \"Microsoft YaHei\";color: rgb(80, 80, 80);border: 1px solid green;}"
                  "QPushButton::pressed{font:bold 12px \"Microsoft YaHei\";color: rgb(80, 80, 80);border: 1px solid green;}"
                  "QLineEdit{font:bold 12px \"Microsoft YaHei\";color: rgb(120, 120, 120);}");
    ui->pushButton_close->setStyleSheet("QPushButton{border-image: url(:/images/94_Close_1.jpg);}"
                                        "QPushButton:hover{border-image: url(:/images/94_Close_2.jpg);}"
                                        "QPushButton:pressed{border-image: url(:/images/94_Close_2.jpg);}");
    ui->pushButton_alpha_dec->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_alpha_inc->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_bg_size_dec->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_bg_size_inc->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_index_dec->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->pushButton_index_inc->setStyleSheet("QPushButton{border:0 none;background:none;}");
    ui->lineEdit_menu_index->setStyleSheet("QLineEdit{border:0 none;}");
    ui->lineEdit_menu_index->setText(QString("%1").arg(menuIndex));
    //colorMenu.setNamedColor("gray");
    colorMenu.setRgb(19,51,1);
    colorSelectedItem.setRgb(223,255,204);
    colorSelectedItemBG.setRgb(28,77,0);
    colorBg.setRgb(96,193,52);
    resize(265,246);
}

DialogMenuSettings::~DialogMenuSettings()
{
    delete ui;
}

void DialogMenuSettings::on_pushButton_close_clicked()
{
    close();
}

void DialogMenuSettings::paintEvent(QPaintEvent *)
{
    // 注意：需要在center中绘制背景，在MainFrame中执行一下代码无效。
    QPixmap pixmap = QPixmap(":/images/91_bg.jpg");
    QPainter painter(this);
    painter.drawPixmap(QRect(0,0,265,372), pixmap);
}

void DialogMenuSettings::on_pushButton_font_clicked()
{
    //getFont是QFontDialog的一个静态函数，返回用户选择的字体，用户选择OK,参数将*ok为true,
    //函数返回用户选择的字体，否则为false,此时函数返回默认字体
    bool ok;
    QFont selectFont = QFontDialog::getFont(&ok,menuFont,this,QString::fromLocal8Bit("请选择菜单字体"));
    if(ok)
    {
        //将菜单字体设置为选中的字体
        menuFont = selectFont;
    }
}

void DialogMenuSettings::on_pushButton_index_dec_clicked()
{
    Q_ASSERT(menuIndex >= 1);
    if(menuIndex > 1)
    {
        menuIndex --;
        ui->lineEdit_menu_index->setText(QString("%1").arg(menuIndex));
    }
}

const unsigned int MAX_MENU_INDEX = 11;
void DialogMenuSettings::on_pushButton_index_inc_clicked()
{
    if(menuIndex != MAX_MENU_INDEX)
    {
        menuIndex ++;
        ui->lineEdit_menu_index->setText(QString("%1").arg(menuIndex));
    }
}

void DialogMenuSettings::on_pushButton_color_clicked()
{
    /*
     * getColor是QColorDialog的静态函数，打开标准颜色对话框，返回选中的颜色，参数
     * 表示 对话框默认选中的颜色，isValid可以判断用户选择的颜色是否有效，用户点击取消
     * 的话，isValid返回false
    */
    QColor color = QColorDialog::getColor(colorMenu,this,QString::fromLocal8Bit("请选择菜单的颜色"));
    if(color.isValid())
    {
        //如果颜色有效的话，设置为选中的颜色
        colorMenu = color;
    }
}

void DialogMenuSettings::on_pushButton_selected_color_clicked()
{
    //同上函数的说明
    QColor color = QColorDialog::getColor(colorSelectedItem,this,QString::fromLocal8Bit("请选择选中项的颜色"));
    if(color.isValid())
    {
        //如果颜色有效的话，设置为选中的颜色
        colorSelectedItem = color;
    }
}

void DialogMenuSettings::on_pushButton_selected_bkcolor_clicked()
{
    //同上函数的说明
    QColor color = QColorDialog::getColor(colorSelectedItemBG,this,QString::fromLocal8Bit("请选择选中背景颜色"));
    if(color.isValid())
    {
        //如果颜色有效的话，设置为选中的颜色
        colorSelectedItemBG = color;
    }
}

void DialogMenuSettings::on_pushButton_add_menu_bg_clicked()
{
    resize(265,372);
}

void DialogMenuSettings::on_pushButton_del_menu_bg_clicked()
{
    resize(265,246);
}

void DialogMenuSettings::on_pushButton_modify_bg_color_clicked()
{
    QColor color = QColorDialog::getColor(colorBg,this,QString::fromLocal8Bit("请选菜单的背景颜色"));
    if(color.isValid())
    {
        //如果颜色有效的话，设置为选中的颜色
        colorBg = color;
    }
}

void DialogMenuSettings::on_pushButton_item_rename_clicked()
{
    QMessageBox::information(this,QString::fromLocal8Bit("开发中，敬请期待。"),QString::fromLocal8Bit("开发中，敬请期待。"),QMessageBox::Ok);
}

static QPoint dragPosition = {0,0};
void DialogMenuSettings::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        QPoint pt = mapFromGlobal(event->globalPos());
        if(pt.y() < 40)
        {
            dragPosition = event->globalPos() - frameGeometry().topLeft();
            event->accept();
        }
    }
}
void DialogMenuSettings::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        QPoint pt = mapFromGlobal(event->globalPos());
        if(pt.y() < 40)
        {
            move(event->globalPos() - dragPosition);
            event->accept();
        }
    }
}
