#ifndef BP_CLASS_SELECTOR_H
#define BP_CLASS_SELECTOR_H

#include <QWidget>

namespace Ui {
class bp_class_selector;
}

class bp_class_selector : public QWidget
{
    Q_OBJECT
public:
    explicit bp_class_selector(QWidget *parent = 0);
    ~bp_class_selector();
private slots:
    void on_radioButton_pressed();

    void on_radioButton_2_pressed();

    void on_radioButton_3_pressed();

    void on_radioButton_4_pressed();

private:
    Ui::bp_class_selector *ui;
};



#endif // BP_CLASS_SELECTOR_H
