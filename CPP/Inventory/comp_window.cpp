#include <QtWidgets>
#include <comp_window.h>
#include <ui_comp_window.h>


comp_window::comp_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::comp_window)
{
    ui->setupUi(this);
    //ui->label->setStyleSheet("hello, {color : red;}");
}

comp_window::~comp_window()
{
    delete ui;
}

