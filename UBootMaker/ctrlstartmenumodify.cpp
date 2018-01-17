#include "ctrlstartmenumodify.h"
#include "LaunchMenuItemProperty.h"
#include <Windows.h>

CtrlStartMenuModify::CtrlStartMenuModify(QObject *parent) : QObject(parent)
{

}

void CtrlStartMenuModify::loadMenu()
{
    emit menuLoading();
    Sleep(3000);
    CLaunchMenuItemProperty property;
    emit menuLoaded(property,QStringList());
}

void CtrlStartMenuModify::saveMenu()
{
    emit menuSaving();
    Sleep(3000);
    emit menuSaved();
}

void CtrlStartMenuModify::setFont(const QFont &font)
{
    emit fontChanged(font);
}

void CtrlStartMenuModify::setMenuBackGround(const QColor &colorNormal, const QColor &colorSelected)
{
    emit menuBackGroundChanged(colorNormal,colorSelected);
}

void CtrlStartMenuModify::setTextColor(const QColor &colorNormal, const QColor &colorSelected)
{
    emit textColorChanged(colorNormal,colorSelected);
}
