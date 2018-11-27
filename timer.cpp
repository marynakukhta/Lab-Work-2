#include "timer.h"
#include "ui_timer.h"
#include <QTime>
#include <QTimer>
#include <QMovie>
#include <QSound>

timer::timer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::timer)
{
    ui->setupUi(this);
    ui->stopTimer1->hide();
    ui->startTimer1->hide();
    ui->stopTimer1->setEnabled(false);
    ui->startTimer1->setEnabled(false);
    ui->setTime1->hide();
    mo1 = new QMovie();
    mo1->setFileName("./Image/clock.gif");
    sound1 = new QSound("./Image/Sound.wav");
    ui->imageTimer1->setMovie(mo1);
    ui->imageTimer1->hide();
    ui->closeTimer1Button->hide();

}

timer::~timer()
{
    delete ui;
}

void timer::on_setTimer1Button_clicked()
{
    ui->setTime1->show();
    ui->startTimer1->show();
    ui->stopTimer1->show();
}

void timer::on_setTime1_userTimeChanged(const QTime &time)
{
    ui->startTimer1->setEnabled(true);
}

void timer::on_startTimer1_clicked()
{
    ui->timer1->setText((ui->setTime1->time()).toString());
    ui->setTime1->hide();
    ui->stopTimer1->show();
    ui->stopTimer1->setEnabled(true);
    ui->startTimer1->setEnabled(false);
    ui->setTimer1Button->setEnabled(false);
    ui->setTime1->hide();
    tmr1 = new QTimer();
    tmr1->setInterval(1000);
    remainingTime = timeToInt(ui->setTime1);

    connect(tmr1, SIGNAL(timeout()), this, SLOT(updateTime1()));
    QTimer::singleShot(timeToInt(ui->setTime1), this, SLOT(timerStop()));
    tmr1->start();
}

void timer::timerStop()
{
    QTime t(0,0,0);
    ui->setTime1->setTime(t);
    ui->startTimer1->setEnabled(false);
    if(remainingTime == 0)
    {
        ui->closeTimer1Button->show();
        ui->imageTimer1->show();
        mo1->start();
        sound1->play();
    }
    else
    {
        ui->setTimer1Button->setEnabled(true);
    }
    ui->stopTimer1->setEnabled(false);
    tmr1->stop();
    ui->timer1->setText("00:00:00");
}

void timer::updateTime1()
{
    QString *str = new QString;
    timeToString(str, remainingTime);
    ui->timer1->setText(*str);
    if(remainingTime == 1000)
    {
        remainingTime = 0;
    }
    delete str;
}

long long int timer::timeToInt(QTimeEdit *tmr)
{
    int ms = tmr->time().msec();
    int sec = tmr->time().second();
    int min = tmr->time().minute();
    int  h = tmr->time().hour();
    int res = ms + 1000*sec + 60000*min + 3600*1000*h;
    return res;
}

void timer::on_stopTimer1_clicked()
{
    timerStop();
}

void timer::on_closeTimer1Button_clicked()
{
    ui->setTimer1Button->setEnabled(true);
    mo1->stop();
    sound1->stop();
    ui->imageTimer1->hide();
    ui->closeTimer1Button->hide();
}


void timer::timeToString(QString *str, long long int &remainingTime)
{
    remainingTime -= 1000;
    int ss = (remainingTime / 1000) % 60;
    int mm = (remainingTime / 1000) / 60;
    int hh = 0;
    if(hh < 10)
    {
        *str = "0" + QString::number(hh) +  ":";
    }
    else
    {
        *str = QString::number(hh) + ":";
    }
    if(mm < 10)
    {
        *str += "0" + QString::number(mm) +  ":";
    }
    else
    {
        *str += QString::number(mm) + ":";
    }
    if(ss < 10)
    {
        *str += "0" + QString::number(ss);
    }
    else
    {
        *str += QString::number(ss);
    }
}
