/********************************************************************************
** Form generated from reading UI file 'dialogfeedback.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFEEDBACK_H
#define UI_DIALOGFEEDBACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogFeedBack
{
public:
    QPushButton *pushButton_submit;
    QPushButton *pushButton_cancel;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPushButton *pushButton_close;

    void setupUi(QDialog *DialogFeedBack)
    {
        if (DialogFeedBack->objectName().isEmpty())
            DialogFeedBack->setObjectName(QStringLiteral("DialogFeedBack"));
        DialogFeedBack->resize(580, 382);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogFeedBack->sizePolicy().hasHeightForWidth());
        DialogFeedBack->setSizePolicy(sizePolicy);
        DialogFeedBack->setMaximumSize(QSize(580, 384));
        DialogFeedBack->setStyleSheet(QStringLiteral(""));
        pushButton_submit = new QPushButton(DialogFeedBack);
        pushButton_submit->setObjectName(QStringLiteral("pushButton_submit"));
        pushButton_submit->setGeometry(QRect(180, 310, 100, 35));
        sizePolicy.setHeightForWidth(pushButton_submit->sizePolicy().hasHeightForWidth());
        pushButton_submit->setSizePolicy(sizePolicy);
        pushButton_submit->setMinimumSize(QSize(100, 35));
        pushButton_submit->setMaximumSize(QSize(100, 35));
        pushButton_submit->setStyleSheet(QStringLiteral(""));
        pushButton_cancel = new QPushButton(DialogFeedBack);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(300, 310, 100, 35));
        sizePolicy.setHeightForWidth(pushButton_cancel->sizePolicy().hasHeightForWidth());
        pushButton_cancel->setSizePolicy(sizePolicy);
        pushButton_cancel->setMinimumSize(QSize(100, 35));
        pushButton_cancel->setMaximumSize(QSize(100, 35));
        pushButton_cancel->setStyleSheet(QStringLiteral(""));
        textEdit = new QTextEdit(DialogFeedBack);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 110, 541, 131));
        lineEdit = new QLineEdit(DialogFeedBack);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 250, 161, 31));
        pushButton_close = new QPushButton(DialogFeedBack);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(548, 0, 32, 25));
        sizePolicy.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy);
        pushButton_close->setMinimumSize(QSize(32, 25));
        pushButton_close->setMaximumSize(QSize(32, 25));

        retranslateUi(DialogFeedBack);

        QMetaObject::connectSlotsByName(DialogFeedBack);
    } // setupUi

    void retranslateUi(QDialog *DialogFeedBack)
    {
        DialogFeedBack->setWindowTitle(QApplication::translate("DialogFeedBack", "Dialog", Q_NULLPTR));
        pushButton_submit->setText(QString());
        pushButton_cancel->setText(QString());
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogFeedBack: public Ui_DialogFeedBack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFEEDBACK_H
