/********************************************************************************
** Form generated from reading UI file 'bp_subclass.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BP_SUBCLASS_H
#define UI_BP_SUBCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bp_subclass
{
public:
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;

    void setupUi(QWidget *bp_subclass)
    {
        if (bp_subclass->objectName().isEmpty())
            bp_subclass->setObjectName(QStringLiteral("bp_subclass"));
        bp_subclass->resize(79, 105);
        checkBox = new QCheckBox(bp_subclass);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 10, 85, 20));
        checkBox_2 = new QCheckBox(bp_subclass);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 30, 85, 20));
        checkBox_3 = new QCheckBox(bp_subclass);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 50, 85, 20));
        checkBox_4 = new QCheckBox(bp_subclass);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 70, 85, 20));

        retranslateUi(bp_subclass);

        QMetaObject::connectSlotsByName(bp_subclass);
    } // setupUi

    void retranslateUi(QWidget *bp_subclass)
    {
        bp_subclass->setWindowTitle(QApplication::translate("bp_subclass", "Form", 0));
        checkBox->setText(QApplication::translate("bp_subclass", "op1", 0));
        checkBox_2->setText(QApplication::translate("bp_subclass", "op2", 0));
        checkBox_3->setText(QApplication::translate("bp_subclass", "op3", 0));
        checkBox_4->setText(QApplication::translate("bp_subclass", "op4", 0));
    } // retranslateUi

};

namespace Ui {
    class bp_subclass: public Ui_bp_subclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BP_SUBCLASS_H
