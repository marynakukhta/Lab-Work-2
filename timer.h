#ifndef TIMER_H
#define TIMER_H

#include <QDialog>
#include <QTimeEdit>
#include <QTimer>
#include <QMovie>
#include <QSound>
#include <QLabel>

namespace Ui {
class timer;
}

class timer : public QDialog
{
    Q_OBJECT

public slots:
    void updateTime1();
public:
    explicit timer(QWidget *parent = 0);
    ~timer();

    long long int timeToInt(QTimeEdit*);

    void timeToString(QString*, long long int&);


private slots:
    void on_setTimer1Button_clicked();

    void on_setTime1_userTimeChanged(const QTime &time);

    void on_startTimer1_clicked();

    void timerStop();

    void on_stopTimer1_clicked();

    void on_closeTimer1Button_clicked();


private:
    Ui::timer *ui;
    QMovie *mo1;
    QTimer *tmr1;
    QSound *sound1;
    long long int remainingTime;
};

#endif // TIMER_H
