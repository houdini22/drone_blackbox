/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QLabel *labelRecordingActive;
    QPushButton *recordingDeleteButton;
    QListWidget *listWidgetRecording;
    QLineEdit *lineRecordingName;
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
        kdialog->setGeometry(QRect(942, 488, 16, 16));
        groupBoxStatus = new QGroupBox(centralWidget);
        groupBoxStatus->setObjectName(QStringLiteral("groupBoxStatus"));
        groupBoxStatus->setGeometry(QRect(10, 10, 491, 191));
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
        groupBoxTitle = new QGroupBox(centralWidget);
        groupBoxTitle->setObjectName(QStringLiteral("groupBoxTitle"));
        groupBoxTitle->setGeometry(QRect(520, 10, 491, 191));
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
        groupBox->setGeometry(QRect(10, 210, 491, 361));
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
        groupBox_2->setGeometry(QRect(520, 210, 491, 361));
        groupBox_2->setFont(font);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 60, 201, 31));
        label_11->setFont(font1);
        labelRecordingActive = new QLabel(groupBox_2);
        labelRecordingActive->setObjectName(QStringLiteral("labelRecordingActive"));
        labelRecordingActive->setGeometry(QRect(260, 60, 211, 31));
        labelRecordingActive->setFont(font1);
        labelRecordingActive->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        recordingDeleteButton = new QPushButton(groupBox_2);
        recordingDeleteButton->setObjectName(QStringLiteral("recordingDeleteButton"));
        recordingDeleteButton->setGeometry(QRect(380, 260, 94, 36));
        QFont font2;
        font2.setPointSize(12);
        recordingDeleteButton->setFont(font2);
        listWidgetRecording = new QListWidget(groupBox_2);
        listWidgetRecording->setObjectName(QStringLiteral("listWidgetRecording"));
        listWidgetRecording->setGeometry(QRect(20, 100, 451, 151));
        QFont font3;
        font3.setPointSize(10);
        listWidgetRecording->setFont(font3);
        lineRecordingName = new QLineEdit(groupBox_2);
        lineRecordingName->setObjectName(QStringLiteral("lineRecordingName"));
        lineRecordingName->setGeometry(QRect(20, 310, 451, 34));
        lineRecordingName->setFont(font3);
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "&Exit", Q_NULLPTR));
        groupBoxStatus->setTitle(QApplication::translate("MainWindow", "Devices", Q_NULLPTR));
        labelGamePad->setText(QApplication::translate("MainWindow", "GamePad", Q_NULLPTR));
        labelGamePadValue->setText(QApplication::translate("MainWindow", "connect", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Arduino", Q_NULLPTR));
        labelArduinoValue->setText(QApplication::translate("MainWindow", "connect", Q_NULLPTR));
        groupBoxTitle->setTitle(QApplication::translate("MainWindow", "Radio", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "RIGHT", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "LEFT", Q_NULLPTR));
        labelGamePadLeftX->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        labelGamePadLeftY->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        labelGamePadRightX->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        labelGamePadRightY->setText(QApplication::translate("MainWindow", "---", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Drone", Q_NULLPTR));
        labelArmedValue->setText(QApplication::translate("MainWindow", "not armed", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Motors", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Throttle mode", Q_NULLPTR));
        labelThrottleMode->setText(QApplication::translate("MainWindow", "not active", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Sending", Q_NULLPTR));
        labelSending->setText(QApplication::translate("MainWindow", "not sending", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Record / Play", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Mode", Q_NULLPTR));
        labelRecordingActive->setText(QApplication::translate("MainWindow", "none", Q_NULLPTR));
        recordingDeleteButton->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        imageLabel->setText(QString());
        menuDron->setTitle(QApplication::translate("MainWindow", "Pro&gram", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
