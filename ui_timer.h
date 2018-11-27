/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timer
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *timer1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *setTimer1Button;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_22;
    QTimeEdit *setTime1;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopTimer1;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *startTimer1;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *imageTimer1;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *closeTimer1Button;
    QSpacerItem *horizontalSpacer_16;

    void setupUi(QDialog *timer)
    {
        if (timer->objectName().isEmpty())
            timer->setObjectName(QStringLiteral("timer"));
        timer->resize(400, 400);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 240, 237, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        timer->setPalette(palette);
        layoutWidget = new QWidget(timer);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 50, 201, 321));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        timer1 = new QLabel(layoutWidget);
        timer1->setObjectName(QStringLiteral("timer1"));
        QFont font;
        font.setPointSize(36);
        timer1->setFont(font);

        verticalLayout->addWidget(timer1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        setTimer1Button = new QPushButton(layoutWidget);
        setTimer1Button->setObjectName(QStringLiteral("setTimer1Button"));
        setTimer1Button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(setTimer1Button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_22);

        setTime1 = new QTimeEdit(layoutWidget);
        setTime1->setObjectName(QStringLiteral("setTime1"));
        setTime1->setCurrentSection(QDateTimeEdit::HourSection);

        horizontalLayout_10->addWidget(setTime1);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_23);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        stopTimer1 = new QPushButton(layoutWidget);
        stopTimer1->setObjectName(QStringLiteral("stopTimer1"));
        stopTimer1->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(stopTimer1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        startTimer1 = new QPushButton(layoutWidget);
        startTimer1->setObjectName(QStringLiteral("startTimer1"));
        startTimer1->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(startTimer1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        imageTimer1 = new QLabel(layoutWidget);
        imageTimer1->setObjectName(QStringLiteral("imageTimer1"));
        imageTimer1->setPixmap(QPixmap(QString::fromUtf8("Image/clock.gif")));
        imageTimer1->setScaledContents(true);

        verticalLayout_2->addWidget(imageTimer1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_17 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);

        closeTimer1Button = new QPushButton(layoutWidget);
        closeTimer1Button->setObjectName(QStringLiteral("closeTimer1Button"));
        closeTimer1Button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_7->addWidget(closeTimer1Button);

        horizontalSpacer_16 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_16);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_7->addLayout(verticalLayout_2);


        retranslateUi(timer);

        QMetaObject::connectSlotsByName(timer);
    } // setupUi

    void retranslateUi(QDialog *timer)
    {
        timer->setWindowTitle(QApplication::translate("timer", "Timer", nullptr));
        timer1->setText(QApplication::translate("timer", "00:00:00", nullptr));
        setTimer1Button->setText(QApplication::translate("timer", "Set", nullptr));
        setTime1->setDisplayFormat(QApplication::translate("timer", "HH:mm:ss", nullptr));
        stopTimer1->setText(QApplication::translate("timer", "Stop", nullptr));
        startTimer1->setText(QApplication::translate("timer", "Start", nullptr));
        imageTimer1->setText(QString());
        closeTimer1Button->setText(QApplication::translate("timer", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class timer: public Ui_timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
