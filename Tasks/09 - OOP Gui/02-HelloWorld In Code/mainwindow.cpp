#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, QPushButton::clicked, this, MainWindow::onButtonClicked);
    connect(ui->pushButton_2, QPushButton::clicked, this, MainWindow::onButtonClicked2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonClicked(bool b)
{
    ui->labelMessage->setText("Hello there");
}

void MainWindow::onButtonClicked2(bool c)
{
    ui->labelMessage->setText("May the Force be With You");
}
