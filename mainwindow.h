#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "timer.h"
#include "alert.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    timer *t;
    alert *a;


private slots:
    void on_timerButton_clicked();

    void on_alarmButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
