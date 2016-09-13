#ifndef INVENTORY_H
#define INVENTORY_H

#include <QWidget>
#include <blueprint.h>


class Blueprint;

namespace Ui {
class Inventory;
}

class Inventory : public QWidget
{
    Q_OBJECT

public:
    explicit Inventory(QWidget *parent = 0);
    ~Inventory();
void initialize();
void updateInventory();
bool canMake(Blueprint);
bool canMakeIndividual(std::string, int);
std::map <std::string, int> inventory;


private slots:
void on_updateButton_clicked();

private:
    Ui::Inventory *ui;

};

#endif // INVENTORY_H
