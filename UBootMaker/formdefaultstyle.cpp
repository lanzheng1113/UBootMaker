#include "formdefaultstyle.h"
#include "ui_formdefaultstyle.h"
#include <QMenu.h>
#include "dlgadvancesetting.h"
#include "qwininterface.h"
#include <QMessageBox.h>
FormDefaultStyle::FormDefaultStyle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormDefaultStyle),
    pop_menu(NULL)
{
    ui->setupUi(this);
    setStyleSheet("QPushButton{font:bold 12px \"Microsoft YaHei\";color: rgb(120, 120, 120);}"
                  "QPushButton::hover{font:bold 12px \"Microsoft YaHei\";color: rgb(80, 80, 80);border: 1px solid gray;}"
                  "QPushButton::pressed{font:bold 12px \"Microsoft YaHei\";color: rgb(80, 80, 80);border: 1px solid gray;}"
                  "QPushButton::checked{font:bold 12px \"Microsoft YaHei\";color: rgb(80, 80, 80);border: 1px solid green;}"
                  "QLabel{font:bold 14px \"Microsoft YaHei\";color: rgb(120, 120, 120);}"
                  "QCheckBox{font:bold 12px \"Microsoft YaHei\";color: rgb(120, 120, 120);}");
    init_controls();
}

FormDefaultStyle::~FormDefaultStyle()
{
    delete pop_menu;
    delete ui;
}

void FormDefaultStyle::init_controls()
{
    ui->pushButton_start_make->setStyleSheet("QPushButton{border-image: url(:/images/1_1_Btn1_1.jpg);}"
                                             "QPushButton:hover{border-image: url(:/images/1_1_Btn1_2.jpg);}"
                                             "QPushButton:pressed{border-image: url(:/images/1_1_Btn1_3.jpg);}");
    ui->pushButton_more->setStyleSheet("QPushButton{border-image:url(:/images/1_more_1.jpg);}"
                                       "QPushButton:hover{border-image:url(:/images/1_more_2.jpg);}"
                                       "QPushButton:pressed{border-image: url(:/images/1_more_3.jpg);}");
    //创建菜单、菜单项
    pop_menu = new QMenu();
    QAction *add_images_action = new QAction(this);
    QAction *add_folder_action = new QAction(this);
    QAction *remove_selected_action = new QAction(this);
    QAction *remove_all_action = new QAction(this);
    add_images_action->setIcon(QIcon(":/images/2_Btn1_1.jpg"));
    add_images_action->setText(QString::fromLocal8Bit("归还空间"));
    add_folder_action->setIcon(QIcon(":/images/2_Btn2_1.jpg"));
    add_folder_action->setText(QString::fromLocal8Bit("格式转换"));
    remove_selected_action->setIcon(QIcon(":/images/2_Btn3_1.jpg"));
    remove_selected_action->setText(QString::fromLocal8Bit("模拟启动"));
    remove_all_action->setIcon(QIcon(":/images/2_Btn4_1.jpg"));
    remove_all_action->setText(QString::fromLocal8Bit("升级启动盘"));
    //清除原有菜单
    pop_menu->addAction(add_images_action);
    pop_menu->addAction(add_folder_action);
    pop_menu->addAction(remove_selected_action);
    pop_menu->addAction(remove_all_action);
}

void FormDefaultStyle::on_pushButton_hddfat32_clicked()
{
    if(!ui->pushButton_hddfat16->isChecked() &&
       !ui->pushButton_zipfat32->isChecked() &&
       !ui->pushButton_zipfat16->isChecked())
    {
        ui->pushButton_hddfat32->setChecked(true);
        return;
    }

    if(ui->pushButton_hddfat32->isChecked())
    {
        ui->pushButton_hddfat16->setChecked(false);
        ui->pushButton_zipfat32->setChecked(false);
        ui->pushButton_zipfat16->setChecked(false);
    }
}

void FormDefaultStyle::on_pushButton_zipfat32_clicked()
{
    if(!ui->pushButton_hddfat16->isChecked() &&
       !ui->pushButton_hddfat32->isChecked() &&
       !ui->pushButton_zipfat16->isChecked())
    {
        ui->pushButton_zipfat32->setChecked(true);
        return;
    }
    if(ui->pushButton_zipfat32->isChecked())
    {
        ui->pushButton_hddfat16->setChecked(false);
        ui->pushButton_hddfat32->setChecked(false);
        ui->pushButton_zipfat16->setChecked(false);
    }
}

