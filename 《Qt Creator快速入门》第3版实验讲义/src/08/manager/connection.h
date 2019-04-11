#ifndef CONNECTION_H
#define CONNECTION_H

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>


static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("mydata");
    db.setUserName("root");
    db.setPassword("");

    if (!db.open()) {
         QMessageBox::critical(0, QObject::tr("无法打开数据库"),
             "无法创建数据库连接！", QMessageBox::Cancel);
         return false;
     }

    QSqlQuery query;

    // 使数据库支持中文
    query.exec("SET NAMES 'Latin1'");

    // 创建分类表
    query.exec("create table type(id varchar(20) primary key, name varchar(20))");
    query.exec("insert into type values('0', '请选择类型')");
    query.exec("insert into type values('01', '电视')");
    query.exec("insert into type values('02', '空调')");

    // 创建品牌表
    query.exec("create table brand(id varchar(20) primary key, name varchar(30), "
               "type varchar(20), price int, sum int, sell int, last int)");
    query.exec("insert into brand values('01', '海信', '电视', 3699, 50, 10, 40)");
    query.exec("insert into brand values('02', '创维', '电视', 3499, 20, 5, 15)");
    query.exec("insert into brand values('03', '海尔', '电视', 4199, 80, 40, 40)");
    query.exec("insert into brand values('04', '王牌', '电视', 3999, 40, 10, 30)");
    query.exec("insert into brand values('05', '海尔', '空调', 2899, 60, 10, 50)");
    query.exec("insert into brand values('06', '格力', '空调', 2799, 70, 20, 50)");

    // 创建密码表
    query.exec("create table password(id varchar(20) primary key, pwd varchar(50))");
    query.exec("insert into password values('01', '123456')");

    return true;
}

#endif // CONNECTION_H
