#ifndef COMP_WINDOW_H
#define COMP_WINDOW_H

#include <QWidget>

namespace Ui {
class comp_window;
}

class comp_window : public QWidget
{
    Q_OBJECT
public:
    explicit comp_window(QWidget *parent = 0);
    ~comp_window();
private:
    Ui::comp_window *ui;

};


#endif // COMP_WINDOW_H
