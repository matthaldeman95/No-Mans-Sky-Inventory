#include "inventory.h"
#include <QDebug>
#include <iostream>
#include <blueprint.h>
#include <QtWidgets>
#include <bp_subclass.h>
#include <ui_bp_subclass.h>


bp_subclass::bp_subclass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bp_subclass)
{
    ui->setupUi(this);
}

bp_subclass::~bp_subclass()
{
    delete ui;
}

