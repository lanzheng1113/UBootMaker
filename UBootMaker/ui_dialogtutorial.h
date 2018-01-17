/********************************************************************************
** Form generated from reading UI file 'dialogtutorial.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTUTORIAL_H
#define UI_DIALOGTUTORIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogTutorial
{
public:
    QPushButton *pushButton_close;
    QPushButton *pushButton_make_uboot;
    QPushButton *pushButton_make_iso_boot;
    QPushButton *pushButton_make_hdd_boot;
    QPushButton *pushButton_install_u_ghost_xp;
    QPushButton *pushButton_install_u_ghost_win7;
    QPushButton *pushButton_make_uboot_shortcut;
    QPushButton *pushButton_install_ori_xp;
    QPushButton *pushButton_install_ori_win7;
    QPushButton *pushButton_u_part_disk;

    void setupUi(QDialog *DialogTutorial)
    {
        if (DialogTutorial->objectName().isEmpty())
            DialogTutorial->setObjectName(QStringLiteral("DialogTutorial"));
        DialogTutorial->resize(580, 382);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogTutorial->sizePolicy().hasHeightForWidth());
        DialogTutorial->setSizePolicy(sizePolicy);
        DialogTutorial->setMaximumSize(QSize(580, 382));
        DialogTutorial->setAutoFillBackground(false);
        DialogTutorial->setStyleSheet(QStringLiteral(""));
        pushButton_close = new QPushButton(DialogTutorial);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(547, 1, 32, 25));
        sizePolicy.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy);
        pushButton_close->setMinimumSize(QSize(32, 25));
        pushButton_close->setMaximumSize(QSize(32, 25));
        pushButton_make_uboot = new QPushButton(DialogTutorial);
        pushButton_make_uboot->setObjectName(QStringLiteral("pushButton_make_uboot"));
        pushButton_make_uboot->setGeometry(QRect(10, 130, 120, 40));
        sizePolicy.setHeightForWidth(pushButton_make_uboot->sizePolicy().hasHeightForWidth());
        pushButton_make_uboot->setSizePolicy(sizePolicy);
        pushButton_make_uboot->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_make_iso_boot = new QPushButton(DialogTutorial);
        pushButton_make_iso_boot->setObjectName(QStringLiteral("pushButton_make_iso_boot"));
        pushButton_make_iso_boot->setGeometry(QRect(10, 230, 120, 40));
        sizePolicy.setHeightForWidth(pushButton_make_iso_boot->sizePolicy().hasHeightForWidth());
        pushButton_make_iso_boot->setSizePolicy(sizePolicy);
        pushButton_make_iso_boot->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_make_hdd_boot = new QPushButton(DialogTutorial);
        pushButton_make_hdd_boot->setObjectName(QStringLiteral("pushButton_make_hdd_boot"));
        pushButton_make_hdd_boot->setGeometry(QRect(10, 330, 120, 40));
        sizePolicy.setHeightForWidth(pushButton_make_hdd_boot->sizePolicy().hasHeightForWidth());
        pushButton_make_hdd_boot->setSizePolicy(sizePolicy);
        pushButton_make_hdd_boot->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_install_u_ghost_xp = new QPushButton(DialogTutorial);
        pushButton_install_u_ghost_xp->setObjectName(QStringLiteral("pushButton_install_u_ghost_xp"));
        pushButton_install_u_ghost_xp->setGeometry(QRect(140, 170, 135, 50));
        sizePolicy.setHeightForWidth(pushButton_install_u_ghost_xp->sizePolicy().hasHeightForWidth());
        pushButton_install_u_ghost_xp->setSizePolicy(sizePolicy);
        pushButton_install_u_ghost_xp->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_install_u_ghost_win7 = new QPushButton(DialogTutorial);
        pushButton_install_u_ghost_win7->setObjectName(QStringLiteral("pushButton_install_u_ghost_win7"));
        pushButton_install_u_ghost_win7->setGeometry(QRect(284, 170, 140, 50));
        sizePolicy.setHeightForWidth(pushButton_install_u_ghost_win7->sizePolicy().hasHeightForWidth());
        pushButton_install_u_ghost_win7->setSizePolicy(sizePolicy);
        pushButton_install_u_ghost_win7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_make_uboot_shortcut = new QPushButton(DialogTutorial);
        pushButton_make_uboot_shortcut->setObjectName(QStringLiteral("pushButton_make_uboot_shortcut"));
        pushButton_make_uboot_shortcut->setGeometry(QRect(430, 170, 140, 50));
        sizePolicy.setHeightForWidth(pushButton_make_uboot_shortcut->sizePolicy().hasHeightForWidth());
        pushButton_make_uboot_shortcut->setSizePolicy(sizePolicy);
        pushButton_make_uboot_shortcut->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_install_ori_xp = new QPushButton(DialogTutorial);
        pushButton_install_ori_xp->setObjectName(QStringLiteral("pushButton_install_ori_xp"));
        pushButton_install_ori_xp->setGeometry(QRect(140, 320, 135, 50));
        sizePolicy.setHeightForWidth(pushButton_install_ori_xp->sizePolicy().hasHeightForWidth());
        pushButton_install_ori_xp->setSizePolicy(sizePolicy);
        pushButton_install_ori_xp->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_install_ori_win7 = new QPushButton(DialogTutorial);
        pushButton_install_ori_win7->setObjectName(QStringLiteral("pushButton_install_ori_win7"));
        pushButton_install_ori_win7->setGeometry(QRect(284, 320, 140, 50));
        sizePolicy.setHeightForWidth(pushButton_install_ori_win7->sizePolicy().hasHeightForWidth());
        pushButton_install_ori_win7->setSizePolicy(sizePolicy);
        pushButton_install_ori_win7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_u_part_disk = new QPushButton(DialogTutorial);
        pushButton_u_part_disk->setObjectName(QStringLiteral("pushButton_u_part_disk"));
        pushButton_u_part_disk->setGeometry(QRect(430, 320, 140, 50));
        sizePolicy.setHeightForWidth(pushButton_u_part_disk->sizePolicy().hasHeightForWidth());
        pushButton_u_part_disk->setSizePolicy(sizePolicy);
        pushButton_u_part_disk->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(DialogTutorial);

        QMetaObject::connectSlotsByName(DialogTutorial);
    } // setupUi

    void retranslateUi(QDialog *DialogTutorial)
    {
        DialogTutorial->setWindowTitle(QApplication::translate("DialogTutorial", "tutorial", Q_NULLPTR));
        pushButton_close->setText(QString());
        pushButton_make_uboot->setText(QString());
        pushButton_make_iso_boot->setText(QString());
        pushButton_make_hdd_boot->setText(QString());
        pushButton_install_u_ghost_xp->setText(QString());
        pushButton_install_u_ghost_win7->setText(QString());
        pushButton_make_uboot_shortcut->setText(QString());
        pushButton_install_ori_xp->setText(QString());
        pushButton_install_ori_win7->setText(QString());
        pushButton_u_part_disk->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogTutorial: public Ui_DialogTutorial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTUTORIAL_H
