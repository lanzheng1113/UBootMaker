#ifndef DLGADVANCESETTING_H
#define DLGADVANCESETTING_H

#include <QDialog>

namespace Ui {
class DlgAdvanceSetting;
}

class DialogMenuSettings;
class StartMenuWidget;

class DlgAdvanceSetting : public QDialog
{
    Q_OBJECT

public:
    explicit DlgAdvanceSetting(QWidget *parent = 0);
    ~DlgAdvanceSetting();

    virtual void paintEvent(QPaintEvent *);
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);

    void loadMessageFile();
private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_support_clicked();
    
    void on_pushButton_personal_clicked();

    void on_pushButton_set_menu_clicked();

private:
    Ui::DlgAdvanceSetting *ui;
    DialogMenuSettings* dlgMenuSetting;
    StartMenuWidget* pStartMenuWidget;
};

#endif // DLGADVANCESETTING_H
