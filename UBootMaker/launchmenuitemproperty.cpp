#include "LaunchMenuItemProperty.h"


CLaunchMenuItemProperty::CLaunchMenuItemProperty(const CLaunchMenuItemProperty &property)
{
    copy(property);
}

CLaunchMenuItemProperty &CLaunchMenuItemProperty::operator =(const CLaunchMenuItemProperty &property)
{
    copy(property);
    return *this;
}

QFont CLaunchMenuItemProperty::getFont() const
{
    return font;
}

void CLaunchMenuItemProperty::setFont(const QFont &value)
{
    font = value;
}

QColor CLaunchMenuItemProperty::getbackGroundNormal() const
{
    return backGroundNormal;
}

void CLaunchMenuItemProperty::setbackGroundNormal(const QColor &value)
{
    backGroundNormal = value;
}

QColor CLaunchMenuItemProperty::getbackGroundSelected() const
{
    return backGroundSelected;
}

void CLaunchMenuItemProperty::setbackGroundSelected(const QColor &value)
{
    backGroundSelected = value;
}

QColor CLaunchMenuItemProperty::gettextColorNormal() const
{
    return textColorNormal;
}

void CLaunchMenuItemProperty::settextColorNormal(const QColor &value)
{
    textColorNormal = value;
}

QColor CLaunchMenuItemProperty::gettextColorSelected() const
{
    return textColorSelected;
}

void CLaunchMenuItemProperty::settextColorSelected(const QColor &value)
{
    textColorSelected = value;
}

void CLaunchMenuItemProperty::copy(const CLaunchMenuItemProperty &property)
{
    font = property.font;
    backGroundNormal = property.backGroundNormal;
    backGroundSelected = property.backGroundSelected;
    textColorNormal = property.textColorNormal;
    textColorSelected = property.textColorSelected;
}

