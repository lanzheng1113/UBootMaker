#include "formhelpinfo.h"
#include "ui_formhelpinfo.h"
#include "dialogfeedback.h"
#include "dialogtutorial.h"
#include "DialogShortcutQuery.h"

FormHelpInfo::FormHelpInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormHelpInfo)
{
    ui->setupUi(this);
    init_buttons();
}

FormHelpInfo::~FormHelpInfo()
{
    delete ui;
}

void FormHelpInfo::init_buttons()
{
    ui->pushButton_feedback->setStyleSheet("QPushButton{border-image: url(:/images/feedback_1.jpg);}"
                                           "QPushButton:hover{border-image: url(:/images/feedback_2.jpg);}"
                                           "QPushButton:pressed{border-image: url(:/images/feedback_2.jpg);}");
    ui->pushButton_tutorial->setStyleSheet("QPushButton{border-image: url(:/images/Help_1.jpg);}"
                                           "QPushButton:hover{border-image: url(:/images/Help_2.jpg);}"
                                           "QPushButton:pressed{border-image: url(:/images/Help_2.jpg);}");
    ui->pushButton_shotcut_query->setStyleSheet("QPushButton{border-image: url(:/images/HotKey_1.jpg);}"
                                                "QPushButton:hover{border-image: url(:/images/HotKey_2.jpg);}"
                                                "QPushButton:pressed{border-image: url(:/images/HotKey_2.jpg);}");
}

void FormHelpInfo::on_pushButton_feedback_clicked()
{
    //点击了反馈建议
    DialogFeedBack dlg;
    dlg.exec();
}


void FormHelpInfo::on_pushButton_tutorial_clicked()
{
    DialogTutorial dlg;
    dlg.exec();
    if(dlg.getIsJumpToShortCut())
    {
        DialogShortcutQuery dlg;
        dlg.exec();
    }
}

void FormHelpInfo::on_pushButton_shotcut_query_clicked()
{
    DialogShortcutQuery dlg;
    dlg.exec();
}
