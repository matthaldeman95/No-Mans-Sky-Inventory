#include <QtWidgets>

#include "window.h"
#include "inventory.h"

extern Inventory(w);


Window::Window(QWidget *parent)
    : QWidget(parent)

{
    QGridLayout *grid = new QGridLayout;
    QPushButton *button = new QPushButton("fuck");
    //QWidget *wid = new QWidget(w);
    grid->addWidget(button);
    button->show();

    setWindowTitle(tr("Group Boxes"));
    resize(500,500);

}
