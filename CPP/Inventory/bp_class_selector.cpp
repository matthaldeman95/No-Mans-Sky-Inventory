#include "inventory.h"
#include <QDebug>
#include <iostream>
#include <blueprint.h>
#include <QtWidgets>
#include <bp_class_selector.h>
#include "ui_bp_class_selector.h"

extern int window_choice;

bp_class_selector::bp_class_selector(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bp_class_selector)
{
    ui->setupUi(this);
}

bp_class_selector::~bp_class_selector()
{
    delete ui;
}



void bp_class_selector::on_radioButton_pressed()
{
    window_choice = 1;
    std::cout << window_choice << std::endl;
}

void bp_class_selector::on_radioButton_2_pressed()
{
    window_choice=2;
    std::cout << window_choice << std::endl;

}

void bp_class_selector::on_radioButton_3_pressed()
{
    window_choice=3;
    std::cout << window_choice << std::endl;

}

void bp_class_selector::on_radioButton_4_pressed()
{
    window_choice=4;
    std::cout << window_choice << std::endl;

}
