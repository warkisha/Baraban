/********************************************************************************
** Form generated from reading UI file 'baraban.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARABAN_H
#define UI_BARABAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Baraban
{
public:
    QWidget *centralwidget;
    QLabel *background;
    QLabel *MrPin;
    QPushButton *Go;
    QPushButton *rotate;
    QLabel *baraban;

    void setupUi(QMainWindow *Baraban)
    {
        if (Baraban->objectName().isEmpty())
            Baraban->setObjectName(QString::fromUtf8("Baraban"));
        Baraban->resize(1205, 775);
        Baraban->setMinimumSize(QSize(1200, 750));
        Baraban->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(Baraban);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        background = new QLabel(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 1920, 1080));
        background->setPixmap(QPixmap(QString::fromUtf8("img/background.jpg")));
        MrPin = new QLabel(centralwidget);
        MrPin->setObjectName(QString::fromUtf8("MrPin"));
        MrPin->setGeometry(QRect(810, 340, 472, 550));
        MrPin->setPixmap(QPixmap(QString::fromUtf8("img/pin.png")));
        Go = new QPushButton(centralwidget);
        Go->setObjectName(QString::fromUtf8("Go"));
        Go->setGeometry(QRect(740, 20, 441, 71));
        Go->setStyleSheet(QString::fromUtf8("border-radius: 110px solid #6d00fe;\n"
"border: 2px solid #f700fe;\n"
"background-color: #6d00fe;\n"
"color: rgb(255, 255, 255);\n"
"font: 800 16pt \"Source Code Pro ExtraLight\";"));
        rotate = new QPushButton(centralwidget);
        rotate->setObjectName(QString::fromUtf8("rotate"));
        rotate->setGeometry(QRect(50, -40, 2051, 861));
        rotate->setStyleSheet(QString::fromUtf8("background: transparent"));
        baraban = new QLabel(centralwidget);
        baraban->setObjectName(QString::fromUtf8("baraban"));
        baraban->setGeometry(QRect(110, -60, 900, 900));
        baraban->setPixmap(QPixmap(QString::fromUtf8("img/baraban2.png")));
        Baraban->setCentralWidget(centralwidget);
        background->raise();
        baraban->raise();
        MrPin->raise();
        rotate->raise();
        Go->raise();

        retranslateUi(Baraban);

        QMetaObject::connectSlotsByName(Baraban);
    } // setupUi

    void retranslateUi(QMainWindow *Baraban)
    {
        Baraban->setWindowTitle(QCoreApplication::translate("Baraban", "Baraban", nullptr));
        background->setText(QString());
        MrPin->setText(QString());
        Go->setText(QCoreApplication::translate("Baraban", "\320\232\321\200\321\203\321\202\320\270\321\202\321\214!!!", nullptr));
        rotate->setText(QString());
        baraban->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Baraban: public Ui_Baraban {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARABAN_H
