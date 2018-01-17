#ifndef QLAUNCHMENUITEM_H
#define QLAUNCHMENUITEM_H

#include <QWidget>
#include <QFont>
#include <QColor>
#include <QString>

#include "LaunchMenuItemProperty.h"

class QLaunchMenuItem : public QWidget
{
    Q_OBJECT
public:
    explicit QLaunchMenuItem(QWidget *parent = 0);

    bool getIsSelected() const;
    void setIsSelected(bool value);

    QString getText() const;
    void setText(const QString &value);

    //设置属性，并强制刷新一次。
    void setDrawProperty(const CLaunchMenuItemProperty& property);
    virtual void paintEvent(QPaintEvent *);
signals:
    
public slots:
private:
    bool isSelected;
    QString text;
    CLaunchMenuItemProperty drawProperty;
};

#endif // QLAUNCHMENUITEM_H
