/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "mousesteering.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionSettingsRadio;
    QAction *actionArming_Mode;
    QAction *actionDisarming_Mode;
    QWidget *centralWidget;
    QDialog *kdialog;
    QGroupBox *groupBoxStatus;
    QLabel *labelGamePad;
    QLabel *labelGamePadValue;
    QLabel *label;
    QLabel *labelArduinoValue;
    QLabel *label_15;
    QLabel *labelLeapMotionValue;
    QLabel *label_16;
    QRadioButton *radioMouseSteeringEnable;
    QLabel *labelGamePad_2;
    QLabel *labelGamePadValue2;
    QRadioButton *radioGamePad1Enable;
    QRadioButton *radioGamePad2Enable;
    QLabel *labelLeapMouseSteering;
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
    QLabel *labelLeftXmiddle;
    QLabel *labelLeftXmax;
    QLabel *labelLeftXmin;
    QLabel *labelLeftYmiddle;
    QLabel *labelLeftYmax;
    QLabel *labelLeftYmin;
    QLabel *labelRightYmin;
    QLabel *labelRightYmax;
    QLabel *labelRightXmiddle;
    QLabel *labelRightXmax;
    QLabel *labelRightYmiddle;
    QLabel *labelRightXmin;
    QPushButton *buttonSettingsRadio;
    QGroupBox *groupBox;
    QLabel *labelArmedValue;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *labelThrottleMode;
    QLabel *label_10;
    QLabel *labelSending;
    QPushButton *buttonSettingsArming;
    QPushButton *buttonSettingsDisarming;
    QPushButton *buttonSettingsThrottleMode;
    QLabel *label_17;
    QLabel *labelThrust;
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
    MouseSteering *mouseSteering;
    QFrame *line;
    QFrame *line_2;
    QRadioButton *radioMouseSteering;
    QMenuBar *menuBar;
    QMenu *menuDron;
    QMenu *menuSettings;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSettingsRadio = new QAction(MainWindow);
        actionSettingsRadio->setObjectName(QString::fromUtf8("actionSettingsRadio"));
        actionArming_Mode = new QAction(MainWindow);
        actionArming_Mode->setObjectName(QString::fromUtf8("actionArming_Mode"));
        actionDisarming_Mode = new QAction(MainWindow);
        actionDisarming_Mode->setObjectName(QString::fromUtf8("actionDisarming_Mode"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        kdialog = new QDialog(centralWidget);
        kdialog->setObjectName(QString::fromUtf8("kdialog"));
        kdialog->setGeometry(QRect(942, 548, 16, 16));
        groupBoxStatus = new QGroupBox(centralWidget);
        groupBoxStatus->setObjectName(QString::fromUtf8("groupBoxStatus"));
        groupBoxStatus->setGeometry(QRect(10, 10, 531, 271));
        QFont font;
        font.setPointSize(20);
        groupBoxStatus->setFont(font);
        labelGamePad = new QLabel(groupBoxStatus);
        labelGamePad->setObjectName(QString::fromUtf8("labelGamePad"));
        labelGamePad->setGeometry(QRect(20, 90, 141, 31));
        QFont font1;
        font1.setPointSize(14);
        labelGamePad->setFont(font1);
        labelGamePadValue = new QLabel(groupBoxStatus);
        labelGamePadValue->setObjectName(QString::fromUtf8("labelGamePadValue"));
        labelGamePadValue->setEnabled(false);
        labelGamePadValue->setGeometry(QRect(330, 90, 181, 31));
        labelGamePadValue->setFont(font1);
        labelGamePadValue->setStyleSheet(QString::fromUtf8(""));
        labelGamePadValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelGamePadValue->setIndent(0);
        label = new QLabel(groupBoxStatus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 151, 101, 31));
        label->setFont(font1);
        labelArduinoValue = new QLabel(groupBoxStatus);
        labelArduinoValue->setObjectName(QString::fromUtf8("labelArduinoValue"));
        labelArduinoValue->setEnabled(false);
        labelArduinoValue->setGeometry(QRect(330, 150, 181, 31));
        labelArduinoValue->setFont(font1);
        labelArduinoValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_15 = new QLabel(groupBoxStatus);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 181, 131, 31));
        label_15->setFont(font1);
        labelLeapMotionValue = new QLabel(groupBoxStatus);
        labelLeapMotionValue->setObjectName(QString::fromUtf8("labelLeapMotionValue"));
        labelLeapMotionValue->setEnabled(false);
        labelLeapMotionValue->setGeometry(QRect(330, 181, 181, 31));
        labelLeapMotionValue->setFont(font1);
        labelLeapMotionValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_16 = new QLabel(groupBoxStatus);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 211, 181, 31));
        label_16->setFont(font1);
        radioMouseSteeringEnable = new QRadioButton(groupBoxStatus);
        radioMouseSteeringEnable->setObjectName(QString::fromUtf8("radioMouseSteeringEnable"));
        radioMouseSteeringEnable->setGeometry(QRect(220, 210, 111, 31));
        radioMouseSteeringEnable->setFont(font1);
        radioMouseSteeringEnable->setLayoutDirection(Qt::RightToLeft);
        radioMouseSteeringEnable->setStyleSheet(QString::fromUtf8("color: rgb(97, 105, 114);"));
        labelGamePad_2 = new QLabel(groupBoxStatus);
        labelGamePad_2->setObjectName(QString::fromUtf8("labelGamePad_2"));
        labelGamePad_2->setGeometry(QRect(20, 120, 141, 31));
        labelGamePad_2->setFont(font1);
        labelGamePadValue2 = new QLabel(groupBoxStatus);
        labelGamePadValue2->setObjectName(QString::fromUtf8("labelGamePadValue2"));
        labelGamePadValue2->setEnabled(false);
        labelGamePadValue2->setGeometry(QRect(330, 120, 181, 31));
        labelGamePadValue2->setFont(font1);
        labelGamePadValue2->setStyleSheet(QString::fromUtf8(""));
        labelGamePadValue2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelGamePadValue2->setIndent(0);
        radioGamePad1Enable = new QRadioButton(groupBoxStatus);
        radioGamePad1Enable->setObjectName(QString::fromUtf8("radioGamePad1Enable"));
        radioGamePad1Enable->setGeometry(QRect(220, 90, 111, 31));
        radioGamePad1Enable->setFont(font1);
        radioGamePad1Enable->setLayoutDirection(Qt::RightToLeft);
        radioGamePad1Enable->setStyleSheet(QString::fromUtf8(""));
        radioGamePad1Enable->setChecked(true);
        radioGamePad2Enable = new QRadioButton(groupBoxStatus);
        radioGamePad2Enable->setObjectName(QString::fromUtf8("radioGamePad2Enable"));
        radioGamePad2Enable->setGeometry(QRect(220, 120, 111, 31));
        radioGamePad2Enable->setFont(font1);
        radioGamePad2Enable->setLayoutDirection(Qt::RightToLeft);
        radioGamePad2Enable->setStyleSheet(QString::fromUtf8("color: rgb(97, 105, 114);"));
        radioGamePad2Enable->setCheckable(false);
        labelLeapMouseSteering = new QLabel(groupBoxStatus);
        labelLeapMouseSteering->setObjectName(QString::fromUtf8("labelLeapMouseSteering"));
        labelLeapMouseSteering->setEnabled(false);
        labelLeapMouseSteering->setGeometry(QRect(330, 210, 181, 31));
        labelLeapMouseSteering->setFont(font1);
        labelLeapMouseSteering->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelLeapMouseSteering->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBoxTitle = new QGroupBox(centralWidget);
        groupBoxTitle->setObjectName(QString::fromUtf8("groupBoxTitle"));
        groupBoxTitle->setGeometry(QRect(550, 10, 531, 271));
        groupBoxTitle->setFont(font);
        label_2 = new QLabel(groupBoxTitle);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 120, 111, 31));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(groupBoxTitle);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 200, 111, 31));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(groupBoxTitle);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 60, 231, 31));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(groupBoxTitle);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 60, 221, 31));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        labelGamePadLeftX = new QLabel(groupBoxTitle);
        labelGamePadLeftX->setObjectName(QString::fromUtf8("labelGamePadLeftX"));
        labelGamePadLeftX->setGeometry(QRect(130, 120, 81, 31));
        labelGamePadLeftX->setFont(font1);
        labelGamePadLeftX->setAlignment(Qt::AlignCenter);
        labelGamePadLeftY = new QLabel(groupBoxTitle);
        labelGamePadLeftY->setObjectName(QString::fromUtf8("labelGamePadLeftY"));
        labelGamePadLeftY->setGeometry(QRect(130, 200, 81, 31));
        labelGamePadLeftY->setFont(font1);
        labelGamePadLeftY->setAlignment(Qt::AlignCenter);
        labelGamePadRightX = new QLabel(groupBoxTitle);
        labelGamePadRightX->setObjectName(QString::fromUtf8("labelGamePadRightX"));
        labelGamePadRightX->setGeometry(QRect(360, 120, 111, 31));
        labelGamePadRightX->setFont(font1);
        labelGamePadRightX->setAlignment(Qt::AlignCenter);
        labelGamePadRightY = new QLabel(groupBoxTitle);
        labelGamePadRightY->setObjectName(QString::fromUtf8("labelGamePadRightY"));
        labelGamePadRightY->setGeometry(QRect(360, 200, 111, 31));
        labelGamePadRightY->setFont(font1);
        labelGamePadRightY->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(groupBoxTitle);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 200, 121, 31));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(groupBoxTitle);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 120, 121, 31));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        labelLeftXmiddle = new QLabel(groupBoxTitle);
        labelLeftXmiddle->setObjectName(QString::fromUtf8("labelLeftXmiddle"));
        labelLeftXmiddle->setGeometry(QRect(0, 130, 51, 16));
        QFont font2;
        font2.setPointSize(8);
        labelLeftXmiddle->setFont(font2);
        labelLeftXmiddle->setAlignment(Qt::AlignCenter);
        labelLeftXmax = new QLabel(groupBoxTitle);
        labelLeftXmax->setObjectName(QString::fromUtf8("labelLeftXmax"));
        labelLeftXmax->setGeometry(QRect(0, 110, 51, 16));
        labelLeftXmax->setFont(font2);
        labelLeftXmax->setAlignment(Qt::AlignCenter);
        labelLeftXmin = new QLabel(groupBoxTitle);
        labelLeftXmin->setObjectName(QString::fromUtf8("labelLeftXmin"));
        labelLeftXmin->setGeometry(QRect(0, 150, 51, 16));
        labelLeftXmin->setFont(font2);
        labelLeftXmin->setAlignment(Qt::AlignCenter);
        labelLeftYmiddle = new QLabel(groupBoxTitle);
        labelLeftYmiddle->setObjectName(QString::fromUtf8("labelLeftYmiddle"));
        labelLeftYmiddle->setGeometry(QRect(0, 210, 51, 16));
        labelLeftYmiddle->setFont(font2);
        labelLeftYmiddle->setAlignment(Qt::AlignCenter);
        labelLeftYmax = new QLabel(groupBoxTitle);
        labelLeftYmax->setObjectName(QString::fromUtf8("labelLeftYmax"));
        labelLeftYmax->setGeometry(QRect(0, 190, 51, 16));
        labelLeftYmax->setFont(font2);
        labelLeftYmax->setAlignment(Qt::AlignCenter);
        labelLeftYmin = new QLabel(groupBoxTitle);
        labelLeftYmin->setObjectName(QString::fromUtf8("labelLeftYmin"));
        labelLeftYmin->setGeometry(QRect(0, 230, 51, 16));
        labelLeftYmin->setFont(font2);
        labelLeftYmin->setAlignment(Qt::AlignCenter);
        labelRightYmin = new QLabel(groupBoxTitle);
        labelRightYmin->setObjectName(QString::fromUtf8("labelRightYmin"));
        labelRightYmin->setGeometry(QRect(220, 230, 51, 16));
        labelRightYmin->setFont(font2);
        labelRightYmin->setAlignment(Qt::AlignCenter);
        labelRightYmax = new QLabel(groupBoxTitle);
        labelRightYmax->setObjectName(QString::fromUtf8("labelRightYmax"));
        labelRightYmax->setGeometry(QRect(220, 190, 51, 16));
        labelRightYmax->setFont(font2);
        labelRightYmax->setAlignment(Qt::AlignCenter);
        labelRightXmiddle = new QLabel(groupBoxTitle);
        labelRightXmiddle->setObjectName(QString::fromUtf8("labelRightXmiddle"));
        labelRightXmiddle->setGeometry(QRect(220, 130, 51, 16));
        labelRightXmiddle->setFont(font2);
        labelRightXmiddle->setAlignment(Qt::AlignCenter);
        labelRightXmax = new QLabel(groupBoxTitle);
        labelRightXmax->setObjectName(QString::fromUtf8("labelRightXmax"));
        labelRightXmax->setGeometry(QRect(220, 110, 51, 16));
        labelRightXmax->setFont(font2);
        labelRightXmax->setAlignment(Qt::AlignCenter);
        labelRightYmiddle = new QLabel(groupBoxTitle);
        labelRightYmiddle->setObjectName(QString::fromUtf8("labelRightYmiddle"));
        labelRightYmiddle->setGeometry(QRect(220, 210, 51, 16));
        labelRightYmiddle->setFont(font2);
        labelRightYmiddle->setAlignment(Qt::AlignCenter);
        labelRightXmin = new QLabel(groupBoxTitle);
        labelRightXmin->setObjectName(QString::fromUtf8("labelRightXmin"));
        labelRightXmin->setGeometry(QRect(220, 150, 51, 16));
        labelRightXmin->setFont(font2);
        labelRightXmin->setAlignment(Qt::AlignCenter);
        buttonSettingsRadio = new QPushButton(groupBoxTitle);
        buttonSettingsRadio->setObjectName(QString::fromUtf8("buttonSettingsRadio"));
        buttonSettingsRadio->setGeometry(QRect(440, 10, 81, 31));
        QFont font3;
        font3.setPointSize(10);
        buttonSettingsRadio->setFont(font3);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 290, 531, 311));
        groupBox->setFont(font);
        labelArmedValue = new QLabel(groupBox);
        labelArmedValue->setObjectName(QString::fromUtf8("labelArmedValue"));
        labelArmedValue->setGeometry(QRect(400, 100, 111, 31));
        labelArmedValue->setFont(font1);
        labelArmedValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(22, 100, 201, 41));
        label_8->setFont(font1);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 140, 201, 41));
        label_9->setFont(font1);
        labelThrottleMode = new QLabel(groupBox);
        labelThrottleMode->setObjectName(QString::fromUtf8("labelThrottleMode"));
        labelThrottleMode->setGeometry(QRect(410, 140, 101, 31));
        labelThrottleMode->setFont(font1);
        labelThrottleMode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 60, 201, 41));
        label_10->setFont(font1);
        labelSending = new QLabel(groupBox);
        labelSending->setObjectName(QString::fromUtf8("labelSending"));
        labelSending->setGeometry(QRect(390, 60, 121, 31));
        labelSending->setFont(font1);
        labelSending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        buttonSettingsArming = new QPushButton(groupBox);
        buttonSettingsArming->setObjectName(QString::fromUtf8("buttonSettingsArming"));
        buttonSettingsArming->setGeometry(QRect(170, 110, 81, 21));
        QFont font4;
        font4.setPointSize(6);
        buttonSettingsArming->setFont(font4);
        buttonSettingsDisarming = new QPushButton(groupBox);
        buttonSettingsDisarming->setObjectName(QString::fromUtf8("buttonSettingsDisarming"));
        buttonSettingsDisarming->setGeometry(QRect(260, 110, 91, 21));
        buttonSettingsDisarming->setFont(font4);
        buttonSettingsThrottleMode = new QPushButton(groupBox);
        buttonSettingsThrottleMode->setObjectName(QString::fromUtf8("buttonSettingsThrottleMode"));
        buttonSettingsThrottleMode->setGeometry(QRect(170, 150, 81, 21));
        buttonSettingsThrottleMode->setFont(font4);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 180, 201, 41));
        label_17->setFont(font1);
        labelThrust = new QLabel(groupBox);
        labelThrust->setObjectName(QString::fromUtf8("labelThrust"));
        labelThrust->setGeometry(QRect(410, 180, 101, 31));
        labelThrust->setFont(font1);
        labelThrust->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(550, 290, 531, 311));
        groupBox_2->setFont(font);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 60, 131, 31));
        label_11->setFont(font1);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 100, 61, 31));
        label_12->setFont(font1);
        labelYaw = new QLabel(groupBox_2);
        labelYaw->setObjectName(QString::fromUtf8("labelYaw"));
        labelYaw->setGeometry(QRect(170, 100, 61, 31));
        labelYaw->setFont(font1);
        labelThrottle = new QLabel(groupBox_2);
        labelThrottle->setObjectName(QString::fromUtf8("labelThrottle"));
        labelThrottle->setGeometry(QRect(170, 60, 61, 31));
        labelThrottle->setFont(font1);
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 140, 61, 31));
        label_13->setFont(font1);
        labelRoll = new QLabel(groupBox_2);
        labelRoll->setObjectName(QString::fromUtf8("labelRoll"));
        labelRoll->setGeometry(QRect(170, 140, 61, 31));
        labelRoll->setFont(font1);
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 180, 111, 31));
        label_14->setFont(font1);
        labelIsAvailable = new QLabel(groupBox_2);
        labelIsAvailable->setObjectName(QString::fromUtf8("labelIsAvailable"));
        labelIsAvailable->setGeometry(QRect(170, 180, 61, 31));
        labelIsAvailable->setFont(font1);
        imageLabel = new QLabel(centralWidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(1150, 10, 640, 480));
        mouseSteering = new MouseSteering(centralWidget);
        mouseSteering->setObjectName(QString::fromUtf8("mouseSteering"));
        mouseSteering->setGeometry(QRect(1150, 510, 501, 501));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(1390, 530, 21, 461));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(1170, 750, 461, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        radioMouseSteering = new QRadioButton(centralWidget);
        radioMouseSteering->setObjectName(QString::fromUtf8("radioMouseSteering"));
        radioMouseSteering->setGeometry(QRect(1390, 740, 21, 41));
        radioMouseSteering->setIconSize(QSize(32, 32));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 30));
        menuDron = new QMenu(menuBar);
        menuDron->setObjectName(QString::fromUtf8("menuDron"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDron->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuDron->addAction(actionExit);
        menuSettings->addAction(actionSettingsRadio);
        menuSettings->addAction(actionArming_Mode);
        menuSettings->addAction(actionDisarming_Mode);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "&Exit", nullptr));
        actionSettingsRadio->setText(QApplication::translate("MainWindow", "&Radio", nullptr));
        actionArming_Mode->setText(QApplication::translate("MainWindow", "&Arming Mode", nullptr));
        actionDisarming_Mode->setText(QApplication::translate("MainWindow", "&Disarming Mode", nullptr));
        groupBoxStatus->setTitle(QApplication::translate("MainWindow", "Devices", nullptr));
        labelGamePad->setText(QApplication::translate("MainWindow", "GamePad 1", nullptr));
        labelGamePadValue->setText(QApplication::translate("MainWindow", "connect", nullptr));
        label->setText(QApplication::translate("MainWindow", "Arduino", nullptr));
        labelArduinoValue->setText(QApplication::translate("MainWindow", "connect", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "LeapMotion", nullptr));
        labelLeapMotionValue->setText(QApplication::translate("MainWindow", "connect", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Mouse Steering", nullptr));
        radioMouseSteeringEnable->setText(QApplication::translate("MainWindow", "disabled", nullptr));
        labelGamePad_2->setText(QApplication::translate("MainWindow", "GamePad 2", nullptr));
        labelGamePadValue2->setText(QApplication::translate("MainWindow", "connect", nullptr));
        radioGamePad1Enable->setText(QApplication::translate("MainWindow", "enabled", nullptr));
        radioGamePad2Enable->setText(QApplication::translate("MainWindow", "disabled", nullptr));
        labelLeapMouseSteering->setText(QApplication::translate("MainWindow", "connected", nullptr));
        groupBoxTitle->setTitle(QApplication::translate("MainWindow", "Radio", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "RIGHT", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "LEFT", nullptr));
        labelGamePadLeftX->setText(QApplication::translate("MainWindow", "-", nullptr));
        labelGamePadLeftY->setText(QApplication::translate("MainWindow", "-", nullptr));
        labelGamePadRightX->setText(QApplication::translate("MainWindow", "-", nullptr));
        labelGamePadRightY->setText(QApplication::translate("MainWindow", "-", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "X", nullptr));
        labelLeftXmiddle->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelLeftXmax->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelLeftXmin->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelLeftYmiddle->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelLeftYmax->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelLeftYmin->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelRightYmin->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelRightYmax->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelRightXmiddle->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelRightXmax->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelRightYmiddle->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelRightXmin->setText(QApplication::translate("MainWindow", "0", nullptr));
        buttonSettingsRadio->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Drone", nullptr));
        labelArmedValue->setText(QApplication::translate("MainWindow", "not armed", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Motors armed", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Throttle mode", nullptr));
        labelThrottleMode->setText(QApplication::translate("MainWindow", "not active", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Sending", nullptr));
        labelSending->setText(QApplication::translate("MainWindow", "not sending", nullptr));
        buttonSettingsArming->setText(QApplication::translate("MainWindow", "Arming Settings", nullptr));
        buttonSettingsDisarming->setText(QApplication::translate("MainWindow", "Disarming Settings", nullptr));
        buttonSettingsThrottleMode->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Thrust", nullptr));
        labelThrust->setText(QApplication::translate("MainWindow", "100%", nullptr));
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
        mouseSteering->setProperty("title", QVariant(QString()));
        radioMouseSteering->setText(QString());
        menuDron->setTitle(QApplication::translate("MainWindow", "Pro&gram", nullptr));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Sett&ings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
