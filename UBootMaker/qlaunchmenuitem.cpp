#include "qlaunchmenuitem.h"
#include <QPainter>


QLaunchMenuItem::QLaunchMenuItem(QWidget *parent) : QWidget(parent)
{

}

bool QLaunchMenuItem::getIsSelected() const
{
    return isSelected;
}

void QLaunchMenuItem::setIsSelected(bool value)
{
    isSelected = value;
}

QString QLaunchMenuItem::getText() const
{
    return text;
}

void QLaunchMenuItem::setText(const QString &value)
{
    text = value;
}

void QLaunchMenuItem::setDrawProperty(const CLaunchMenuItemProperty &property)
{
    QColor corlor = property.getbackGroundNormal();
    printf("%d",corlor.alpha());
    drawProperty = property;
}

void QLaunchMenuItem::paintEvent(QPaintEvent *)
{
    // 注意：需要在center中绘制背景，在MainFrame中执行一下代码无效。
    QColor bgColor;
    QColor textColor;
    if (isSelected)
    {
        bgColor = drawProperty.getbackGroundSelected();
        textColor = drawProperty.gettextColorSelected();
    }
    else
    {
        bgColor = drawProperty.getbackGroundNormal();
        textColor = drawProperty.gettextColorNormal();
    }
    QPainter painter(this);
    QBrush brush(bgColor);
    // 默认是透明模式，需要设置为OpaqueMode模式才可以自动绘制背景。
    painter.setBackgroundMode(Qt::OpaqueMode);
    // 告诉窗体需要什么颜色的画刷来绘制背景。
    painter.setBackground(brush);
    // 设置字体
    painter.setFont(drawProperty.getFont());
    // 设置颜色
    painter.setPen(textColor);
}
