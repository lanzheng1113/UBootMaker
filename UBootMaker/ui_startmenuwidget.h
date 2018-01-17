/********************************************************************************
** Form generated from reading UI file 'startmenuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTMENUWIDGET_H
#define UI_STARTMENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartMenuWidget
{
public:

    void setupUi(QWidget *StartMenuWidget)
    {
        if (StartMenuWidget->objectName().isEmpty())
            StartMenuWidget->setObjectName(QStringLiteral("StartMenuWidget"));
        StartMenuWidget->resize(400, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StartMenuWidget->sizePolicy().hasHeightForWidth());
        StartMenuWidget->setSizePolicy(sizePolicy);
        StartMenuWidget->setMinimumSize(QSize(400, 400));
        StartMenuWidget->setMaximumSize(QSize(400, 400));

        retranslateUi(StartMenuWidget);

        QMetaObject::connectSlotsByName(StartMenuWidget);
    } // setupUi

    void retranslateUi(QWidget *StartMenuWidget)
    {
        StartMenuWidget->setWindowTitle(QApplication::translate("StartMenuWidget", "StartMenuWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StartMenuWidget: public Ui_StartMenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTMENUWIDGET_H
