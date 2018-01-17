#ifndef DIALOGCANCELSUPPORT_H
#define DIALOGCANCELSUPPORT_H

#include <QDialog>

namespace Ui {
class DialogCancelSupport;
}

class DialogCancelSupport : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCancelSupport(QWidget *parent = 0);
    ~DialogCancelSupport();

    virtual void paintEvent(QPaintEvent *);
private slots:
    void on_pushButton_cancel_support_clicked();

    void on_pushButton_support_continue_clicked();

    void on_pushButton_close_clicked();

private:
    Ui::DialogCancelSupport *ui;
};

#endif // DIALOGCANCELSUPPORT_H
