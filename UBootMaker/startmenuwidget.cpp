#include "startmenuwidget.h"
#include "ui_startmenuwidget.h"
#include "ctrlstartmenumodify.h"

StartMenuWidget::StartMenuWidget(QWidget *parent) :
    QWidget(parent),
    pCtrlMenuSetting(nullptr),
    ui(new Ui::StartMenuWidget)
{
    ui->setupUi(this);
}

StartMenuWidget::~StartMenuWidget()
{
    delete ui;
}

void StartMenuWidget::loadStart()
{

}

void StartMenuWidget::loadFinish()
{

}

void StartMenuWidget::saveStart()
{

}

void StartMenuWidget::saveFinish()
{

}
