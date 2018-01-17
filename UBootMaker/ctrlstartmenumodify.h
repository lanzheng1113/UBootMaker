#ifndef CTRLSTARTMENUMODIFY_H
#define CTRLSTARTMENUMODIFY_H

#include <QObject>
#include <QStringList>
#include <QFont>
#include <QColor>

//
// 控制器 - 设置菜单，这个类是设置界面和预览界面沟通的桥梁。
// 简单说来设置界面触发事件，控制器响应界面的输入处理程序逻辑，使用模型保存数据。
// 预览界面响应控制器的输出，根据输出响应不同的界面。
//
class CLaunchMenuItemProperty;

class CtrlStartMenuModify : public QObject
{
    Q_OBJECT
public:
    explicit CtrlStartMenuModify(QObject *parent = 0);
public:
signals:
    // 正在载入目录 - 预览界面显示“正在加载”的动画
    void menuLoading();
    // 目录已经载入 - 预览界面移除“正在加载”的动画
    void menuLoaded(const CLaunchMenuItemProperty& property, const QStringList& menuList);
    // 正在保存 - 预览界面显示“正在保存”的动画
    void menuSaving();
    // 已经保存完毕 - 预览界面移除“正在保存”的动画
    void menuSaved();
    // 文本的字体发生了变化 - 预览界面使用新的字体重新绘制界面。
    void fontChanged( const QFont& font );
    // 菜单项背景颜色的设置发生了变化 - 预览界面使用新的背景绘制窗口
    void menuBackGroundChanged( const QColor& colorNormal, const QColor& colorSelected );
    // 文本颜色设置已经发生了变化 - 预览界面使用新的文本颜色绘制窗口
    void textColorChanged( const QColor& colorNormal, const QColor& colorSelected );
public slots:
    // 加载目录的动作
    void loadMenu();
    // 保存目录的动作
    void saveMenu();
    // 设置字体的动作
    void setFont( const QFont& font);
    // 设置菜单项背景颜色的动作
    void setMenuBackGround( const QColor& colorNormal, const QColor& colorSelected );
    // 设置文本颜色的动作
    void setTextColor( const QColor& colorNormal, const QColor& colorSelected );
private:

};

#endif // CTRLSTARTMENUMODIFY_H
