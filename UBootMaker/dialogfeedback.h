#ifndef DIALOGFEEDBACK_H
#define DIALOGFEEDBACK_H

#include <QDialog>

namespace Ui {
class DialogFeedBack;
}

class DialogFeedBack : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFeedBack(QWidget *parent = 0);
    ~DialogFeedBack();

    virtual void paintEvent(QPaintEvent* );
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);
private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_submit_clicked();

    void on_pushButton_cancel_clicked();

private:
    Ui::DialogFeedBack *ui;
};

#endif // DIALOGFEEDBACK_H
