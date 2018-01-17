#ifndef FORMDEFAULTSTYLE_H
#define FORMDEFAULTSTYLE_H

#include <QWidget>

namespace Ui {
class FormDefaultStyle;
}

class QMenu;
class FormDefaultStyle : public QWidget
{
    Q_OBJECT

public:
    explicit FormDefaultStyle(QWidget *parent = 0);
    ~FormDefaultStyle();

private slots:
    void on_pushButton_hddfat32_clicked();

    void on_pushButton_zipfat32_clicked();

    void on_pushButton_hddfat16_clicked();

    void on_pushButton_zipfat16_clicked();

    void on_pushButton_auto_clicked();

    void on_pushButton_compat_clicked();

    void on_pushButton_enhance_clicked();

    void on_pushButton_personal_default_clicked();

    void on_pushButton_personal_advance_clicked();

    void on_pushButton_more_clicked();

    void on_pushButton_start_make_clicked();

private:
    Ui::FormDefaultStyle *ui;
    QMenu *pop_menu;
    void init_controls();
};

#endif // FORMDEFAULTSTYLE_H
