#include <QApplication>
#include "mainwindow.h"
#include "connection.h"
#include <QProcess>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 这里使用代码来运行MySQL数据库
    QProcess process;
    process.start("C:/MySQL/bin/mysqld.exe");

    if (!createConnection()) return 1;
    MainWindow w;
    w.show();

    return a.exec();
}
