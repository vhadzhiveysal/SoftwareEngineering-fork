#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider, QSlider::sliderMoved, this, onSliderMoved);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onSliderMoved(int i)
{
    ui->labelNumericValue->setNum(i);
}
