/********************************************************************************
** Form generated from reading UI file 'dialogshortcutquery.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSHORTCUTQUERY_H
#define UI_DIALOGSHORTCUTQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogShortcutQuery
{
public:
    QPushButton *pushButton_close;
    QPushButton *pushButton_assamble;
    QPushButton *pushButton_icon_note;
    QPushButton *pushButton_icon_pc;

    void setupUi(QDialog *DialogShortcutQuery)
    {
        if (DialogShortcutQuery->objectName().isEmpty())
            DialogShortcutQuery->setObjectName(QStringLiteral("DialogShortcutQuery"));
        DialogShortcutQuery->resize(580, 380);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogShortcutQuery->sizePolicy().hasHeightForWidth());
        DialogShortcutQuery->setSizePolicy(sizePolicy);
        DialogShortcutQuery->setMaximumSize(QSize(580, 380));
        pushButton_close = new QPushButton(DialogShortcutQuery);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(547, 1, 32, 25));
        sizePolicy.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy);
        pushButton_close->setMinimumSize(QSize(32, 25));
        pushButton_close->setMaximumSize(QSize(32, 25));
        pushButton_assamble = new QPushButton(DialogShortcutQuery);
        pushButton_assamble->setObjectName(QStringLiteral("pushButton_assamble"));
        pushButton_assamble->setGeometry(QRect(0, 70, 194, 40));
        sizePolicy.setHeightForWidth(pushButton_assamble->sizePolicy().hasHeightForWidth());
        pushButton_assamble->setSizePolicy(sizePolicy);
        pushButton_assamble->setCheckable(true);
        pushButton_assamble->setChecked(true);
        pushButton_icon_note = new QPushButton(DialogShortcutQuery);
        pushButton_icon_note->setObjectName(QStringLiteral("pushButton_icon_note"));
        pushButton_icon_note->setGeometry(QRect(193, 70, 194, 40));
        sizePolicy.setHeightForWidth(pushButton_icon_note->sizePolicy().hasHeightForWidth());
        pushButton_icon_note->setSizePolicy(sizePolicy);
        pushButton_icon_note->setCheckable(true);
        pushButton_icon_pc = new QPushButton(DialogShortcutQuery);
        pushButton_icon_pc->setObjectName(QStringLiteral("pushButton_icon_pc"));
        pushButton_icon_pc->setGeometry(QRect(386, 70, 194, 40));
        sizePolicy.setHeightForWidth(pushButton_icon_pc->sizePolicy().hasHeightForWidth());
        pushButton_icon_pc->setSizePolicy(sizePolicy);
        pushButton_icon_pc->setCheckable(true);

        retranslateUi(DialogShortcutQuery);

        QMetaObject::connectSlotsByName(DialogShortcutQuery);
    } // setupUi

    void retranslateUi(QDialog *DialogShortcutQuery)
    {
        DialogShortcutQuery->setWindowTitle(QApplication::translate("DialogShortcutQuery", "shortcutQuery", Q_NULLPTR));
        pushButton_close->setText(QString());
        pushButton_assamble->setText(QString());
        pushButton_icon_note->setText(QString());
        pushButton_icon_pc->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogShortcutQuery: public Ui_DialogShortcutQuery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSHORTCUTQUERY_H
