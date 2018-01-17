#ifndef STARTMENUWIDGET_H
#define STARTMENUWIDGET_H

#include <QWidget>

namespace Ui {
class StartMenuWidget;
}

class CtrlStartMenuModify;

/**
 * @brief The StartMenuWidget class 开始菜单预览界面，在高级设置窗体中间位置，是“高级设置”的一个子窗体
 * 里面展示了各个菜单元素。设置预览的控制器为CtrlStartMenuModify类。
 */
class StartMenuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StartMenuWidget(QWidget *parent = 0);
    ~StartMenuWidget();
private slots:
    // 显示开始加载的界面
    void loadStart();
    // 显示加载完成的界面
    void loadFinish();
    // 显示正在保存的界面
    void saveStart();
    // 显示保存完成的界面
    void saveFinish();
private:
    Ui::StartMenuWidget *ui;
    CtrlStartMenuModify* pCtrlMenuSetting;
};

#endif // STARTMENUWIDGET_H
