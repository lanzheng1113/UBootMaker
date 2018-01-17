#ifndef DIALOGMENUSETTINGS_H
#define DIALOGMENUSETTINGS_H

#include <QDialog>
#include <QFont>
#include <QColor>

namespace Ui {
class DialogMenuSettings;
}

class DialogMenuSettings : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMenuSettings(QWidget *parent = 0);
    ~DialogMenuSettings();

    virtual void paintEvent(QPaintEvent *);
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_font_clicked();

    void on_pushButton_index_dec_clicked();

    void on_pushButton_index_inc_clicked();

    void on_pushButton_color_clicked();

    void on_pushButton_selected_color_clicked();

    void on_pushButton_selected_bkcolor_clicked();

    void on_pushButton_add_menu_bg_clicked();

    void on_pushButton_del_menu_bg_clicked();

    void on_pushButton_modify_bg_color_clicked();

    void on_pushButton_item_rename_clicked();

private:
    Ui::DialogMenuSettings *ui;
    int menuIndex;
    QFont menuFont;
    QColor colorMenu;
    QColor colorSelectedItem;
    QColor colorSelectedItemBG;
    QColor colorBg;
};

#endif // DIALOGMENUSETTINGS_H
