#include <QApplication>
#include <QDebug>
#include <iostream>
#include "blueprint.h"
#include "window.h"
#include "inventory.h"
#include <QtWidgets>
#include <bp_class_selector.h>
#include <bp_subclass.h>
#include <comp_window.h>


Blueprint Components [8] {
                {"Carite Sheet", std::make_tuple("Iron", 50), std::make_tuple("", 0), std::make_tuple("", 0)},
                {"Microdensity Fabric", std::make_tuple("Iron", 50), std::make_tuple("Platinum", 10), std::make_tuple("", 0)},
                {"Electron Vapor", std::make_tuple("Suspension Fluid", 1), std::make_tuple("Plutonium", 100), std::make_tuple("", 0)},
                {"Suspension Fluid", std::make_tuple("Carbon", 50), std::make_tuple("", 0), std::make_tuple("", 0)},
                {"Antimatter", std::make_tuple("Electron Vapor", 1), std::make_tuple("Heridium", 50), std::make_tuple("Zinc", 20)},
                {"Dynamic Resonator", std::make_tuple("Antimatter", 2), std::make_tuple("Chrysonite", 100), std::make_tuple("Microdensity Fabric", 4)},
                {"Terumin", std::make_tuple("Emeril", 40), std::make_tuple("Gold", 40), std::make_tuple("Herox", 1)},
                {"Grantine", std::make_tuple("Iridium", 150), std::make_tuple("Copper", 50), std::make_tuple("Aronium", 1) }
                        };

int window_choice(0);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGridLayout *grid = new QGridLayout;


    QWidget *w = new Inventory;
    w->setFixedSize(325,450);
    QWidget *bpcs = new bp_class_selector();
    bpcs->setFixedSize(120,120);
    //QWidget *bpsc = new bp_subclass();

    QWidget *comp = new comp_window();
    comp->setFixedSize(500,200);
    grid->addWidget(comp,0,0,2,1);
    grid->addWidget(w, 0, 1, 1, 2);
    grid->addWidget(bpcs, 1, 1, 1, 1);
    //grid->addWidget(bpsc, 1, 1, 1, 1);

    QWidget *wid = new QWidget();
    //wid->setFixedSize(400,600);
    wid->setLayout(grid);
    wid->show();


    return a.exec();
}
