/********************************************************************************
** Form generated from reading UI file 'formmaincenter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMAINCENTER_H
#define UI_FORMMAINCENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormMainCenter
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_min;
    QPushButton *pushButton_close;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_ModeDefault;
    QPushButton *pushButton_ModeISO;
    QPushButton *pushButton_ModeLocal;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *FormMainCenter)
    {
        if (FormMainCenter->objectName().isEmpty())
            FormMainCenter->setObjectName(QStringLiteral("FormMainCenter"));
        FormMainCenter->resize(700, 500);
        horizontalLayoutWidget = new QWidget(FormMainCenter);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(630, 0, 71, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_min = new QPushButton(horizontalLayoutWidget);
        pushButton_min->setObjectName(QStringLiteral("pushButton_min"));
        pushButton_min->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_min->sizePolicy().hasHeightForWidth());
        pushButton_min->setSizePolicy(sizePolicy);
        pushButton_min->setMinimumSize(QSize(32, 25));
        pushButton_min->setMaximumSize(QSize(32, 25));
        pushButton_min->setIconSize(QSize(32, 25));

        horizontalLayout->addWidget(pushButton_min);

        pushButton_close = new QPushButton(horizontalLayoutWidget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(32);
        sizePolicy1.setVerticalStretch(25);
        sizePolicy1.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy1);
        pushButton_close->setMinimumSize(QSize(32, 25));
        pushButton_close->setMaximumSize(QSize(32, 25));
        pushButton_close->setIconSize(QSize(32, 25));

        horizontalLayout->addWidget(pushButton_close);

        horizontalLayoutWidget_2 = new QWidget(FormMainCenter);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 130, 701, 42));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(200, 0, 0, 0);
        pushButton_ModeDefault = new QPushButton(horizontalLayoutWidget_2);
        pushButton_ModeDefault->setObjectName(QStringLiteral("pushButton_ModeDefault"));
        sizePolicy.setHeightForWidth(pushButton_ModeDefault->sizePolicy().hasHeightForWidth());
        pushButton_ModeDefault->setSizePolicy(sizePolicy);
        pushButton_ModeDefault->setMinimumSize(QSize(115, 40));
        pushButton_ModeDefault->setMaximumSize(QSize(115, 40));
        pushButton_ModeDefault->setIconSize(QSize(115, 40));
        pushButton_ModeDefault->setCheckable(true);
        pushButton_ModeDefault->setChecked(true);

        horizontalLayout_2->addWidget(pushButton_ModeDefault);

        pushButton_ModeISO = new QPushButton(horizontalLayoutWidget_2);
        pushButton_ModeISO->setObjectName(QStringLiteral("pushButton_ModeISO"));
        sizePolicy.setHeightForWidth(pushButton_ModeISO->sizePolicy().hasHeightForWidth());
        pushButton_ModeISO->setSizePolicy(sizePolicy);
        pushButton_ModeISO->setMinimumSize(QSize(115, 40));
        pushButton_ModeISO->setMaximumSize(QSize(115, 40));
        pushButton_ModeISO->setIconSize(QSize(115, 40));
        pushButton_ModeISO->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_ModeISO);

        pushButton_ModeLocal = new QPushButton(horizontalLayoutWidget_2);
        pushButton_ModeLocal->setObjectName(QStringLiteral("pushButton_ModeLocal"));
        sizePolicy.setHeightForWidth(pushButton_ModeLocal->sizePolicy().hasHeightForWidth());
        pushButton_ModeLocal->setSizePolicy(sizePolicy);
        pushButton_ModeLocal->setMinimumSize(QSize(115, 40));
        pushButton_ModeLocal->setMaximumSize(QSize(115, 40));
        pushButton_ModeLocal->setIconSize(QSize(115, 40));
        pushButton_ModeLocal->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_ModeLocal);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        retranslateUi(FormMainCenter);

        QMetaObject::connectSlotsByName(FormMainCenter);
    } // setupUi

    void retranslateUi(QWidget *FormMainCenter)
    {
        FormMainCenter->setWindowTitle(QApplication::translate("FormMainCenter", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormMainCenter: public Ui_FormMainCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMAINCENTER_H
