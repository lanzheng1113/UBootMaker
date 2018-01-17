/********************************************************************************
** Form generated from reading UI file 'formlocal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLOCAL_H
#define UI_FORMLOCAL_H

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

class Ui_FormLocal
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QPushButton *pushButton_0sec;
    QPushButton *pushButton_3sec;
    QPushButton *pushButton_5sec;
    QPushButton *pushButton_8sec;
    QPushButton *pushButton_10sec;
    QPushButton *pushButton_15sec;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_default_setting;
    QPushButton *pushButton_advance_setting;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_start_make;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FormLocal)
    {
        if (FormLocal->objectName().isEmpty())
            FormLocal->setObjectName(QStringLiteral("FormLocal"));
        FormLocal->resize(700, 295);
        verticalLayoutWidget = new QWidget(FormLocal);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 701, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 20, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(128, -1, -1, -1);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        pushButton_0sec = new QPushButton(verticalLayoutWidget);
        pushButton_0sec->setObjectName(QStringLiteral("pushButton_0sec"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_0sec->sizePolicy().hasHeightForWidth());
        pushButton_0sec->setSizePolicy(sizePolicy);
        pushButton_0sec->setMinimumSize(QSize(50, 28));
        pushButton_0sec->setMaximumSize(QSize(50, 28));
        pushButton_0sec->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_0sec);

        pushButton_3sec = new QPushButton(verticalLayoutWidget);
        pushButton_3sec->setObjectName(QStringLiteral("pushButton_3sec"));
        sizePolicy.setHeightForWidth(pushButton_3sec->sizePolicy().hasHeightForWidth());
        pushButton_3sec->setSizePolicy(sizePolicy);
        pushButton_3sec->setMinimumSize(QSize(50, 28));
        pushButton_3sec->setMaximumSize(QSize(50, 28));
        pushButton_3sec->setCheckable(true);
        pushButton_3sec->setChecked(true);

        horizontalLayout_4->addWidget(pushButton_3sec);

        pushButton_5sec = new QPushButton(verticalLayoutWidget);
        pushButton_5sec->setObjectName(QStringLiteral("pushButton_5sec"));
        sizePolicy.setHeightForWidth(pushButton_5sec->sizePolicy().hasHeightForWidth());
        pushButton_5sec->setSizePolicy(sizePolicy);
        pushButton_5sec->setMinimumSize(QSize(50, 28));
        pushButton_5sec->setMaximumSize(QSize(50, 28));
        pushButton_5sec->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_5sec);

        pushButton_8sec = new QPushButton(verticalLayoutWidget);
        pushButton_8sec->setObjectName(QStringLiteral("pushButton_8sec"));
        sizePolicy.setHeightForWidth(pushButton_8sec->sizePolicy().hasHeightForWidth());
        pushButton_8sec->setSizePolicy(sizePolicy);
        pushButton_8sec->setMinimumSize(QSize(50, 28));
        pushButton_8sec->setMaximumSize(QSize(50, 28));
        pushButton_8sec->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_8sec);

        pushButton_10sec = new QPushButton(verticalLayoutWidget);
        pushButton_10sec->setObjectName(QStringLiteral("pushButton_10sec"));
        sizePolicy.setHeightForWidth(pushButton_10sec->sizePolicy().hasHeightForWidth());
        pushButton_10sec->setSizePolicy(sizePolicy);
        pushButton_10sec->setMinimumSize(QSize(50, 28));
        pushButton_10sec->setMaximumSize(QSize(50, 28));
        pushButton_10sec->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_10sec);

        pushButton_15sec = new QPushButton(verticalLayoutWidget);
        pushButton_15sec->setObjectName(QStringLiteral("pushButton_15sec"));
        sizePolicy.setHeightForWidth(pushButton_15sec->sizePolicy().hasHeightForWidth());
        pushButton_15sec->setSizePolicy(sizePolicy);
        pushButton_15sec->setMinimumSize(QSize(50, 28));
        pushButton_15sec->setMaximumSize(QSize(50, 28));
        pushButton_15sec->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_15sec);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(128, -1, -1, -1);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(170, 28));
        lineEdit->setMaximumSize(QSize(170, 28));

        horizontalLayout_3->addWidget(lineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(115, -1, -1, -1);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        pushButton_default_setting = new QPushButton(verticalLayoutWidget);
        pushButton_default_setting->setObjectName(QStringLiteral("pushButton_default_setting"));
        sizePolicy.setHeightForWidth(pushButton_default_setting->sizePolicy().hasHeightForWidth());
        pushButton_default_setting->setSizePolicy(sizePolicy);
        pushButton_default_setting->setMinimumSize(QSize(80, 28));
        pushButton_default_setting->setMaximumSize(QSize(80, 28));
        pushButton_default_setting->setCheckable(true);
        pushButton_default_setting->setChecked(true);

        horizontalLayout_2->addWidget(pushButton_default_setting);

        pushButton_advance_setting = new QPushButton(verticalLayoutWidget);
        pushButton_advance_setting->setObjectName(QStringLiteral("pushButton_advance_setting"));
        sizePolicy.setHeightForWidth(pushButton_advance_setting->sizePolicy().hasHeightForWidth());
        pushButton_advance_setting->setSizePolicy(sizePolicy);
        pushButton_advance_setting->setMinimumSize(QSize(80, 28));
        pushButton_advance_setting->setMaximumSize(QSize(80, 28));
        pushButton_advance_setting->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_advance_setting);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(196, -1, -1, -1);
        pushButton_start_make = new QPushButton(verticalLayoutWidget);
        pushButton_start_make->setObjectName(QStringLiteral("pushButton_start_make"));
        sizePolicy.setHeightForWidth(pushButton_start_make->sizePolicy().hasHeightForWidth());
        pushButton_start_make->setSizePolicy(sizePolicy);
        pushButton_start_make->setMinimumSize(QSize(120, 40));
        pushButton_start_make->setMaximumSize(QSize(120, 40));

        horizontalLayout->addWidget(pushButton_start_make);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(FormLocal);

        QMetaObject::connectSlotsByName(FormLocal);
    } // setupUi

    void retranslateUi(QWidget *FormLocal)
    {
        FormLocal->setWindowTitle(QApplication::translate("FormLocal", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("FormLocal", "\347\255\211\345\276\205\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        pushButton_0sec->setText(QApplication::translate("FormLocal", "0\347\247\222", Q_NULLPTR));
        pushButton_3sec->setText(QApplication::translate("FormLocal", "3\347\247\222", Q_NULLPTR));
        pushButton_5sec->setText(QApplication::translate("FormLocal", "5\347\247\222", Q_NULLPTR));
        pushButton_8sec->setText(QApplication::translate("FormLocal", "8\347\247\222", Q_NULLPTR));
        pushButton_10sec->setText(QApplication::translate("FormLocal", "10\347\247\222", Q_NULLPTR));
        pushButton_15sec->setText(QApplication::translate("FormLocal", "15\347\247\222", Q_NULLPTR));
        label_2->setText(QApplication::translate("FormLocal", "\345\220\257\345\212\250\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("FormLocal", "\344\270\252\346\200\247\345\214\226\350\256\276\347\275\256\357\274\232", Q_NULLPTR));
        pushButton_default_setting->setText(QApplication::translate("FormLocal", "\351\273\230\350\256\244\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_advance_setting->setText(QApplication::translate("FormLocal", "\351\253\230\347\272\247\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_start_make->setText(QString());
        label_4->setText(QApplication::translate("FormLocal", "\345\246\202\344\275\225\344\275\277\347\224\250\346\234\254\345\234\260\346\250\241\345\274\217\357\274\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormLocal: public Ui_FormLocal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLOCAL_H
