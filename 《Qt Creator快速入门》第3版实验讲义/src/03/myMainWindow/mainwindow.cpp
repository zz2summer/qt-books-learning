#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 创建新的动作
    QAction *openAction = new QAction(tr("&Open"), this);

    // 添加图标
    QIcon icon(":/myImages/images/fileopen.png");
    openAction->setIcon(icon);

    // 设置快捷键
    openAction->setShortcut(QKeySequence(tr("Ctrl+O")));

    // 在文件菜单中设置新的打开动作
    ui->menu_F->addAction(openAction);
}

MainWindow::~MainWindow()
{
    delete ui;
}
