/********************************************************************************
** Form generated from reading UI file 'bp_class_selector.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BP_CLASS_SELECTOR_H
#define UI_BP_CLASS_SELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bp_class_selector
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;

    void setupUi(QWidget *bp_class_selector)
    {
        if (bp_class_selector->objectName().isEmpty())
            bp_class_selector->setObjectName(QStringLiteral("bp_class_selector"));
        bp_class_selector->resize(122, 118);
        layoutWidget = new QWidget(bp_class_selector);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 103, 100));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);


        retranslateUi(bp_class_selector);

        QMetaObject::connectSlotsByName(bp_class_selector);
    } // setupUi

    void retranslateUi(QWidget *bp_class_selector)
    {
        bp_class_selector->setWindowTitle(QApplication::translate("bp_class_selector", "Form", 0));
        radioButton->setText(QApplication::translate("bp_class_selector", "Components", 0));
        radioButton_2->setText(QApplication::translate("bp_class_selector", "Exosuit", 0));
        radioButton_3->setText(QApplication::translate("bp_class_selector", "Ship", 0));
        radioButton_4->setText(QApplication::translate("bp_class_selector", "Multitool", 0));
    } // retranslateUi

};

namespace Ui {
    class bp_class_selector: public Ui_bp_class_selector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BP_CLASS_SELECTOR_H
