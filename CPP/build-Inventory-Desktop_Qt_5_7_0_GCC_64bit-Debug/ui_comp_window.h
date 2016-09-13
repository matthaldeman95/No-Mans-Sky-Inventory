/********************************************************************************
** Form generated from reading UI file 'comp_window.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMP_WINDOW_H
#define UI_COMP_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_comp_window
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *comp_window)
    {
        if (comp_window->objectName().isEmpty())
            comp_window->setObjectName(QStringLiteral("comp_window"));
        comp_window->resize(400, 300);
        widget = new QWidget(comp_window);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 371, 36));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 1, 3, 1, 1);


        retranslateUi(comp_window);

        QMetaObject::connectSlotsByName(comp_window);
    } // setupUi

    void retranslateUi(QWidget *comp_window)
    {
        comp_window->setWindowTitle(QApplication::translate("comp_window", "Form", 0));
        label->setText(QApplication::translate("comp_window", "TextLabel", 0));
        label_2->setText(QApplication::translate("comp_window", "TextLabel", 0));
        label_3->setText(QApplication::translate("comp_window", "TextLabel", 0));
        label_4->setText(QApplication::translate("comp_window", "TextLabel", 0));
        label_5->setText(QApplication::translate("comp_window", "TextLabel", 0));
        label_6->setText(QApplication::translate("comp_window", "TextLabel", 0));
        label_7->setText(QApplication::translate("comp_window", "TextLabel", 0));
        label_8->setText(QApplication::translate("comp_window", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class comp_window: public Ui_comp_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMP_WINDOW_H
