#include "formmaincenter.h"
#include "ui_formmaincenter.h"
#include "qpainter.h"
#include "qmessagebox.h"
#include <QtCore/qmath.h>
#include "formdefaultstyle.h"
#include "formiso.h"
#include "formlocal.h"
#include "formhelpinfo.h"
#include <QMouseEvent>
#include <QtDebug>

FormMainCenter::FormMainCenter(QWidget *parent) :
    QWidget(parent),
    m_pFormDefault(NULL),
    m_pFormISO(NULL),
    m_pFormLocal(NULL),
    m_pFormHelpInfo(NULL),
    ui(new Ui::FormMainCenter)
{
    ui->setupUi(this);
    button_init();
    subwindows_init();
    dragPosition.setX(0);
    dragPosition.setY(0);
    orignalPositon.setX(0);
    orignalPositon.setY(0);
}

FormMainCenter::~FormMainCenter()
{
    if(m_pFormDefault)
    {
        delete m_pFormDefault;
        m_pFormDefault = NULL;
    }
    if(m_pFormISO)
    {
        delete m_pFormISO;
        m_pFormISO = NULL;
    }
    if(m_pFormLocal)
    {
        delete m_pFormLocal;
        m_pFormLocal = NULL;
    }
    if(m_pFormHelpInfo)
    {
        delete m_pFormHelpInfo;
        m_pFormHelpInfo = NULL;
    }
    delete ui;
}

void FormMainCenter::paintEvent(QPaintEvent *)
{
    // 注意：需要在center中绘制背景，在MainFrame中执行一下代码无效。
    QPixmap pixmap = QPixmap(":/images/bg.jpg").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}

void FormMainCenter::button_init()
{
    ui->pushButton_close->setStyleSheet("QPushButton{border-image: url(:/images/9_Close_1.jpg);}"
                                  "QPushButton:hover{border-image: url(:/images/9_Close_2.jpg);}"
                                  "QPushButton:pressed{border-image: url(:/images/9_Close_2.jpg);}");
    ui->pushButton_min->setStyleSheet("QPushButton{border-image: url(:/images/Min_1.jpg);}"
                                  "QPushButton:hover{border-image: url(:/images/Min_2.jpg);}"
                                  "QPushButton:pressed{border-image: url(:/images/Min_3.jpg);}");
    ui->pushButton_ModeDefault->setStyleSheet("QPushButton{border-image: url(:/images/1_Mode1_1.jpg);}"
                                              "QPushButton:hover{border-image: url(:/images/1_Mode1_2.jpg);}"
                                              "QPushButton:pressed{border-image: url(:/images/1_Mode1_3.jpg);}"
                                              "QPushButton:checked{border-image: url(:/images/1_Mode1_3.jpg);}");
    ui->pushButton_ModeISO->setStyleSheet("QPushButton{border-image: url(:/images/1_Mode2_1.jpg);}"
                                          "QPushButton:hover{border-image: url(:/images/1_Mode2_2.jpg);}"
                                          "QPushButton:pressed{border-image: url(:/images/1_Mode2_3.jpg);}"
                                          "QPushButton:checked{border-image: url(:/images/1_Mode2_3.jpg);}");
    ui->pushButton_ModeLocal->setStyleSheet("QPushButton{border-image: url(:/images/1_Mode3_1.jpg);}"
                                            "QPushButton:hover{border-image: url(:/images/1_Mode3_2.jpg);}"
                                            "QPushButton:pressed{border-image: url(:/images/1_Mode3_3.jpg);}"
                                            "QPushButton:checked{border-image: url(:/images/1_Mode3_3.jpg);}");
}