void FormDefaultStyle::on_pushButton_hddfat16_clicked()
{
    if(!ui->pushButton_zipfat32->isChecked() &&
       !ui->pushButton_hddfat32->isChecked() &&
       !ui->pushButton_zipfat16->isChecked())
    {
        ui->pushButton_hddfat16->setChecked(true);
        return;
    }
    if(ui->pushButton_hddfat16->isChecked())
    {
        ui->pushButton_zipfat32->setChecked(false);
        ui->pushButton_hddfat32->setChecked(false);
        ui->pushButton_zipfat16->setChecked(false);
    }
}

void FormDefaultStyle::on_pushButton_zipfat16_clicked()
{
    if(!ui->pushButton_zipfat32->isChecked() &&
       !ui->pushButton_hddfat32->isChecked() &&
       !ui->pushButton_hddfat16->isChecked())
    {
        ui->pushButton_zipfat16->setChecked(true);
        return;
    }
    if(ui->pushButton_zipfat16->isChecked())
    {
        ui->pushButton_zipfat32->setChecked(false);
        ui->pushButton_hddfat32->setChecked(false);
        ui->pushButton_hddfat16->setChecked(false);
    }
}

void FormDefaultStyle::on_pushButton_auto_clicked()
{
    if(!ui->pushButton_compat->isChecked() &&
       !ui->pushButton_enhance->isChecked())
    {
        ui->pushButton_auto->setChecked(true);
        return;
    }
    if(ui->pushButton_auto->isChecked())
    {
        ui->pushButton_compat->setChecked(false);
        ui->pushButton_enhance->setChecked(false);
    }
}

void FormDefaultStyle::on_pushButton_compat_clicked()
{
    if(!ui->pushButton_auto->isChecked() &&
       !ui->pushButton_enhance->isChecked())
    {
        ui->pushButton_compat->setChecked(true);
        return;
    }
    if(ui->pushButton_compat->isChecked())
    {
        ui->pushButton_auto->setChecked(false);
        ui->pushButton_enhance->setChecked(false);
    }
}

void FormDefaultStyle::on_pushButton_enhance_clicked()
{
    if(!ui->pushButton_auto->isChecked() &&
       !ui->pushButton_compat->isChecked())
    {
        ui->pushButton_enhance->setChecked(true);
        return;
    }
    if(ui->pushButton_enhance->isChecked())
    {
        ui->pushButton_auto->setChecked(false);
        ui->pushButton_compat->setChecked(false);
    }
}

void FormDefaultStyle::on_pushButton_personal_default_clicked()
{
    if(!ui->pushButton_personal_advance->isChecked())
    {
        ui->pushButton_personal_default->setChecked(true);
        return;
    }
    if(ui->pushButton_personal_default->isChecked())
    {
        ui->pushButton_personal_advance->setChecked(false);
    }
}

extern DlgAdvanceSetting *dlgAdvanceSetting;

void FormDefaultStyle::on_pushButton_personal_advance_clicked()
{
    ui->pushButton_personal_default->setChecked(false);
    ui->pushButton_personal_advance->setChecked(true);
    if(nullptr == dlgAdvanceSetting)
    {
        dlgAdvanceSetting = new DlgAdvanceSetting(nullptr);
        dlgAdvanceSetting->setModal(false);
        dlgAdvanceSetting->show();
    }else{
        dlgAdvanceSetting->show();
    }
    // TODO : hide the parent until the "advance window" be closed.
    //hide();
}

void FormDefaultStyle::on_pushButton_more_clicked()
{
    //菜单出现的位置为当前鼠标的位置
    pop_menu->exec(mapToGlobal(QPoint(560,35)));
}

#include <util/StringEx.h>
#include <Util/Path.h>
void FormDefaultStyle::on_pushButton_start_make_clicked()
{
    //QString WorkDir = QWinInterface::GetSubProcessWorkDir();
    String testString = "12300" + String::fromNumber(121);
    std::string str = Path::getApplicationDirPath();
    QMessageBox::information(this,QString::fromLocal8Bit(testString.c_str()),QString::fromLocal8Bit(str.c_str()),QMessageBox::Ok);
}
