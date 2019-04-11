#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QTimer;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    
private slots:
    void on_pushButton_clicked();
    void timerUpdate();
    void on_pushButton_2_clicked();

private:
    QTimer *timer;
    Ui::Widget *ui;





};

#endif // WIDGET_H
