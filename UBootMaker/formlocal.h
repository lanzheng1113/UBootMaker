#ifndef FORMLOCAL_H
#define FORMLOCAL_H

#include <QWidget>

namespace Ui {
class FormLocal;
}

class FormLocal : public QWidget
{
    Q_OBJECT

public:
    explicit FormLocal(QWidget *parent = 0);
    ~FormLocal();

private slots:
    void on_pushButton_0sec_clicked();

    void on_pushButton_3sec_clicked();

    void on_pushButton_5sec_clicked();

    void on_pushButton_8sec_clicked();

    void on_pushButton_10sec_clicked();

    void on_pushButton_15sec_clicked();

    void on_pushButton_default_setting_clicked();

    void on_pushButton_advance_setting_clicked();

private:
    Ui::FormLocal *ui;
};

#endif // FORMLOCAL_H
