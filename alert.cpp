#include "alert.h"
#include "ui_alert.h"
#include <QTime>
#include <QTimer>
#include <QMovie>
#include <QSound>

alert::alert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alert)
{
    ui->setupUi(this);
    ui->alert1Edit->hide();
    ui->startAlert1->hide();
    ui->stopAlert1->hide();
    ui->image1->hide();
    ui->closeButton1->hide();
    on = false;
    time1 = -1;
    tmr1 = new QTimer;
    tmr1->setInterval(1000);
    tmr1->start();
    connect(tmr1, SIGNAL(timeout()), this, SLOT(updateTime1()));
    mo1 = new QMovie();
    mo1->setFileName("./Image/clock.gif");
    sound1 = new QSound("./Image/Sound.wav");
}

long long int alert::timeToInt(QTime tmr)
{
    int ms = 0;
    int sec = 0;
    int min = tmr.minute();
    int  h = tmr.hour();
    int res = ms + 1000*sec + 60000*min + 3600*1000*h;
    return res;
}

void alert::updateTime1()
{
    ui->alert1->setText(QTime::currentTime().toString());
    if(!on && ui->alert1Edit->isHidden())
    {
        ui->alert1Edit->setTime(QTime::currentTime());
    }
    if(on && time1 == timeToInt(QTime::currentTime()))
    {
        stopAlert1();
    }
}



void alert::stopAlert1()
{
    mo1->start();
    time1 = 0;
    ui->stopAlert1->setEnabled(false);
    on = false;
    ui->image1->show();
    ui->closeButton1->show();
    sound1->play();
}

alert::~alert()
{
    tmr1->stop();
    delete ui;
}



void alert::on_setAlert1_clicked()
{
    ui->alert1Edit->show();
    ui->alert1Edit->setTime(QTime::currentTime());
}

void alert::on_alert1Edit_userTimeChanged(const QTime &time)
{
    ui->startAlert1->show();
    ui->startAlert1->setEnabled(true);
    ui->stopAlert1->show();
    ui->stopAlert1->setEnabled(false);
    time1 = timeToInt(time);
}

void alert::on_startAlert1_clicked()
{
    on = true;
    ui->stopAlert1->setEnabled(true);
    ui->startAlert1->setEnabled(false);
    ui->setAlert1->setEnabled(false);
}

void alert::on_stopAlert1_clicked()
{
    on = false;
    time1 = -1;
    ui->setAlert1->setEnabled(true);
    ui->startAlert1->setEnabled(false);
    ui->stopAlert1->setEnabled(false);
}

void alert::on_closeButton1_clicked()
{
    mo1->stop();
    sound1->stop();
    ui->image1->hide();
    ui->closeButton1->hide();
    ui->setAlert1->setEnabled(true);
}
