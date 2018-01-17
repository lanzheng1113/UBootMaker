#include "formlocal.h"
#include "ui_formlocal.h"

FormLocal::FormLocal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormLocal)
{
    ui->setupUi(this);
    setStyleSheet("QPushButton{font:bold 12px \"Microsoft YaHei\";color: rgb(120, 120, 120);}"
                  "QPushButton::hover{font:bold 12px \"Microsoft YaHei\";color: rgb(80, 80, 80);border: 1px solid gray;}"
                  "QPushButton::pressed{font:bold 12px \"Microsoft YaHei\";color: rgb(80, 80, 80);border: 1px solid gray;}"
                  "QPushButton::checked{font:bold 12px \"Microsoft YaHei\";color: rgb(80, 80, 80);border: 1px solid green;}"
                  "QLabel{font:bold 14px \"Microsoft YaHei\";color: rgb(120, 120, 120);}"
                  "QCheckBox{font:bold 12px \"Microsoft YaHei\";color: rgb(120, 120, 120);}");
    ui->pushButton_start_make->setStyleSheet("QPushButton{border-image: url(:/images/1_1_Btn1_1.jpg);}"
                                             "QPushButton:hover{border-image: url(:/images/1_1_Btn1_2.jpg);}"
                                             "QPushButton:pressed{border-image: url(:/images/1_1_Btn1_3.jpg);}");
}

FormLocal::~FormLocal()
{
    delete ui;
}

void FormLocal::on_pushButton_0sec_clicked()
{
    ui->pushButton_0sec->setChecked(true);
    ui->pushButton_3sec->setChecked(false);
    ui->pushButton_5sec->setChecked(false);
    ui->pushButton_8sec->setChecked(false);
    ui->pushButton_10sec->setChecked(false);
    ui->pushButton_15sec->setChecked(false);
}

void FormLocal::on_pushButton_3sec_clicked()
{
    ui->pushButton_0sec->setChecked(false);
    ui->pushButton_3sec->setChecked(true);
    ui->pushButton_5sec->setChecked(false);
    ui->pushButton_8sec->setChecked(false);
    ui->pushButton_10sec->setChecked(false);
    ui->pushButton_15sec->setChecked(false);
}

void FormLocal::on_pushButton_5sec_clicked()
{
    ui->pushButton_0sec->setChecked(false);
    ui->pushButton_3sec->setChecked(false);
    ui->pushButton_5sec->setChecked(true);
    ui->pushButton_8sec->setChecked(false);
    ui->pushButton_10sec->setChecked(false);
    ui->pushButton_15sec->setChecked(false);
}

void FormLocal::on_pushButton_8sec_clicked()
{
    ui->pushButton_0sec->setChecked(false);
    ui->pushButton_3sec->setChecked(false);
    ui->pushButton_5sec->setChecked(false);
    ui->pushButton_8sec->setChecked(true);
    ui->pushButton_10sec->setChecked(false);
    ui->pushButton_15sec->setChecked(false);
}

void FormLocal::on_pushButton_10sec_clicked()
{
    ui->pushButton_0sec->setChecked(false);
    ui->pushButton_3sec->setChecked(false);
    ui->pushButton_5sec->setChecked(false);
    ui->pushButton_8sec->setChecked(false);
    ui->pushButton_10sec->setChecked(true);
    ui->pushButton_15sec->setChecked(false);
}

void FormLocal::on_pushButton_15sec_clicked()
{
    ui->pushButton_0sec->setChecked(false);
    ui->pushButton_3sec->setChecked(false);
    ui->pushButton_5sec->setChecked(false);
    ui->pushButton_8sec->setChecked(false);
    ui->pushButton_10sec->setChecked(false);
    ui->pushButton_15sec->setChecked(true);
}

void FormLocal::on_pushButton_default_setting_clicked()
{
    ui->pushButton_default_setting->setChecked(true);
    ui->pushButton_advance_setting->setChecked(false);
}

void FormLocal::on_pushButton_advance_setting_clicked()
{
    ui->pushButton_advance_setting->setChecked(true);
    ui->pushButton_default_setting->setChecked(false);
}
