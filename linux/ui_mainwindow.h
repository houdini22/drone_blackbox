/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QDialog *kdialog;
    QGroupBox *groupBoxStatus;
    QLabel *labelGamePad;
    QLabel *labelGamePadValue;
    QLabel *label;
    QLabel *labelArduinoValue;
    QLabel *label_15;
    QLabel *labelLeapMotionValue;
    QGroupBox *groupBoxTitle;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *labelGamePadLeftX;
    QLabel *labelGamePadLeftY;
    QLabel *labelGamePadRightX;
    QLabel *labelGamePadRightY;
    QLabel *label_6;
    QLabel *label_7;
    QGroupBox *groupBox;
    QLabel *labelArmedValue;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *labelThrottleMode;
    QLabel *label_10;
    QLabel *labelSending;
    QGroupBox *groupBox_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *labelYaw;
    QLabel *labelThrottle;
    QLabel *label_13;
    QLabel *labelRoll;
    QLabel *label_14;
    QLabel *labelIsAvailable;
    QLabel *imageLabel;
    QMenuBar *menuBar;
    QMenu *menuDron;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1724, 768);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        kdialog = new QDialog(centralWidget);
        kdialog->setObjectName(QStringLiteral("kdialog"));
        kdialog->setGeometry(QRect(942, 548, 16, 16));
        groupBoxStatus = new QGroupBox(centralWidget);
        groupBoxStatus->setObjectName(QStringLiteral("groupBoxStatus"));
        groupBoxStatus->setGeometry(QRect(10, 10, 491, 231));
        QFont font;
        font.setPointSize(20);
        groupBoxStatus->setFont(font);
        labelGamePad = new QLabel(groupBoxStatus);
        labelGamePad->setObjectName(QStringLiteral("labelGamePad"));
        labelGamePad->setGeometry(QRect(20, 90, 141, 31));
        QFont font1;
        font1.setPointSize(14);
        labelGamePad->setFont(font1);
        labelGamePadValue = new QLabel(groupBoxStatus);
        labelGamePadValue->setObjectName(QStringLiteral("labelGamePadValue"));
        labelGamePadValue->setEnabled(false);
        labelGamePadValue->setGeometry(QRect(330, 90, 141, 31));
        labelGamePadValue->setFont(font1);
        labelGamePadValue->setStyleSheet(QStringLiteral(""));
        labelGamePadValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelGamePadValue->setIndent(0);
        label = new QLabel(groupBoxStatus);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 120, 101, 31));
        label->setFont(font1);
        labelArduinoValue = new QLabel(groupBoxStatus);
        labelArduinoValue->setObjectName(QStringLiteral("labelArduinoValue"));
        labelArduinoValue->setEnabled(false);
        labelArduinoValue->setGeometry(QRect(330, 119, 141, 31));
        labelArduinoValue->setFont(font1);
        labelArduinoValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_15 = new QLabel(groupBoxStatus);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 150, 131, 31));
        label_15->setFont(font1);
        labelLeapMotionValue = new QLabel(groupBoxStatus);
        labelLeapMotionValue->setObjectName(QStringLiteral("labelLeapMotionValue"));
        labelLeapMotionValue->setEnabled(false);
        labelLeapMotionValue->setGeometry(QRect(330, 150, 141, 31));
        labelLeapMotionValue->setFont(font1);
        labelLeapMotionValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBoxTitle = new QGroupBox(centralWidget);
        groupBoxTitle->setObjectName(QStringLiteral("groupBoxTitle"));
        groupBoxTitle->setGeometry(QRect(520, 10, 491, 231));
        groupBoxTitle->setFont(font);
        label_2 = new QLabel(groupBoxTitle);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 21, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(groupBoxTitle);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 21, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(groupBoxTitle);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 60, 231, 31));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(groupBoxTitle);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 60, 221, 31));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        labelGamePadLeftX = new QLabel(groupBoxTitle);
        labelGamePadLeftX->setObjectName(QStringLiteral("labelGamePadLeftX"));
        labelGamePadLeftX->setGeometry(QRect(110, 90, 131, 31));
        labelGamePadLeftX->setFont(font1);
        labelGamePadLeftY = new QLabel(groupBoxTitle);
        labelGamePadLeftY->setObjectName(QStringLiteral("labelGamePadLeftY"));
        labelGamePadLeftY->setGeometry(QRect(110, 120, 131, 31));
        labelGamePadLeftY->setFont(font1);
        labelGamePadRightX = new QLabel(groupBoxTitle);
        labelGamePadRightX->setObjectName(QStringLiteral("labelGamePadRightX"));
        labelGamePadRightX->setGeometry(QRect(330, 90, 141, 31));
        labelGamePadRightX->setFont(font1);
        labelGamePadRightY = new QLabel(groupBoxTitle);
        labelGamePadRightY->setObjectName(QStringLiteral("labelGamePadRightY"));
        labelGamePadRightY->setGeometry(QRect(330, 120, 141, 31));
        labelGamePadRightY->setFont(font1);
        label_6 = new QLabel(groupBoxTitle);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(250, 120, 21, 31));
        label_6->setFont(font1);
        label_7 = new QLabel(groupBoxTitle);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 90, 21, 31));
        label_7->setFont(font1);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 250, 491, 361));
        groupBox->setFont(font);
        labelArmedValue = new QLabel(groupBox);
        labelArmedValue->setObjectName(QStringLiteral("labelArmedValue"));
        labelArmedValue->setGeometry(QRect(220, 100, 251, 31));
        labelArmedValue->setFont(font1);
        labelArmedValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(22, 100, 201, 31));
        label_8->setFont(font1);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 140, 201, 31));
        label_9->setFont(font1);
        labelThrottleMode = new QLabel(groupBox);
        labelThrottleMode->setObjectName(QStringLiteral("labelThrottleMode"));
        labelThrottleMode->setGeometry(QRect(220, 140, 251, 31));
        labelThrottleMode->setFont(font1);
        labelThrottleMode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 60, 201, 31));
        label_10->setFont(font1);
        labelSending = new QLabel(groupBox);
        labelSending->setObjectName(QStringLiteral("labelSending"));
        labelSending->setGeometry(QRect(220, 60, 251, 31));
        labelSending->setFont(font1);
        labelSending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(520, 250, 491, 361));
        groupBox_2->setFont(font);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 60, 131, 31));
        label_11->setFont(font1);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 100, 61, 31));
        label_12->setFont(font1);
        labelYaw = new QLabel(groupBox_2);
        labelYaw->setObjectName(QStringLiteral("labelYaw"));
        labelYaw->setGeometry(QRect(170, 100, 61, 31));
        labelYaw->setFont(font1);
        labelThrottle = new QLabel(groupBox_2);
        labelThrottle->setObjectName(QStringLiteral("labelThrottle"));
        labelThrottle->setGeometry(QRect(170, 60, 61, 31));
        labelThrottle->setFont(font1);
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 140, 61, 31));
        label_13->setFont(font1);
        labelRoll = new QLabel(groupBox_2);
        labelRoll->setObjectName(QStringLiteral("labelRoll"));
        labelRoll->setGeometry(QRect(170, 140, 61, 31));
        labelRoll->setFont(font1);
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 180, 111, 31));
        label_14->setFont(font1);
        labelIsAvailable = new QLabel(groupBox_2);
        labelIsAvailable->setObjectName(QStringLiteral("labelIsAvailable"));
        labelIsAvailable->setGeometry(QRect(170, 180, 61, 31));
        labelIsAvailable->setFont(font1);
        imageLabel = new QLabel(centralWidget);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setGeometry(QRect(1050, 50, 640, 480));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1724, 30));
        menuDron = new QMenu(menuBar);
        menuDron->setObjectName(QStringLiteral("menuDron"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDron->menuAction());
        menuDron->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "&Exit", nullptr));
        groupBoxStatus->setTitle(QApplication::translate("MainWindow", "Devices", nullptr));
        labelGamePad->setText(QApplication::translate("MainWindow", "GamePad", nullptr));
        labelGamePadValue->setText(QApplication::translate("MainWindow", "connect", nullptr));
        label->setText(QApplication::translate("MainWindow", "Arduino", nullptr));
        labelArduinoValue->setText(QApplication::translate("MainWindow", "connect", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "LeapMotion", nullptr));
        labelLeapMotionValue->setText(QApplication::translate("MainWindow", "connect", nullptr));
        groupBoxTitle->setTitle(QApplication::translate("MainWindow", "Radio", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "RIGHT", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "LEFT", nullptr));
        labelGamePadLeftX->setText(QApplication::translate("MainWindow", "---", nullptr));
        labelGamePadLeftY->setText(QApplication::translate("MainWindow", "---", nullptr));
        labelGamePadRightX->setText(QApplication::translate("MainWindow", "---", nullptr));
        labelGamePadRightY->setText(QApplication::translate("MainWindow", "---", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "X", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Drone", nullptr));
        labelArmedValue->setText(QApplication::translate("MainWindow", "not armed", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Motors", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Throttle mode", nullptr));
        labelThrottleMode->setText(QApplication::translate("MainWindow", "not active", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Sending", nullptr));
        labelSending->setText(QApplication::translate("MainWindow", "not sending", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Leap Motion", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Throttle", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Y", nullptr));
        labelYaw->setText(QApplication::translate("MainWindow", "---", nullptr));
        labelThrottle->setText(QApplication::translate("MainWindow", "---", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Z", nullptr));
        labelRoll->setText(QApplication::translate("MainWindow", "---", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Is available", nullptr));
        labelIsAvailable->setText(QApplication::translate("MainWindow", "false", nullptr));
        imageLabel->setText(QString());
        menuDron->setTitle(QApplication::translate("MainWindow", "Pro&gram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
