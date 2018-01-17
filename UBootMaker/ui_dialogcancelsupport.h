/********************************************************************************
** Form generated from reading UI file 'dialogcancelsupport.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCANCELSUPPORT_H
#define UI_DIALOGCANCELSUPPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogCancelSupport
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton_cancel_support;
    QPushButton *pushButton_support_continue;
    QPushButton *pushButton_close;

    void setupUi(QDialog *DialogCancelSupport)
    {
        if (DialogCancelSupport->objectName().isEmpty())
            DialogCancelSupport->setObjectName(QStringLiteral("DialogCancelSupport"));
        DialogCancelSupport->resize(600, 200);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogCancelSupport->sizePolicy().hasHeightForWidth());
        DialogCancelSupport->setSizePolicy(sizePolicy);
        DialogCancelSupport->setMaximumSize(QSize(600, 200));
        lineEdit = new QLineEdit(DialogCancelSupport);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 130, 170, 26));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(170, 26));
        lineEdit->setMaximumSize(QSize(170, 26));
        pushButton_cancel_support = new QPushButton(DialogCancelSupport);
        pushButton_cancel_support->setObjectName(QStringLiteral("pushButton_cancel_support"));
        pushButton_cancel_support->setGeometry(QRect(310, 130, 80, 26));
        sizePolicy.setHeightForWidth(pushButton_cancel_support->sizePolicy().hasHeightForWidth());
        pushButton_cancel_support->setSizePolicy(sizePolicy);
        pushButton_cancel_support->setMinimumSize(QSize(80, 26));
        pushButton_cancel_support->setMaximumSize(QSize(80, 26));
        pushButton_support_continue = new QPushButton(DialogCancelSupport);
        pushButton_support_continue->setObjectName(QStringLiteral("pushButton_support_continue"));
        pushButton_support_continue->setGeometry(QRect(400, 130, 100, 26));
        sizePolicy.setHeightForWidth(pushButton_support_continue->sizePolicy().hasHeightForWidth());
        pushButton_support_continue->setSizePolicy(sizePolicy);
        pushButton_support_continue->setMinimumSize(QSize(100, 26));
        pushButton_support_continue->setMaximumSize(QSize(100, 26));
        pushButton_close = new QPushButton(DialogCancelSupport);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(565, 5, 32, 25));
        sizePolicy.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy);
        pushButton_close->setMinimumSize(QSize(32, 25));
        pushButton_close->setMaximumSize(QSize(32, 25));

        retranslateUi(DialogCancelSupport);

        QMetaObject::connectSlotsByName(DialogCancelSupport);
    } // setupUi

    void retranslateUi(QDialog *DialogCancelSupport)
    {
        DialogCancelSupport->setWindowTitle(QApplication::translate("DialogCancelSupport", "\345\217\226\346\266\210\350\265\236\345\212\251", Q_NULLPTR));
        pushButton_cancel_support->setText(QString());
        pushButton_support_continue->setText(QString());
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogCancelSupport: public Ui_DialogCancelSupport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCANCELSUPPORT_H
