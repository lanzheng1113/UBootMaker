#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

// FormMainCenter是主窗口的center widget
class FormMainCenter;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *);
private:
    Ui::MainWindow *ui;
    FormMainCenter* centerWidget;
};


#endif // MAINWINDOW_H
