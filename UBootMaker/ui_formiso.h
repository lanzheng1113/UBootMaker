/********************************************************************************
** Form generated from reading UI file 'formiso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMISO_H
#define UI_FORMISO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormISO
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_path_iso;
    QPushButton *pushButton_explore;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *pushButton_default_setting;
    QPushButton *pushButton_advance_setting;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_start_make;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_fire_cd;
    QPushButton *pushButton_simulate_boot;

    void setupUi(QWidget *FormISO)
    {
        if (FormISO->objectName().isEmpty())
            FormISO->setObjectName(QStringLiteral("FormISO"));
        FormISO->resize(700, 295);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FormISO->sizePolicy().hasHeightForWidth());
        FormISO->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(FormISO);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 707, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 15, 0, 15);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(117, -1, 0, -1);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(77, 28));
        label->setMaximumSize(QSize(77, 28));

        horizontalLayout_4->addWidget(label);

        lineEdit_path_iso = new QLineEdit(verticalLayoutWidget);
        lineEdit_path_iso->setObjectName(QStringLiteral("lineEdit_path_iso"));
        sizePolicy.setHeightForWidth(lineEdit_path_iso->sizePolicy().hasHeightForWidth());
        lineEdit_path_iso->setSizePolicy(sizePolicy);
        lineEdit_path_iso->setMinimumSize(QSize(270, 28));
        lineEdit_path_iso->setMaximumSize(QSize(270, 28));

        horizontalLayout_4->addWidget(lineEdit_path_iso);

        pushButton_explore = new QPushButton(verticalLayoutWidget);
        pushButton_explore->setObjectName(QStringLiteral("pushButton_explore"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(80);
        sizePolicy1.setVerticalStretch(28);
        sizePolicy1.setHeightForWidth(pushButton_explore->sizePolicy().hasHeightForWidth());
        pushButton_explore->setSizePolicy(sizePolicy1);
        pushButton_explore->setMinimumSize(QSize(80, 28));
        pushButton_explore->setMaximumSize(QSize(80, 28));

        horizontalLayout_4->addWidget(pushButton_explore);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(117, -1, 0, -1);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(76, 28));
        label_2->setMaximumSize(QSize(76, 28));

        horizontalLayout_3->addWidget(label_2);

        pushButton_default_setting = new QPushButton(verticalLayoutWidget);
        pushButton_default_setting->setObjectName(QStringLiteral("pushButton_default_setting"));
        sizePolicy1.setHeightForWidth(pushButton_default_setting->sizePolicy().hasHeightForWidth());
        pushButton_default_setting->setSizePolicy(sizePolicy1);
        pushButton_default_setting->setMinimumSize(QSize(80, 28));
        pushButton_default_setting->setMaximumSize(QSize(80, 28));
        pushButton_default_setting->setCheckable(true);
        pushButton_default_setting->setChecked(true);

        horizontalLayout_3->addWidget(pushButton_default_setting);

        pushButton_advance_setting = new QPushButton(verticalLayoutWidget);
        pushButton_advance_setting->setObjectName(QStringLiteral("pushButton_advance_setting"));
        sizePolicy1.setHeightForWidth(pushButton_advance_setting->sizePolicy().hasHeightForWidth());
        pushButton_advance_setting->setSizePolicy(sizePolicy1);
        pushButton_advance_setting->setMinimumSize(QSize(80, 28));
        pushButton_advance_setting->setMaximumSize(QSize(80, 28));
        pushButton_advance_setting->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_advance_setting);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(203, -1, 0, -1);
        pushButton_start_make = new QPushButton(verticalLayoutWidget);
        pushButton_start_make->setObjectName(QStringLiteral("pushButton_start_make"));
        sizePolicy.setHeightForWidth(pushButton_start_make->sizePolicy().hasHeightForWidth());
        pushButton_start_make->setSizePolicy(sizePolicy);
        pushButton_start_make->setMinimumSize(QSize(120, 40));
        pushButton_start_make->setMaximumSize(QSize(120, 40));
        pushButton_start_make->setBaseSize(QSize(120, 40));

        horizontalLayout_2->addWidget(pushButton_start_make);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 20, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_fire_cd = new QPushButton(verticalLayoutWidget);
        pushButton_fire_cd->setObjectName(QStringLiteral("pushButton_fire_cd"));
        sizePolicy.setHeightForWidth(pushButton_fire_cd->sizePolicy().hasHeightForWidth());
        pushButton_fire_cd->setSizePolicy(sizePolicy);
        pushButton_fire_cd->setMinimumSize(QSize(58, 61));
        pushButton_fire_cd->setMaximumSize(QSize(58, 61));

        horizontalLayout->addWidget(pushButton_fire_cd);

        pushButton_simulate_boot = new QPushButton(verticalLayoutWidget);
        pushButton_simulate_boot->setObjectName(QStringLiteral("pushButton_simulate_boot"));
        sizePolicy.setHeightForWidth(pushButton_simulate_boot->sizePolicy().hasHeightForWidth());
        pushButton_simulate_boot->setSizePolicy(sizePolicy);
        pushButton_simulate_boot->setMinimumSize(QSize(58, 61));
        pushButton_simulate_boot->setMaximumSize(QSize(58, 61));

        horizontalLayout->addWidget(pushButton_simulate_boot);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FormISO);

        QMetaObject::connectSlotsByName(FormISO);
    } // setupUi

    void retranslateUi(QWidget *FormISO)
    {
        FormISO->setWindowTitle(QApplication::translate("FormISO", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("FormISO", "\350\257\267\351\200\211\346\213\251ISO\357\274\232", Q_NULLPTR));
        pushButton_explore->setText(QApplication::translate("FormISO", "\346\265\217\350\247\210", Q_NULLPTR));
        label_2->setText(QApplication::translate("FormISO", "\344\270\252\346\200\247\345\214\226\350\256\276\347\275\256\357\274\232", Q_NULLPTR));
        pushButton_default_setting->setText(QApplication::translate("FormISO", "\351\273\230\350\256\244\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_advance_setting->setText(QApplication::translate("FormISO", "\351\253\230\347\272\247\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_start_make->setText(QString());
        label_3->setText(QApplication::translate("FormISO", "\345\246\202\344\275\225\344\275\277\347\224\250ISO\346\250\241\345\274\217\357\274\237", Q_NULLPTR));
        pushButton_fire_cd->setText(QString());
        pushButton_simulate_boot->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormISO: public Ui_FormISO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMISO_H
