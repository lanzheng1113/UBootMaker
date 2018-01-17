#ifndef FORMMAINCENTER_H
#define FORMMAINCENTER_H

#include <QWidget>

namespace Ui {
class FormMainCenter;
}

class FormDefaultStyle;
class FormISO;
class FormLocal;
class FormHelpInfo;

/**
 * @brief FormMainCenter是主界面的中心页面，包含了三个子窗口分别对应默认模式、ISO模式和本地模式
 */
class FormMainCenter : public QWidget
{
    Q_OBJECT

public:
    explicit FormMainCenter(QWidget *parent = 0);
    ~FormMainCenter();

    virtual void paintEvent(QPaintEvent* );
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
private slots:
    void on_pushButton_min_clicked();

    void on_pushButton_close_clicked();

    void on_pushButton_ModeDefault_clicked();

    void on_pushButton_ModeISO_clicked();

    void on_pushButton_ModeLocal_clicked();

private:
    void button_init();
    void subwindows_init();
    Ui::FormMainCenter *ui;
    //主窗口包含四个子窗口，分别对应默认模式、ISO模式和本地模式的三个子页面。以及底部的帮助信息
    FormDefaultStyle *m_pFormDefault;
    FormISO *m_pFormISO;
    FormLocal *m_pFormLocal;
    FormHelpInfo *m_pFormHelpInfo;
    //记录窗口拖动的位置
    QPoint dragPosition;
    QPoint orignalPositon;
};


#endif // FORMMAINCENTER_H
