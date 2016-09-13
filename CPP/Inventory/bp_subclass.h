#ifndef BP_SUBCLASS_H
#define BP_SUBCLASS_H

#include <QWidget>

namespace Ui {
class bp_subclass;
}

class bp_subclass : public QWidget
{
    Q_OBJECT
public:
    explicit bp_subclass(QWidget *parent = 0);
    ~bp_subclass();
private:
    Ui::bp_subclass *ui;

};




#endif // BP_SUBCLASS_H
