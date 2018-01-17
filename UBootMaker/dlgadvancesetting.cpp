#include "dlgadvancesetting.h"
#include "ui_dlgadvancesetting.h"
#include <QPixmap>
#include <QPainter>
#include <QMouseEvent>
#include "DialogCancelSupport.h"
#include <QDesktopServices>
#include "DialogMenuSettings.h"
#include <QDebug>
#include "startmenuwidget.h"

DlgAdvanceSetting::DlgAdvanceSetting(QWidget *parent) :
    QDialog(parent),
    dlgMenuSetting(nullptr),
    pStartMenuWidget(nullptr),
    ui(new Ui::DlgAdvanceSetting)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    ui->pushButton_close->setStyleSheet("QPushButton{border-image: url(:/images/9_Close_1.jpg);}"
                                        "QPushButton:hover{border-image: url(:/images/9_Close_2.jpg);}"
                                        "QPushButton:pressed{border-image: url(:/images/9_Close_2.jpg);}");
    ui->pushButton_support->setStyleSheet("QPushButton{border-image: url(:/images/9_More_1.jpg);}"
                                          "QPushButton:hover{border-image: url(:/images/9_More_2.jpg);}"
                                          "QPushButton:pressed{border-image: url(:/images/9_More_3.jpg);}");
    ui->pushButton_personal->setStyleSheet("QPushButton{border-image: url(:/images/9_Help_1.jpg);}"
                                           "QPushButton:hover{border-image: url(:/images/9_Help_1.jpg);}"
                                           "QPushButton:pressed{border-image: url(:/images/9_Help_1.jpg);}");
    ui->pushButton_set_menu->setStyleSheet("QPushButton{border-image: url(:/images/9_btn6_1.jpg);}"
                                           "QPushButton:hover{border-image: url(:/images/9_btn6_2.jpg);}"
                                           "QPushButton:pressed{border-image: url(:/images/9_btn6_3.jpg);}");
    ui->pushButton_set_progress_bar->setStyleSheet("QPushButton{border-image: url(:/images/9_btn5_1.jpg);}"
                                                   "QPushButton:hover{border-image: url(:/images/9_btn5_2.jpg);}"
                                                   "QPushButton:pressed{border-image: url(:/images/9_btn5_3.jpg);}");
    ui->pushButton_set_launch_bg->setStyleSheet("QPushButton{border-image: url(:/images/9_btn4_1.jpg);}"
                                                "QPushButton:hover{border-image: url(:/images/9_btn4_2.jpg);}"
                                                "QPushButton:pressed{border-image: url(:/images/9_btn4_3.jpg);}");
    ui->pushButton_set_pe_bg->setStyleSheet("QPushButton{border-image: url(:/images/9_btn3_1.jpg);}"
                                            "QPushButton:hover{border-image: url(:/images/9_btn3_2.jpg);}"
                                            "QPushButton:pressed{border-image: url(:/images/9_btn3_3.jpg);}");
    ui->pushButton_restore_default->setStyleSheet("QPushButton{border-image: url(:/images/9_btn2_1.jpg);}"
                                                  "QPushButton:hover{border-image: url(:/images/9_btn2_2.jpg);}"
                                                  "QPushButton:pressed{border-image: url(:/images/9_btn2_3.jpg);}");
    ui->pushButton_cancel->setStyleSheet("QPushButton{border-image: url(:/images/9_btn0_1.jpg);}"
                                         "QPushButton:hover{border-image: url(:/images/9_btn0_2.jpg);}"
                                         "QPushButton:pressed{border-image: url(:/images/9_btn0_3.jpg);}");
    ui->pushButton_save->setStyleSheet("QPushButton{border-image: url(:/images/9_btn1_1.jpg);}"
                                       "QPushButton:hover{border-image: url(:/images/9_btn1_2.jpg);}"
                                       "QPushButton:pressed{border-image: url(:/images/9_btn1_3.jpg);}");
    loadMessageFile();
}

DlgAdvanceSetting::~DlgAdvanceSetting()
{
    if(dlgMenuSetting)
    {
        delete dlgMenuSetting;
        dlgMenuSetting = nullptr;
    }
    delete ui;
}

