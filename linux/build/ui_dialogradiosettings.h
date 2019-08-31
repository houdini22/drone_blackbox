/********************************************************************************
** Form generated from reading UI file 'dialogradiosettings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRADIOSETTINGS_H
#define UI_DIALOGRADIOSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogRadioSettings
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *inputLeftXmin;
    QLineEdit *inputLeftXmiddle;
    QLineEdit *inputLeftXmax;
    QGroupBox *groupBox_3;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *inputLeftYmax;
    QLineEdit *inputLeftYmin;
    QLineEdit *inputLeftYmiddle;
    QGroupBox *groupBox_5;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *inputRightYmax;
    QLineEdit *inputRightYmin;
    QLineEdit *inputRightYmiddle;
    QGroupBox *groupBox_6;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *inputRightXmax;
    QLineEdit *inputRightXmiddle;
    QLineEdit *inputRightXmin;

    void setupUi(QDialog *DialogRadioSettings)
    {
        if (DialogRadioSettings->objectName().isEmpty())
            DialogRadioSettings->setObjectName(QString::fromUtf8("DialogRadioSettings"));
        DialogRadioSettings->resize(909, 314);
        buttonBox = new QDialogButtonBox(DialogRadioSettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(570, 270, 331, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(DialogRadioSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 441, 121));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 71, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 40, 61, 31));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 40, 61, 31));
        label_3->setAlignment(Qt::AlignCenter);
        inputLeftXmin = new QLineEdit(groupBox);
        inputLeftXmin->setObjectName(QString::fromUtf8("inputLeftXmin"));
        inputLeftXmin->setGeometry(QRect(10, 70, 101, 32));
        inputLeftXmiddle = new QLineEdit(groupBox);
        inputLeftXmiddle->setObjectName(QString::fromUtf8("inputLeftXmiddle"));
        inputLeftXmiddle->setGeometry(QRect(170, 70, 101, 32));
        inputLeftXmax = new QLineEdit(groupBox);
        inputLeftXmax->setObjectName(QString::fromUtf8("inputLeftXmax"));
        inputLeftXmax->setGeometry(QRect(330, 70, 101, 32));
        groupBox_3 = new QGroupBox(DialogRadioSettings);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 140, 441, 121));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(370, 40, 61, 31));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 40, 71, 31));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(190, 40, 61, 31));
        label_7->setAlignment(Qt::AlignCenter);
        inputLeftYmax = new QLineEdit(groupBox_3);
        inputLeftYmax->setObjectName(QString::fromUtf8("inputLeftYmax"));
        inputLeftYmax->setGeometry(QRect(330, 70, 101, 32));
        inputLeftYmin = new QLineEdit(groupBox_3);
        inputLeftYmin->setObjectName(QString::fromUtf8("inputLeftYmin"));
        inputLeftYmin->setGeometry(QRect(10, 70, 101, 32));
        inputLeftYmiddle = new QLineEdit(groupBox_3);
        inputLeftYmiddle->setObjectName(QString::fromUtf8("inputLeftYmiddle"));
        inputLeftYmiddle->setGeometry(QRect(170, 70, 101, 32));
        groupBox_5 = new QGroupBox(DialogRadioSettings);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(460, 140, 441, 121));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(190, 40, 61, 31));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 40, 71, 31));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(370, 40, 61, 31));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inputRightYmax = new QLineEdit(groupBox_5);
        inputRightYmax->setObjectName(QString::fromUtf8("inputRightYmax"));
        inputRightYmax->setGeometry(QRect(330, 70, 101, 32));
        inputRightYmin = new QLineEdit(groupBox_5);
        inputRightYmin->setObjectName(QString::fromUtf8("inputRightYmin"));
        inputRightYmin->setGeometry(QRect(10, 70, 101, 32));
        inputRightYmiddle = new QLineEdit(groupBox_5);
        inputRightYmiddle->setObjectName(QString::fromUtf8("inputRightYmiddle"));
        inputRightYmiddle->setGeometry(QRect(170, 70, 101, 32));
        groupBox_6 = new QGroupBox(DialogRadioSettings);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(460, 10, 441, 121));
        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 40, 71, 31));
        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 40, 61, 31));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 40, 61, 31));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inputRightXmax = new QLineEdit(groupBox_6);
        inputRightXmax->setObjectName(QString::fromUtf8("inputRightXmax"));
        inputRightXmax->setGeometry(QRect(330, 70, 101, 32));
        inputRightXmiddle = new QLineEdit(groupBox_6);
        inputRightXmiddle->setObjectName(QString::fromUtf8("inputRightXmiddle"));
        inputRightXmiddle->setGeometry(QRect(170, 70, 101, 32));
        inputRightXmin = new QLineEdit(groupBox_6);
        inputRightXmin->setObjectName(QString::fromUtf8("inputRightXmin"));
        inputRightXmin->setGeometry(QRect(10, 70, 101, 32));

        retranslateUi(DialogRadioSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogRadioSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogRadioSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogRadioSettings);
    } // setupUi

    void retranslateUi(QDialog *DialogRadioSettings)
    {
        DialogRadioSettings->setWindowTitle(QApplication::translate("DialogRadioSettings", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("DialogRadioSettings", "Left X", nullptr));
        label->setText(QApplication::translate("DialogRadioSettings", "Min", nullptr));
        label_2->setText(QApplication::translate("DialogRadioSettings", "Max", nullptr));
        label_3->setText(QApplication::translate("DialogRadioSettings", "Middle", nullptr));
        groupBox_3->setTitle(QApplication::translate("DialogRadioSettings", "Left Y", nullptr));
        label_9->setText(QApplication::translate("DialogRadioSettings", "Max", nullptr));
        label_8->setText(QApplication::translate("DialogRadioSettings", "Min", nullptr));
        label_7->setText(QApplication::translate("DialogRadioSettings", "Middle", nullptr));
        groupBox_5->setTitle(QApplication::translate("DialogRadioSettings", "Right Y", nullptr));
        label_10->setText(QApplication::translate("DialogRadioSettings", "Middle", nullptr));
        label_11->setText(QApplication::translate("DialogRadioSettings", "Min", nullptr));
        label_12->setText(QApplication::translate("DialogRadioSettings", "Max", nullptr));
        groupBox_6->setTitle(QApplication::translate("DialogRadioSettings", "Right X", nullptr));
        label_6->setText(QApplication::translate("DialogRadioSettings", "Min", nullptr));
        label_4->setText(QApplication::translate("DialogRadioSettings", "Middle", nullptr));
        label_5->setText(QApplication::translate("DialogRadioSettings", "Max", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRadioSettings: public Ui_DialogRadioSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRADIOSETTINGS_H
