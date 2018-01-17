/********************************************************************************
** Form generated from reading UI file 'dlgadvancesetting.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGADVANCESETTING_H
#define UI_DLGADVANCESETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DlgAdvanceSetting
{
public:
    QPushButton *pushButton_close;
    QPushButton *pushButton_support;
    QPushButton *pushButton_personal;
    QPushButton *pushButton_set_menu;
    QPushButton *pushButton_set_progress_bar;
    QPushButton *pushButton_set_launch_bg;
    QPushButton *pushButton_set_pe_bg;
    QPushButton *pushButton_restore_default;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_save;

    void setupUi(QDialog *DlgAdvanceSetting)
    {
        if (DlgAdvanceSetting->objectName().isEmpty())
            DlgAdvanceSetting->setObjectName(QStringLiteral("DlgAdvanceSetting"));
        DlgAdvanceSetting->resize(800, 705);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DlgAdvanceSetting->sizePolicy().hasHeightForWidth());
        DlgAdvanceSetting->setSizePolicy(sizePolicy);
        DlgAdvanceSetting->setMaximumSize(QSize(800, 705));
        pushButton_close = new QPushButton(DlgAdvanceSetting);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(768, 1, 32, 25));
        pushButton_support = new QPushButton(DlgAdvanceSetting);
        pushButton_support->setObjectName(QStringLiteral("pushButton_support"));
        pushButton_support->setGeometry(QRect(10, 667, 24, 24));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(24);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_support->sizePolicy().hasHeightForWidth());
        pushButton_support->setSizePolicy(sizePolicy1);
        pushButton_support->setMinimumSize(QSize(24, 24));
        pushButton_support->setMaximumSize(QSize(24, 24));
        pushButton_personal = new QPushButton(DlgAdvanceSetting);
        pushButton_personal->setObjectName(QStringLiteral("pushButton_personal"));
        pushButton_personal->setGeometry(QRect(44, 671, 117, 16));
        sizePolicy.setHeightForWidth(pushButton_personal->sizePolicy().hasHeightForWidth());
        pushButton_personal->setSizePolicy(sizePolicy);
        pushButton_personal->setMinimumSize(QSize(117, 16));
        pushButton_personal->setMaximumSize(QSize(117, 16));
        pushButton_personal->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_set_menu = new QPushButton(DlgAdvanceSetting);
        pushButton_set_menu->setObjectName(QStringLiteral("pushButton_set_menu"));
        pushButton_set_menu->setGeometry(QRect(300, 667, 70, 24));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(70);
        sizePolicy2.setVerticalStretch(24);
        sizePolicy2.setHeightForWidth(pushButton_set_menu->sizePolicy().hasHeightForWidth());
        pushButton_set_menu->setSizePolicy(sizePolicy2);
        pushButton_set_menu->setMinimumSize(QSize(70, 24));
        pushButton_set_menu->setMaximumSize(QSize(70, 24));
        pushButton_set_progress_bar = new QPushButton(DlgAdvanceSetting);
        pushButton_set_progress_bar->setObjectName(QStringLiteral("pushButton_set_progress_bar"));
        pushButton_set_progress_bar->setGeometry(QRect(380, 667, 80, 24));
        sizePolicy.setHeightForWidth(pushButton_set_progress_bar->sizePolicy().hasHeightForWidth());
        pushButton_set_progress_bar->setSizePolicy(sizePolicy);
        pushButton_set_progress_bar->setMinimumSize(QSize(80, 24));
        pushButton_set_progress_bar->setMaximumSize(QSize(80, 24));
        pushButton_set_launch_bg = new QPushButton(DlgAdvanceSetting);
        pushButton_set_launch_bg->setObjectName(QStringLiteral("pushButton_set_launch_bg"));
        pushButton_set_launch_bg->setGeometry(QRect(470, 667, 70, 24));
        sizePolicy.setHeightForWidth(pushButton_set_launch_bg->sizePolicy().hasHeightForWidth());
        pushButton_set_launch_bg->setSizePolicy(sizePolicy);
        pushButton_set_launch_bg->setMinimumSize(QSize(70, 24));
        pushButton_set_launch_bg->setMaximumSize(QSize(70, 24));
        pushButton_set_pe_bg = new QPushButton(DlgAdvanceSetting);
        pushButton_set_pe_bg->setObjectName(QStringLiteral("pushButton_set_pe_bg"));
        pushButton_set_pe_bg->setGeometry(QRect(550, 667, 60, 24));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(24);
        sizePolicy3.setHeightForWidth(pushButton_set_pe_bg->sizePolicy().hasHeightForWidth());
        pushButton_set_pe_bg->setSizePolicy(sizePolicy3);
        pushButton_set_pe_bg->setMaximumSize(QSize(60, 24));
        pushButton_restore_default = new QPushButton(DlgAdvanceSetting);
        pushButton_restore_default->setObjectName(QStringLiteral("pushButton_restore_default"));
        pushButton_restore_default->setGeometry(QRect(620, 667, 70, 24));
        sizePolicy.setHeightForWidth(pushButton_restore_default->sizePolicy().hasHeightForWidth());
        pushButton_restore_default->setSizePolicy(sizePolicy);
        pushButton_restore_default->setMaximumSize(QSize(70, 24));
        pushButton_cancel = new QPushButton(DlgAdvanceSetting);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(700, 667, 40, 24));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(40);
        sizePolicy4.setVerticalStretch(24);
        sizePolicy4.setHeightForWidth(pushButton_cancel->sizePolicy().hasHeightForWidth());
        pushButton_cancel->setSizePolicy(sizePolicy4);
        pushButton_cancel->setMaximumSize(QSize(40, 24));
        pushButton_save = new QPushButton(DlgAdvanceSetting);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(750, 667, 40, 24));
        sizePolicy4.setHeightForWidth(pushButton_save->sizePolicy().hasHeightForWidth());
        pushButton_save->setSizePolicy(sizePolicy4);
        pushButton_save->setMaximumSize(QSize(40, 24));

        retranslateUi(DlgAdvanceSetting);

        QMetaObject::connectSlotsByName(DlgAdvanceSetting);
    } // setupUi

    void retranslateUi(QDialog *DlgAdvanceSetting)
    {
        DlgAdvanceSetting->setWindowTitle(QApplication::translate("DlgAdvanceSetting", "\344\270\252\346\200\247\345\214\226\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_close->setText(QString());
        pushButton_support->setText(QString());
        pushButton_personal->setText(QString());
        pushButton_set_menu->setText(QString());
        pushButton_set_progress_bar->setText(QString());
        pushButton_set_launch_bg->setText(QString());
        pushButton_set_pe_bg->setText(QString());
        pushButton_restore_default->setText(QString());
        pushButton_cancel->setText(QString());
        pushButton_save->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DlgAdvanceSetting: public Ui_DlgAdvanceSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGADVANCESETTING_H