void DlgAdvanceSetting::paintEvent(QPaintEvent *)
{
    // 注意：需要在center中绘制背景，在MainFrame中执行一下代码无效。
    QPixmap pixmap = QPixmap(":/images/9_bg.jpg").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}

//dragPosition 用于存放开始拖动时鼠标相对于本窗口的相对位置。
static QPoint dragPosition = {0,0};
void DlgAdvanceSetting::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        QPoint pt = mapFromGlobal(event->globalPos());
        if(pt.y() < 50)
        {
            //qDebug() << "(mousePressEvent)Fram geometry topleft(" << frameGeometry().topLeft().x() << "," << frameGeometry().topLeft().y() << ")";
            dragPosition = event->globalPos() - frameGeometry().topLeft();
            event->accept();
        }
    }
}

void DlgAdvanceSetting::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        QPoint pt = mapFromGlobal(event->globalPos());
        if(pt.y() < 50)
        {
            QPoint RelativePos = {165,0};
            if(dlgMenuSetting)
            {
                //获取菜单设置窗口相对于本窗口的偏移，移动前后需要保证不变。
                RelativePos = dlgMenuSetting->frameGeometry().topLeft() - frameGeometry().topLeft();
                //qDebug() << "calc r = (" << RelativePos.x() << "," << RelativePos.y() << ");";
            }
            //移动自己
            //qDebug() << "(mouseMoveEvent)Fram geometry topleft(" << frameGeometry().topLeft().x() << "," << frameGeometry().topLeft().y() << ")";
            move(event->globalPos() - dragPosition);
            if(dlgMenuSetting)
            {
                //移动菜单设置对话框，由于它逻辑上是高级设置的子窗口。
                //由于事实上不是，那么在算出相对位置后，需要使用此窗口对应系统桌面的坐标调用它的move成员。
                //qDebug() << "move r = (" << RelativePos.x() << "," << RelativePos.y() << ");";
                QPoint globalPos = this->pos();
                globalPos.setX(globalPos.x() + RelativePos.x());
                globalPos.setY(globalPos.y() + RelativePos.y());
                dlgMenuSetting->move(globalPos);
            }
            event->accept();
        }
    }
}

void DlgAdvanceSetting::loadMessageFile()
{
    if (nullptr == pStartMenuWidget)
    {
        pStartMenuWidget = new StartMenuWidget(this);
        pStartMenuWidget->show();
        pStartMenuWidget->move(200,130);
    }
    else
    {
        pStartMenuWidget->show();
    }
}

void DlgAdvanceSetting::on_pushButton_close_clicked()
{
    close();
}

void DlgAdvanceSetting::on_pushButton_support_clicked()
{
    DialogCancelSupport dlg;
    dlg.exec();
}

void DlgAdvanceSetting::on_pushButton_personal_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.bigbaicai.com/rjjc/syjc/3273.html"));
}

static const int menuSettingsWidetRelativeX = 615;
static const int menuSettingsWidetRelativeY = 140;
void DlgAdvanceSetting::on_pushButton_set_menu_clicked()
{
    if(nullptr == dlgMenuSetting)
    {
        //创建菜单设置对话框，并且移动到相对高级设置窗口（615,140）的位置。
        //注意dlgMenuSetting只是高级设置窗口逻辑上的子窗口，而非事实上的子窗口（构造函数传入nullptr）。
        //这样做的原因是如果作为事实上的子窗口,则菜单设置这个子窗口无法移动出父窗口的范围，这明显是不合理的。
        dlgMenuSetting = new DialogMenuSettings(nullptr);
        if (!dlgMenuSetting)
            return;
        dlgMenuSetting->setModal(false);
        QPoint globalPos = this->pos();
        globalPos.setX(globalPos.x() + menuSettingsWidetRelativeX);
        globalPos.setY(globalPos.y() + menuSettingsWidetRelativeY);
        dlgMenuSetting->move(globalPos);
        dlgMenuSetting->show();
    }
    else
    {
        if(dlgMenuSetting->isHidden())
            dlgMenuSetting->show();
        // else do nothing,if the dialog has showed.
        // or we can move it to a property position.
    }
    //lt,200,130
    //size 400,400
}
