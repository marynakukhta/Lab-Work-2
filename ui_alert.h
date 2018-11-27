/********************************************************************************
** Form generated from reading UI file 'alert.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALERT_H
#define UI_ALERT_H

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

class Ui_alert
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *alert1;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *setAlert1;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_17;
    QTimeEdit *alert1Edit;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *stopAlert1;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *startAlert1;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_10;
    QLabel *image1;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *closeButton1;
    QSpacerItem *horizontalSpacer_23;

    void setupUi(QDialog *alert)
    {
        if (alert->objectName().isEmpty())
            alert->setObjectName(QStringLiteral("alert"));
        alert->resize(400, 400);
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
        alert->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        alert->setFont(font);
        layoutWidget = new QWidget(alert);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 20, 191, 342));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        alert1 = new QLabel(layoutWidget);
        alert1->setObjectName(QStringLiteral("alert1"));
        QFont font1;
        font1.setPointSize(36);
        alert1->setFont(font1);

        verticalLayout->addWidget(alert1);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        setAlert1 = new QPushButton(layoutWidget);
        setAlert1->setObjectName(QStringLiteral("setAlert1"));
        setAlert1->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(setAlert1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_17 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);

        alert1Edit = new QTimeEdit(layoutWidget);
        alert1Edit->setObjectName(QStringLiteral("alert1Edit"));
        alert1Edit->setCursor(QCursor(Qt::WaitCursor));
        alert1Edit->setCalendarPopup(true);

        horizontalLayout_7->addWidget(alert1Edit);

        horizontalSpacer_16 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_16);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_11 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        stopAlert1 = new QPushButton(layoutWidget);
        stopAlert1->setObjectName(QStringLiteral("stopAlert1"));
        stopAlert1->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(stopAlert1);

        horizontalSpacer_7 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        startAlert1 = new QPushButton(layoutWidget);
        startAlert1->setObjectName(QStringLiteral("startAlert1"));
        startAlert1->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(startAlert1);

        horizontalSpacer_10 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_10 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_10);

        image1 = new QLabel(layoutWidget);
        image1->setObjectName(QStringLiteral("image1"));
        image1->setPixmap(QPixmap(QString::fromUtf8("Image/clock.gif")));
        image1->setScaledContents(true);

        verticalLayout->addWidget(image1);

        verticalSpacer_13 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_13);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_22 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_22);

        closeButton1 = new QPushButton(layoutWidget);
        closeButton1->setObjectName(QStringLiteral("closeButton1"));
        closeButton1->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_10->addWidget(closeButton1);

        horizontalSpacer_23 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_23);


        verticalLayout->addLayout(horizontalLayout_10);


        retranslateUi(alert);

        QMetaObject::connectSlotsByName(alert);
    } // setupUi

    void retranslateUi(QDialog *alert)
    {
        alert->setWindowTitle(QApplication::translate("alert", "Alarm", nullptr));
        alert1->setText(QApplication::translate("alert", "00:00:00", nullptr));
        setAlert1->setText(QApplication::translate("alert", "Set", nullptr));
        alert1Edit->setDisplayFormat(QApplication::translate("alert", "H:mm", nullptr));
        stopAlert1->setText(QApplication::translate("alert", "Stop", nullptr));
        startAlert1->setText(QApplication::translate("alert", "Start", nullptr));
        image1->setText(QString());
        closeButton1->setText(QApplication::translate("alert", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alert: public Ui_alert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALERT_H
