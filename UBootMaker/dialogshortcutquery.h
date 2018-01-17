#ifndef DIALOGSHORTCUTQUERY_H
#define DIALOGSHORTCUTQUERY_H

#include <QDialog>

namespace Ui {
class DialogShortcutQuery;
}

class DialogShortcutQuery : public QDialog
{
    Q_OBJECT

public:
    explicit DialogShortcutQuery(QWidget *parent = 0);
    ~DialogShortcutQuery();

    virtual void paintEvent(QPaintEvent* );
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);

private slots:
    void on_pushButton_assamble_clicked();

    void on_pushButton_close_clicked();

    void on_pushButton_icon_note_clicked();

    void on_pushButton_icon_pc_clicked();

private:
    Ui::DialogShortcutQuery *ui;
    QWidget* pPageAssumbPC;
    QWidget* pPageIconNotePC;
    QWidget* pPageIconDeskPC;
};

#endif // DIALOGSHORTCUTQUERY_H
