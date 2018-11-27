#ifndef ALERT_H
#define ALERT_H

#include <QDialog>
#include <QTime>
#include <QTimer>
#include <QTimeEdit>
#include <QMovie>
#include <QSound>

namespace Ui {
class alert;
}

class alert : public QDialog
{
    Q_OBJECT

public:
    explicit alert(QWidget *parent = nullptr);
    ~alert();
    long long int timeToInt(QTime);

private slots:

    void on_setAlert1_clicked();

    void on_alert1Edit_userTimeChanged(const QTime &time);

    void updateTime1();

    void stopAlert1();

    void on_startAlert1_clicked();

    void on_stopAlert1_clicked();

    void on_closeButton1_clicked();

private:
    Ui::alert *ui;
    QTimer *tmr1;
    long long int time1;
    QMovie *mo1;
    long long int currentTime;
    bool on;
    QSound *sound1;
};

#endif // ALERT_H
