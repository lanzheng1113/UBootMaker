/********************************************************************************
** Form generated from reading UI file 'dialogmenusettings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMENUSETTINGS_H
#define UI_DIALOGMENUSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogMenuSettings
{
public:
    QPushButton *pushButton_close;
    QPushButton *pushButton_font;
    QPushButton *pushButton_color;
    QPushButton *pushButton_selected_color;
    QPushButton *pushButton_selected_bkcolor;
    QPushButton *pushButton_item_rename;
    QPushButton *pushButton_bg_size_dec;
    QPushButton *pushButton_bg_size_inc;
    QPushButton *pushButton_alpha_inc;
    QPushButton *pushButton_alpha_dec;
    QPushButton *pushButton_del_menu_bg;
    QPushButton *pushButton_modify_bg_color;
    QLineEdit *lineEdit_menu_index;
    QPushButton *pushButton_index_dec;
    QPushButton *pushButton_index_inc;
    QPushButton *pushButton_add_menu_bg;

    void setupUi(QDialog *DialogMenuSettings)
    {
        if (DialogMenuSettings->objectName().isEmpty())
            DialogMenuSettings->setObjectName(QStringLiteral("DialogMenuSettings"));
        DialogMenuSettings->resize(265, 372);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogMenuSettings->sizePolicy().hasHeightForWidth());
        DialogMenuSettings->setSizePolicy(sizePolicy);
        DialogMenuSettings->setMinimumSize(QSize(265, 246));
        DialogMenuSettings->setMaximumSize(QSize(265, 372));
        pushButton_close = new QPushButton(DialogMenuSettings);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(230, 5, 32, 25));
        pushButton_font = new QPushButton(DialogMenuSettings);
        pushButton_font->setObjectName(QStringLiteral("pushButton_font"));
        pushButton_font->setGeometry(QRect(16, 103, 110, 32));
        pushButton_color = new QPushButton(DialogMenuSettings);
        pushButton_color->setObjectName(QStringLiteral("pushButton_color"));
        pushButton_color->setGeometry(QRect(140, 103, 110, 32));
        pushButton_selected_color = new QPushButton(DialogMenuSettings);
        pushButton_selected_color->setObjectName(QStringLiteral("pushButton_selected_color"));
        pushButton_selected_color->setGeometry(QRect(16, 152, 110, 32));
        pushButton_selected_bkcolor = new QPushButton(DialogMenuSettings);
        pushButton_selected_bkcolor->setObjectName(QStringLiteral("pushButton_selected_bkcolor"));
        pushButton_selected_bkcolor->setGeometry(QRect(140, 152, 110, 32));
        pushButton_item_rename = new QPushButton(DialogMenuSettings);
        pushButton_item_rename->setObjectName(QStringLiteral("pushButton_item_rename"));
        pushButton_item_rename->setGeometry(QRect(140, 200, 110, 32));
        pushButton_bg_size_dec = new QPushButton(DialogMenuSettings);
        pushButton_bg_size_dec->setObjectName(QStringLiteral("pushButton_bg_size_dec"));
        pushButton_bg_size_dec->setGeometry(QRect(140, 246, 24, 24));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_bg_size_dec->sizePolicy().hasHeightForWidth());
        pushButton_bg_size_dec->setSizePolicy(sizePolicy1);
        pushButton_bg_size_dec->setMinimumSize(QSize(24, 24));
        pushButton_bg_size_dec->setMaximumSize(QSize(24, 24));
        pushButton_bg_size_inc = new QPushButton(DialogMenuSettings);
        pushButton_bg_size_inc->setObjectName(QStringLiteral("pushButton_bg_size_inc"));
        pushButton_bg_size_inc->setGeometry(QRect(179, 246, 24, 24));
        sizePolicy1.setHeightForWidth(pushButton_bg_size_inc->sizePolicy().hasHeightForWidth());
        pushButton_bg_size_inc->setSizePolicy(sizePolicy1);
        pushButton_bg_size_inc->setMinimumSize(QSize(24, 24));
        pushButton_bg_size_inc->setMaximumSize(QSize(24, 24));
        pushButton_alpha_inc = new QPushButton(DialogMenuSettings);
        pushButton_alpha_inc->setObjectName(QStringLiteral("pushButton_alpha_inc"));
        pushButton_alpha_inc->setGeometry(QRect(179, 286, 24, 24));
        sizePolicy1.setHeightForWidth(pushButton_alpha_inc->sizePolicy().hasHeightForWidth());
        pushButton_alpha_inc->setSizePolicy(sizePolicy1);
        pushButton_alpha_inc->setMinimumSize(QSize(24, 24));
        pushButton_alpha_inc->setMaximumSize(QSize(24, 24));
        pushButton_alpha_dec = new QPushButton(DialogMenuSettings);
        pushButton_alpha_dec->setObjectName(QStringLiteral("pushButton_alpha_dec"));
        pushButton_alpha_dec->setGeometry(QRect(140, 286, 24, 24));
        sizePolicy1.setHeightForWidth(pushButton_alpha_dec->sizePolicy().hasHeightForWidth());
        pushButton_alpha_dec->setSizePolicy(sizePolicy1);
        pushButton_alpha_dec->setMinimumSize(QSize(24, 24));
        pushButton_alpha_dec->setMaximumSize(QSize(24, 24));
        pushButton_del_menu_bg = new QPushButton(DialogMenuSettings);
        pushButton_del_menu_bg->setObjectName(QStringLiteral("pushButton_del_menu_bg"));
        pushButton_del_menu_bg->setGeometry(QRect(140, 325, 110, 32));
        pushButton_modify_bg_color = new QPushButton(DialogMenuSettings);
        pushButton_modify_bg_color->setObjectName(QStringLiteral("pushButton_modify_bg_color"));
        pushButton_modify_bg_color->setGeometry(QRect(16, 325, 110, 32));
        lineEdit_menu_index = new QLineEdit(DialogMenuSettings);
        lineEdit_menu_index->setObjectName(QStringLiteral("lineEdit_menu_index"));
        lineEdit_menu_index->setGeometry(QRect(166, 55, 58, 30));
        sizePolicy1.setHeightForWidth(lineEdit_menu_index->sizePolicy().hasHeightForWidth());
        lineEdit_menu_index->setSizePolicy(sizePolicy1);
        lineEdit_menu_index->setMinimumSize(QSize(58, 30));
        lineEdit_menu_index->setMaximumSize(QSize(58, 30));
        lineEdit_menu_index->setAlignment(Qt::AlignCenter);
        lineEdit_menu_index->setReadOnly(true);
        pushButton_index_dec = new QPushButton(DialogMenuSettings);
        pushButton_index_dec->setObjectName(QStringLiteral("pushButton_index_dec"));
        pushButton_index_dec->setGeometry(QRect(140, 54, 25, 32));
        pushButton_index_inc = new QPushButton(DialogMenuSettings);
        pushButton_index_inc->setObjectName(QStringLiteral("pushButton_index_inc"));
        pushButton_index_inc->setGeometry(QRect(224, 54, 25, 32));
        pushButton_add_menu_bg = new QPushButton(DialogMenuSettings);
        pushButton_add_menu_bg->setObjectName(QStringLiteral("pushButton_add_menu_bg"));
        pushButton_add_menu_bg->setGeometry(QRect(16, 200, 110, 32));

        retranslateUi(DialogMenuSettings);

        QMetaObject::connectSlotsByName(DialogMenuSettings);
    } // setupUi

    void retranslateUi(QDialog *DialogMenuSettings)
    {
        DialogMenuSettings->setWindowTitle(QApplication::translate("DialogMenuSettings", "\350\207\252\345\256\232\344\271\211\350\217\234\345\215\225", Q_NULLPTR));
        pushButton_close->setText(QString());
        pushButton_font->setText(QApplication::translate("DialogMenuSettings", "\350\217\234\345\215\225\345\255\227\344\275\223", Q_NULLPTR));
        pushButton_color->setText(QApplication::translate("DialogMenuSettings", "\350\217\234\345\215\225\351\242\234\350\211\262", Q_NULLPTR));
        pushButton_selected_color->setText(QApplication::translate("DialogMenuSettings", "\351\200\211\344\270\255\351\241\271\351\242\234\350\211\262", Q_NULLPTR));
        pushButton_selected_bkcolor->setText(QApplication::translate("DialogMenuSettings", "\351\200\211\344\270\255\351\241\271\350\203\214\346\231\257\351\242\234\350\211\262", Q_NULLPTR));
        pushButton_item_rename->setText(QApplication::translate("DialogMenuSettings", "\344\277\256\346\224\271\350\217\234\345\215\225\345\220\215\347\247\260", Q_NULLPTR));
        pushButton_bg_size_dec->setText(QString());
        pushButton_bg_size_inc->setText(QString());
        pushButton_alpha_inc->setText(QString());
        pushButton_alpha_dec->setText(QString());
        pushButton_del_menu_bg->setText(QApplication::translate("DialogMenuSettings", "\345\210\240\351\231\244\350\217\234\345\215\225\350\203\214\346\231\257", Q_NULLPTR));
        pushButton_modify_bg_color->setText(QApplication::translate("DialogMenuSettings", "\344\277\256\346\224\271\350\203\214\346\231\257\351\242\234\350\211\262", Q_NULLPTR));
        pushButton_index_dec->setText(QString());
        pushButton_index_inc->setText(QString());
        pushButton_add_menu_bg->setText(QApplication::translate("DialogMenuSettings", "\346\267\273\345\212\240\350\217\234\345\215\225\350\203\214\346\231\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogMenuSettings: public Ui_DialogMenuSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMENUSETTINGS_H
