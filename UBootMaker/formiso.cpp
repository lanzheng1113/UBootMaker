#include "formiso.h"
#include "ui_formiso.h"

FormISO::FormISO(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormISO)
{
    ui->setupUi(this);
    setStyleSheet("QPushButton{font:bold 12px \"Microsoft YaHei\";color: rgb(120, 120, 120);}"
                  "QPushButton::hover{font:bold 12px \"Microsoft YaHei\";color: rgb(80, 80, 80);border: 1px solid gray;}"
                  "QPushButton::pressed{font:bold 12px \"Microsoft YaHei\";color: rgb(80, 80, 80);border: 1px solid gray;}"
                  "QPushButton::checked{font:bold 12px \"Microsoft YaHei\";color: rgb(80, 80, 80);border: 1px solid green;}"
                  "QLabel{font:bold 14px \"Microsoft YaHei\";color: rgb(120, 120, 120);}");
    ui->pushButton_start_make->setStyleSheet("QPushButton{border-image: url(:/images/1_1_Btn1_1.jpg);}"
                                             "QPushButton:hover{border-image: url(:/images/1_1_Btn1_2.jpg);}"
                                             "QPushButton:pressed{border-image: url(:/images/1_1_Btn1_3.jpg);}");
    ui->pushButton_fire_cd->setStyleSheet("QPushButton{border-image: url(:/images/1_2_btn4_1.jpg);}"
                                          "QPushButton:hover{border-image: url(:/images/1_2_Btn4_2.jpg);}"
                                          "QPushButton:pressed{border-image: url(:/images/1_2_Btn4_3.jpg);}");
    ui->pushButton_simulate_boot->setStyleSheet("QPushButton{border-image: url(:/images/1_2_btn5_1.jpg);}"
                                                "QPushButton:hover{border-image: url(:/images/1_2_btn5_2.jpg);}"
                                                "QPushButton:pressed{border-image: url(:/images/1_2_btn5_3.jpg);}");
}

FormISO::~FormISO()
{
    delete ui;
}

void FormISO::on_pushButton_default_setting_clicked()
{
    ui->pushButton_default_setting->setChecked(true);
    //先把自己设置为选中，如果发现其他的已经选中，那么设置它们不选中状态。
    ui->pushButton_advance_setting->setChecked(false);
}

void FormISO::on_pushButton_advance_setting_clicked()
{
    ui->pushButton_advance_setting->setChecked(true);
    //先把自己设置为选中，如果发现其他的已经选中，那么设置它们不选中状态。
    ui->pushButton_default_setting->setChecked(false);
}
