#ifndef CLAUNCHMENUITEM_H
#define CLAUNCHMENUITEM_H

#include <QFont>
#include <QColor>
#include <QString>

class CLaunchMenuItemProperty
{
public:
    CLaunchMenuItemProperty() {}
    CLaunchMenuItemProperty( const CLaunchMenuItemProperty& property );
    CLaunchMenuItemProperty& operator = ( const CLaunchMenuItemProperty& property );

public:

    QFont getFont() const;
    void setFont(const QFont &value);

    QColor getbackGroundNormal() const;

    void setbackGroundNormal(const QColor &value);

    QColor getbackGroundSelected() const;

    void setbackGroundSelected(const QColor &value);

    QColor gettextColorNormal() const;

    void settextColorNormal(const QColor &value);

    QColor gettextColorSelected() const;

    void settextColorSelected(const QColor &value);
private:
    void copy( const CLaunchMenuItemProperty& property );
private:
    QFont font;
    QColor backGroundNormal;
    QColor backGroundSelected;
    QColor textColorNormal;
    QColor textColorSelected;
};

#endif // CLAUNCHMENUITEM_H
