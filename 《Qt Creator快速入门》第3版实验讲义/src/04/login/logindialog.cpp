#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    // 判断用户名和密码是否正确，如果错误则弹出警告对话框
    if(ui->usrLineEdit->text().trimmed() == tr("yafeilinux")
            && ui->pwdLineEdit->text() == tr("123456"))
    {
        accept();
    } else {
        QMessageBox::warning(this, tr("Waring"),
                             tr("user name or password error!"),
                             QMessageBox::Yes);
        // 清空内容并定位光标
        ui->usrLineEdit->clear();
        ui->pwdLineEdit->clear();
        ui->usrLineEdit->setFocus();
    }
}
