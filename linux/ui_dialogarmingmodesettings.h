/********************************************************************************
** Form generated from reading UI file 'dialogarmingmodesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGARMINGMODESETTINGS_H
#define UI_DIALOGARMINGMODESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogArmingModeSettings
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLineEdit *inputLeftXmiddle;
    QGroupBox *groupBox_6;
    QLabel *label_4;
    QLineEdit *inputRightXmiddle;
    QGroupBox *groupBox_3;
    QLabel *label_7;
    QLineEdit *inputLeftYmiddle;
    QGroupBox *groupBox_5;
    QLabel *label_10;
    QLineEdit *inputRightYmiddle;
    QGroupBox *groupBox_4;
    QLabel *label_8;
    QLineEdit *inputTimeOfSignal;

    void setupUi(QDialog *DialogArmingModeSettings)
    {
        if (DialogArmingModeSettings->objectName().isEmpty())
            DialogArmingModeSettings->setObjectName(QStringLiteral("DialogArmingModeSettings"));
        DialogArmingModeSettings->resize(906, 437);
        buttonBox = new QDialogButtonBox(DialogArmingModeSettings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(550, 400, 351, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(DialogArmingModeSettings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 441, 121));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 40, 61, 31));
        label_3->setAlignment(Qt::AlignCenter);
        inputLeftXmiddle = new QLineEdit(groupBox);
        inputLeftXmiddle->setObjectName(QStringLiteral("inputLeftXmiddle"));
        inputLeftXmiddle->setGeometry(QRect(170, 70, 101, 32));
        groupBox_6 = new QGroupBox(DialogArmingModeSettings);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(460, 10, 441, 121));
        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 40, 61, 31));
        label_4->setAlignment(Qt::AlignCenter);
        inputRightXmiddle = new QLineEdit(groupBox_6);
        inputRightXmiddle->setObjectName(QStringLiteral("inputRightXmiddle"));
        inputRightXmiddle->setGeometry(QRect(170, 70, 101, 32));
        groupBox_3 = new QGroupBox(DialogArmingModeSettings);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 140, 441, 121));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(190, 40, 61, 31));
        label_7->setAlignment(Qt::AlignCenter);
        inputLeftYmiddle = new QLineEdit(groupBox_3);
        inputLeftYmiddle->setObjectName(QStringLiteral("inputLeftYmiddle"));
        inputLeftYmiddle->setGeometry(QRect(170, 70, 101, 32));
        groupBox_5 = new QGroupBox(DialogArmingModeSettings);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(460, 140, 441, 121));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(190, 40, 61, 31));
        label_10->setAlignment(Qt::AlignCenter);
        inputRightYmiddle = new QLineEdit(groupBox_5);
        inputRightYmiddle->setObjectName(QStringLiteral("inputRightYmiddle"));
        inputRightYmiddle->setGeometry(QRect(170, 70, 101, 32));
        groupBox_4 = new QGroupBox(DialogArmingModeSettings);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 270, 891, 121));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(380, 40, 121, 31));
        label_8->setAlignment(Qt::AlignCenter);
        inputTimeOfSignal = new QLineEdit(groupBox_4);
        inputTimeOfSignal->setObjectName(QStringLiteral("inputTimeOfSignal"));
        inputTimeOfSignal->setGeometry(QRect(390, 70, 101, 32));

        retranslateUi(DialogArmingModeSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogArmingModeSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogArmingModeSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogArmingModeSettings);
    } // setupUi

    void retranslateUi(QDialog *DialogArmingModeSettings)
    {
        DialogArmingModeSettings->setWindowTitle(QApplication::translate("DialogArmingModeSettings", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("DialogArmingModeSettings", "Left X", nullptr));
        label_3->setText(QApplication::translate("DialogArmingModeSettings", "Value", nullptr));
        groupBox_6->setTitle(QApplication::translate("DialogArmingModeSettings", "Right X", nullptr));
        label_4->setText(QApplication::translate("DialogArmingModeSettings", "Value", nullptr));
        groupBox_3->setTitle(QApplication::translate("DialogArmingModeSettings", "Left Y", nullptr));
        label_7->setText(QApplication::translate("DialogArmingModeSettings", "Value", nullptr));
        groupBox_5->setTitle(QApplication::translate("DialogArmingModeSettings", "Right Y", nullptr));
        label_10->setText(QApplication::translate("DialogArmingModeSettings", "Value", nullptr));
        groupBox_4->setTitle(QApplication::translate("DialogArmingModeSettings", "Time of signal", nullptr));
        label_8->setText(QApplication::translate("DialogArmingModeSettings", "Millisenconds", nullptr));
        inputTimeOfSignal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogArmingModeSettings: public Ui_DialogArmingModeSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGARMINGMODESETTINGS_H
