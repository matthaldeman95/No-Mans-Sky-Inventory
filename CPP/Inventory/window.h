#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <inventory.h>

//extern Inventory::Inventory(w);


class QGroupBox;

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);

private:
    QGroupBox *w;
};

#endif // WINDOW_H
