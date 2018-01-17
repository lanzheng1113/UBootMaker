#ifndef DIALOGTUTORIAL_H
#define DIALOGTUTORIAL_H

#include <QDialog>

namespace Ui {
class DialogTutorial;
}

class DialogTutorial : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTutorial(QWidget *parent = 0);
    ~DialogTutorial();

    virtual void paintEvent(QPaintEvent* );
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);

    bool getIsJumpToShortCut() const;

private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_make_uboot_clicked();

    void on_pushButton_make_iso_boot_clicked();

    void on_pushButton_make_hdd_boot_clicked();

    void on_pushButton_install_u_ghost_xp_clicked();

    void on_pushButton_install_ori_xp_clicked();

    void on_pushButton_install_u_ghost_win7_clicked();

    void on_pushButton_install_ori_win7_clicked();

    void on_pushButton_make_uboot_shortcut_clicked();

    void on_pushButton_u_part_disk_clicked();

private:
    Ui::DialogTutorial *ui;
    bool isJumpToShortCut;
};

#endif // DIALOGTUTORIAL_H
