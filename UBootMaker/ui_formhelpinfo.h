/********************************************************************************
** Form generated from reading UI file 'formhelpinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMHELPINFO_H
#define UI_FORMHELPINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormHelpInfo
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_qq_group;
    QLabel *label;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_feedback;
    QPushButton *pushButton_tutorial;
    QPushButton *pushButton_shotcut_query;

    void setupUi(QWidget *FormHelpInfo)
    {
        if (FormHelpInfo->objectName().isEmpty())
            FormHelpInfo->setObjectName(QStringLiteral("FormHelpInfo"));
        FormHelpInfo->resize(700, 198);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FormHelpInfo->sizePolicy().hasHeightForWidth());
        FormHelpInfo->setSizePolicy(sizePolicy);
        FormHelpInfo->setStyleSheet(QStringLiteral("background-color: rgb(235, 235, 235);"));
        horizontalLayoutWidget = new QWidget(FormHelpInfo);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 361, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(15, 0, 15, 0);
        widget_qq_group = new QWidget(horizontalLayoutWidget);
        widget_qq_group->setObjectName(QStringLiteral("widget_qq_group"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(22);
        sizePolicy1.setVerticalStretch(18);
        sizePolicy1.setHeightForWidth(widget_qq_group->sizePolicy().hasHeightForWidth());
        widget_qq_group->setSizePolicy(sizePolicy1);
        widget_qq_group->setMinimumSize(QSize(22, 18));
        widget_qq_group->setMaximumSize(QSize(22, 18));
        widget_qq_group->setStyleSheet(QStringLiteral("background-image: url(:/images/1_Group_1.jpg);"));

        horizontalLayout->addWidget(widget_qq_group);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setCursor(QCursor(Qt::PointingHandCursor));
        label->setStyleSheet(QStringLiteral("font:bold 14px \\\"Microsoft YaHei\\\";color: rgb(80, 80, 80);"));

        horizontalLayout->addWidget(label);

        horizontalLayoutWidget_2 = new QWidget(FormHelpInfo);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(360, 0, 341, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_feedback = new QPushButton(horizontalLayoutWidget_2);
        pushButton_feedback->setObjectName(QStringLiteral("pushButton_feedback"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(80);
        sizePolicy2.setVerticalStretch(16);
        sizePolicy2.setHeightForWidth(pushButton_feedback->sizePolicy().hasHeightForWidth());
        pushButton_feedback->setSizePolicy(sizePolicy2);
        pushButton_feedback->setMinimumSize(QSize(80, 16));
        pushButton_feedback->setMaximumSize(QSize(80, 16));
        pushButton_feedback->setBaseSize(QSize(0, 40));
        pushButton_feedback->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(pushButton_feedback);

        pushButton_tutorial = new QPushButton(horizontalLayoutWidget_2);
        pushButton_tutorial->setObjectName(QStringLiteral("pushButton_tutorial"));
        sizePolicy2.setHeightForWidth(pushButton_tutorial->sizePolicy().hasHeightForWidth());
        pushButton_tutorial->setSizePolicy(sizePolicy2);
        pushButton_tutorial->setMinimumSize(QSize(80, 16));
        pushButton_tutorial->setMaximumSize(QSize(80, 16));
        pushButton_tutorial->setBaseSize(QSize(0, 40));
        pushButton_tutorial->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(pushButton_tutorial);

        pushButton_shotcut_query = new QPushButton(horizontalLayoutWidget_2);
        pushButton_shotcut_query->setObjectName(QStringLiteral("pushButton_shotcut_query"));
        sizePolicy2.setHeightForWidth(pushButton_shotcut_query->sizePolicy().hasHeightForWidth());
        pushButton_shotcut_query->setSizePolicy(sizePolicy2);
        pushButton_shotcut_query->setMinimumSize(QSize(80, 16));
        pushButton_shotcut_query->setMaximumSize(QSize(80, 16));
        pushButton_shotcut_query->setBaseSize(QSize(80, 16));
        pushButton_shotcut_query->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(pushButton_shotcut_query);


        retranslateUi(FormHelpInfo);

        QMetaObject::connectSlotsByName(FormHelpInfo);
    } // setupUi

    void retranslateUi(QWidget *FormHelpInfo)
    {
        FormHelpInfo->setWindowTitle(QApplication::translate("FormHelpInfo", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("FormHelpInfo", "QQ\345\256\230\346\226\271\344\272\244\346\265\201\347\276\244\357\274\2323636363636", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormHelpInfo: public Ui_FormHelpInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMHELPINFO_H
