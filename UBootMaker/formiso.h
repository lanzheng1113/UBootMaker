#ifndef FORMISO_H
#define FORMISO_H

#include <QWidget>

namespace Ui {
class FormISO;
}

class FormISO : public QWidget
{
    Q_OBJECT

public:
    explicit FormISO(QWidget *parent = 0);
    ~FormISO();

private slots:
    void on_pushButton_default_setting_clicked();

    void on_pushButton_advance_setting_clicked();

private:
    Ui::FormISO *ui;
};

#endif // FORMISO_H
