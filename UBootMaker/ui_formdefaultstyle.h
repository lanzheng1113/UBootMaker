/********************************************************************************
** Form generated from reading UI file 'formdefaultstyle.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMDEFAULTSTYLE_H
#define UI_FORMDEFAULTSTYLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormDefaultStyle
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_select_device;
    QPushButton *pushButton_more;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *pushButton_hddfat32;
    QPushButton *pushButton_zipfat32;
    QPushButton *pushButton_hddfat16;
    QPushButton *pushButton_zipfat16;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_auto;
    QPushButton *pushButton_compat;
    QPushButton *pushButton_enhance;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_support_win10_pad;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QPushButton *pushButton_personal_default;
    QPushButton *pushButton_personal_advance;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_start_make;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FormDefaultStyle)
    {
        if (FormDefaultStyle->objectName().isEmpty())
            FormDefaultStyle->setObjectName(QStringLiteral("FormDefaultStyle"));
        FormDefaultStyle->resize(700, 295);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FormDefaultStyle->sizePolicy().hasHeightForWidth());
        FormDefaultStyle->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(FormDefaultStyle);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, 9, 726, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 5, 0, 5);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(190);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(190, 0));
        label->setLayoutDirection(Qt::RightToLeft);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        comboBox_select_device = new QComboBox(verticalLayoutWidget);
        comboBox_select_device->setObjectName(QStringLiteral("comboBox_select_device"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(150);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox_select_device->sizePolicy().hasHeightForWidth());
        comboBox_select_device->setSizePolicy(sizePolicy2);
        comboBox_select_device->setMinimumSize(QSize(350, 28));
        comboBox_select_device->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"font-color::rgb(153, 153, 153);"));

        horizontalLayout->addWidget(comboBox_select_device);

        pushButton_more = new QPushButton(verticalLayoutWidget);
        pushButton_more->setObjectName(QStringLiteral("pushButton_more"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(28);
        sizePolicy3.setVerticalStretch(28);
        sizePolicy3.setHeightForWidth(pushButton_more->sizePolicy().hasHeightForWidth());
        pushButton_more->setSizePolicy(sizePolicy3);
        pushButton_more->setMinimumSize(QSize(28, 28));
        pushButton_more->setMaximumSize(QSize(28, 28));

        horizontalLayout->addWidget(pushButton_more);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 5, 0, 5);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(190, 0));
        label_2->setMaximumSize(QSize(190, 199));
        label_2->setLayoutDirection(Qt::RightToLeft);
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        pushButton_hddfat32 = new QPushButton(verticalLayoutWidget);
        pushButton_hddfat32->setObjectName(QStringLiteral("pushButton_hddfat32"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(40);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_hddfat32->sizePolicy().hasHeightForWidth());
        pushButton_hddfat32->setSizePolicy(sizePolicy4);
        pushButton_hddfat32->setMinimumSize(QSize(80, 28));
        pushButton_hddfat32->setMaximumSize(QSize(50, 16777215));
        pushButton_hddfat32->setStyleSheet(QStringLiteral(""));
        pushButton_hddfat32->setCheckable(true);
        pushButton_hddfat32->setChecked(true);

        horizontalLayout_3->addWidget(pushButton_hddfat32);

        pushButton_zipfat32 = new QPushButton(verticalLayoutWidget);
        pushButton_zipfat32->setObjectName(QStringLiteral("pushButton_zipfat32"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(80);
        sizePolicy5.setVerticalStretch(28);
        sizePolicy5.setHeightForWidth(pushButton_zipfat32->sizePolicy().hasHeightForWidth());
        pushButton_zipfat32->setSizePolicy(sizePolicy5);
        pushButton_zipfat32->setMinimumSize(QSize(80, 28));
        pushButton_zipfat32->setStyleSheet(QStringLiteral(""));
        pushButton_zipfat32->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_zipfat32);

        pushButton_hddfat16 = new QPushButton(verticalLayoutWidget);
        pushButton_hddfat16->setObjectName(QStringLiteral("pushButton_hddfat16"));
        sizePolicy5.setHeightForWidth(pushButton_hddfat16->sizePolicy().hasHeightForWidth());
        pushButton_hddfat16->setSizePolicy(sizePolicy5);
        pushButton_hddfat16->setMinimumSize(QSize(80, 28));
        pushButton_hddfat16->setStyleSheet(QStringLiteral(""));
        pushButton_hddfat16->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_hddfat16);

        pushButton_zipfat16 = new QPushButton(verticalLayoutWidget);
        pushButton_zipfat16->setObjectName(QStringLiteral("pushButton_zipfat16"));
        sizePolicy5.setHeightForWidth(pushButton_zipfat16->sizePolicy().hasHeightForWidth());
        pushButton_zipfat16->setSizePolicy(sizePolicy5);
        pushButton_zipfat16->setMinimumSize(QSize(80, 28));
        pushButton_zipfat16->setStyleSheet(QStringLiteral(""));
        pushButton_zipfat16->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_zipfat16);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 5, 0, 5);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(190, 0));
        label_3->setLayoutDirection(Qt::RightToLeft);
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        pushButton_auto = new QPushButton(verticalLayoutWidget);
        pushButton_auto->setObjectName(QStringLiteral("pushButton_auto"));
        sizePolicy5.setHeightForWidth(pushButton_auto->sizePolicy().hasHeightForWidth());
        pushButton_auto->setSizePolicy(sizePolicy5);
        pushButton_auto->setMinimumSize(QSize(80, 28));
        pushButton_auto->setMaximumSize(QSize(80, 28));
        pushButton_auto->setStyleSheet(QStringLiteral(""));
        pushButton_auto->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_auto);

        pushButton_compat = new QPushButton(verticalLayoutWidget);
        pushButton_compat->setObjectName(QStringLiteral("pushButton_compat"));
        sizePolicy5.setHeightForWidth(pushButton_compat->sizePolicy().hasHeightForWidth());
        pushButton_compat->setSizePolicy(sizePolicy5);
        pushButton_compat->setMinimumSize(QSize(80, 28));
        pushButton_compat->setMaximumSize(QSize(80, 28));
        pushButton_compat->setStyleSheet(QStringLiteral(""));
        pushButton_compat->setCheckable(true);
        pushButton_compat->setChecked(true);

        horizontalLayout_2->addWidget(pushButton_compat);

        pushButton_enhance = new QPushButton(verticalLayoutWidget);
        pushButton_enhance->setObjectName(QStringLiteral("pushButton_enhance"));
        sizePolicy5.setHeightForWidth(pushButton_enhance->sizePolicy().hasHeightForWidth());
        pushButton_enhance->setSizePolicy(sizePolicy5);
        pushButton_enhance->setMinimumSize(QSize(80, 28));
        pushButton_enhance->setMaximumSize(QSize(80, 28));
        pushButton_enhance->setStyleSheet(QStringLiteral(""));
        pushButton_enhance->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_enhance);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(200, -1, -1, -1);
        checkBox_support_win10_pad = new QCheckBox(verticalLayoutWidget);
        checkBox_support_win10_pad->setObjectName(QStringLiteral("checkBox_support_win10_pad"));
        sizePolicy.setHeightForWidth(checkBox_support_win10_pad->sizePolicy().hasHeightForWidth());
        checkBox_support_win10_pad->setSizePolicy(sizePolicy);
        checkBox_support_win10_pad->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(checkBox_support_win10_pad);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 5, 0, 5);
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(190, 0));
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_4->setStyleSheet(QStringLiteral(""));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_4);

        pushButton_personal_default = new QPushButton(verticalLayoutWidget);
        pushButton_personal_default->setObjectName(QStringLiteral("pushButton_personal_default"));
        sizePolicy5.setHeightForWidth(pushButton_personal_default->sizePolicy().hasHeightForWidth());
        pushButton_personal_default->setSizePolicy(sizePolicy5);
        pushButton_personal_default->setMinimumSize(QSize(80, 28));
        pushButton_personal_default->setMaximumSize(QSize(80, 28));
        pushButton_personal_default->setStyleSheet(QStringLiteral(""));
        pushButton_personal_default->setCheckable(true);
        pushButton_personal_default->setChecked(true);

        horizontalLayout_5->addWidget(pushButton_personal_default);

        pushButton_personal_advance = new QPushButton(verticalLayoutWidget);
        pushButton_personal_advance->setObjectName(QStringLiteral("pushButton_personal_advance"));
        sizePolicy5.setHeightForWidth(pushButton_personal_advance->sizePolicy().hasHeightForWidth());
        pushButton_personal_advance->setSizePolicy(sizePolicy5);
        pushButton_personal_advance->setMinimumSize(QSize(80, 28));
        pushButton_personal_advance->setMaximumSize(QSize(80, 28));
        pushButton_personal_advance->setStyleSheet(QStringLiteral(""));
        pushButton_personal_advance->setCheckable(true);

        horizontalLayout_5->addWidget(pushButton_personal_advance);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(200, -1, 150, -1);
        pushButton_start_make = new QPushButton(verticalLayoutWidget);
        pushButton_start_make->setObjectName(QStringLiteral("pushButton_start_make"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(120);
        sizePolicy6.setVerticalStretch(40);
        sizePolicy6.setHeightForWidth(pushButton_start_make->sizePolicy().hasHeightForWidth());
        pushButton_start_make->setSizePolicy(sizePolicy6);
        pushButton_start_make->setMinimumSize(QSize(120, 40));
        pushButton_start_make->setMaximumSize(QSize(120, 40));

        horizontalLayout_6->addWidget(pushButton_start_make);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QStringLiteral(""));

        horizontalLayout_6->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(FormDefaultStyle);

        QMetaObject::connectSlotsByName(FormDefaultStyle);
    } // setupUi

    void retranslateUi(QWidget *FormDefaultStyle)
    {
        FormDefaultStyle->setWindowTitle(QApplication::translate("FormDefaultStyle", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("FormDefaultStyle", "\351\200\211\346\213\251\350\256\276\345\244\207\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("FormDefaultStyle", "\345\206\231\345\205\245\346\250\241\345\274\217\357\274\232", Q_NULLPTR));
        pushButton_hddfat32->setText(QApplication::translate("FormDefaultStyle", "HDD-FAT32", Q_NULLPTR));
        pushButton_zipfat32->setText(QApplication::translate("FormDefaultStyle", "ZIP-FAT32", Q_NULLPTR));
        pushButton_hddfat16->setText(QApplication::translate("FormDefaultStyle", "HDD-FAT16", Q_NULLPTR));
        pushButton_zipfat16->setText(QApplication::translate("FormDefaultStyle", "ZIP-FAT16", Q_NULLPTR));
        label_3->setText(QApplication::translate("FormDefaultStyle", "U\347\233\230\345\210\206\345\214\272\357\274\232", Q_NULLPTR));
        pushButton_auto->setText(QApplication::translate("FormDefaultStyle", "\346\231\272\350\203\275\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_compat->setText(QApplication::translate("FormDefaultStyle", "\345\205\274\345\256\271\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_enhance->setText(QApplication::translate("FormDefaultStyle", "\345\242\236\345\274\272\346\250\241\345\274\217", Q_NULLPTR));
        checkBox_support_win10_pad->setText(QApplication::translate("FormDefaultStyle", "\346\224\257\346\214\201windows\345\271\263\346\235\277\347\224\265\350\204\221\345\220\257\345\212\250", Q_NULLPTR));
        label_4->setText(QApplication::translate("FormDefaultStyle", "\344\270\252\346\200\247\345\214\226\350\256\276\347\275\256\357\274\232", Q_NULLPTR));
        pushButton_personal_default->setText(QApplication::translate("FormDefaultStyle", "\351\273\230\350\256\244\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_personal_advance->setText(QApplication::translate("FormDefaultStyle", "\351\253\230\347\272\247\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_start_make->setText(QString());
        label_5->setText(QApplication::translate("FormDefaultStyle", "\345\246\202\344\275\225\344\275\277\347\224\250\351\273\230\350\256\244\346\250\241\345\274\217\357\274\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormDefaultStyle: public Ui_FormDefaultStyle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMDEFAULTSTYLE_H
