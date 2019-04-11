#include "widget.h"
#include "ui_widget.h"

#include <QTimer>
#include <QDateTime>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    //关联定时器溢出信号和相应的槽函数
    connect(timer, &QTimer::timeout, this, &Widget::timerUpdate);

    qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
}

Widget::~Widget()
{
    delete ui;
}
// 开始按钮
void Widget::on_pushButton_clicked()
{
    timer->start(1000);
}

// 停止按钮
void Widget::on_pushButton_2_clicked()
{
    timer->stop();
}

void Widget::timerUpdate()
{
    //获取系统现在的时间
    QDateTime time = QDateTime::currentDateTime();
    //设置系统时间显示格式
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
    //在标签上显示时间
    ui->lineEdit->setText(str);

    int rand = qrand() % 5;   // 产生5以内随机整数:0-4

    ui->label->setPixmap(QString("../myTimer/images/%1.png").arg(rand));
}