void FormMainCenter::subwindows_init()
{
    m_pFormDefault = new FormDefaultStyle(this);
    m_pFormDefault->resize(700,295);
    m_pFormDefault->move(0,165);
    m_pFormDefault->show();
    m_pFormISO = new FormISO(this);
    m_pFormISO->resize(700,295);
    m_pFormISO->move(0,165);
    m_pFormISO->hide();
    m_pFormLocal = new FormLocal(this);
    m_pFormLocal->resize(700,295);
    m_pFormLocal->move(0,165);
    m_pFormLocal->hide();
    m_pFormHelpInfo = new FormHelpInfo(this);
    m_pFormHelpInfo->resize(700,40);
    m_pFormHelpInfo->move(0,460);
    m_pFormHelpInfo->show();
}

void FormMainCenter::on_pushButton_min_clicked()
{
    QWidget* parent = parentWidget();
    parent->showMinimized();
}

void FormMainCenter::on_pushButton_close_clicked()
{
    QWidget* parent = parentWidget();
    parent->close();
}

void FormMainCenter::on_pushButton_ModeDefault_clicked()
{
    if(!ui->pushButton_ModeISO->isChecked() &&
       !ui->pushButton_ModeLocal->isChecked())
    {
        ui->pushButton_ModeDefault->setChecked(true);
        return;
    }
    if(ui->pushButton_ModeDefault->isChecked())
    {
        ui->pushButton_ModeISO->setChecked(false);
        ui->pushButton_ModeLocal->setChecked(false);
        m_pFormISO->hide();
        m_pFormLocal->hide();
        m_pFormDefault->show();
    }
}

void FormMainCenter::on_pushButton_ModeISO_clicked()
{
    if(!ui->pushButton_ModeDefault->isChecked() &&
       !ui->pushButton_ModeLocal->isChecked())
    {
        ui->pushButton_ModeISO->setChecked(true);
        return;
    }
    if(ui->pushButton_ModeISO->isChecked())
    {
        ui->pushButton_ModeDefault->setChecked(false);
        ui->pushButton_ModeLocal->setChecked(false);
        m_pFormLocal->hide();
        m_pFormDefault->hide();
        m_pFormISO->show();
    }
}

void FormMainCenter::on_pushButton_ModeLocal_clicked()
{
    if(!ui->pushButton_ModeISO->isChecked() &&
       !ui->pushButton_ModeDefault->isChecked())
    {
        ui->pushButton_ModeLocal->setChecked(true);
        return;
    }
    if(ui->pushButton_ModeLocal->isChecked())
    {
        ui->pushButton_ModeISO->setChecked(false);
        ui->pushButton_ModeDefault->setChecked(false);
        m_pFormISO->hide();
        m_pFormDefault->hide();
        m_pFormLocal->show();
    }
}

void FormMainCenter::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        //计算点击的相对位置,确定鼠标是否点这个位置是否可以拖动(这里设定窗口上点击可拖动的范围为700*120)。
        QPoint pt = mapFromGlobal(event->globalPos());
        if(!(pt.x() < 700 && pt.y() < 120))
        {
            //qDebug() << tr("click ") << pt.x() << "," << pt.y();
            orignalPositon.setX(-1);
            orignalPositon.setY(-1);
            event->accept();
            return;
        }
        //使用dragPosition保存开始移动前鼠标点击的位置，用于计算拖动范围。
        dragPosition = event->globalPos();
        //使用orignalPositon保存开始移动前的主窗口位置
        orignalPositon = parentWidget()->pos();
        //qDebug() << tr("click ") << dragPosition.x() << "," << dragPosition.y();
        //qDebug() << tr("parent pos") << parentWidget()->pos().x() << "," << parentWidget()->pos().y();
        event->accept();
    }
}
void FormMainCenter::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        //qDebug() << tr("mouse move pos:") << event->globalPos();
        //qDebug() << tr("parent pos:") << parentWidget()->pos();
        //qDebug() << tr("delta:") << (event->globalPos() - dragPosition);
        // 当前鼠标的位置减去开始时保存的位置，就是拖动过程中的偏移量
        // 将这个偏移量加上拖动前的父窗口位置，就是父窗口新的位置
        if(!(orignalPositon.x() == -1 && orignalPositon.y() == -1))
            parentWidget()->move(orignalPositon + (event->globalPos() - dragPosition));
        event->accept();
    }
}
