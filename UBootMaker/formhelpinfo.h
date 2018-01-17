#ifndef FORMHELPINFO_H
#define FORMHELPINFO_H

#include <QWidget>

namespace Ui {
class FormHelpInfo;
}

class FormHelpInfo : public QWidget
{
    Q_OBJECT

public:
    explicit FormHelpInfo(QWidget *parent = 0);
    ~FormHelpInfo();

private slots:
    void on_pushButton_feedback_clicked();

    void on_pushButton_tutorial_clicked();

    void on_pushButton_shotcut_query_clicked();

private:
    Ui::FormHelpInfo *ui;
    void init_buttons();
};


#endif // FORMHELPINFO_H
