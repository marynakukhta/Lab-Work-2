#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_timerButton_clicked()
{
    t = new timer;
    t->show();
}

void MainWindow::on_alarmButton_clicked()
{
    a = new alert;
    a->show();
}
