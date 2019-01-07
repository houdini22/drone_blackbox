#include "dialogarmingmodesettings.h"
#include "ui_dialogarmingmodesettings.h"
#include "include.h"

DialogArmingModeSettings::DialogArmingModeSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogArmingModeSettings)
{
    ui->setupUi(this);

    QDialogButtonBox * buttonBox = this->findChild<QDialogButtonBox *>(QString("buttonBox"));
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(signalAccepted()));

    nlohmann::json data = Storage::getInstance().getData();

    QLineEdit * leftXmiddle = this->findChild<QLineEdit *>(QString("inputLeftXmiddle"));
    leftXmiddle->setText(QString::number((int) data["arming"]["leftX"].get<int>()));

    QLineEdit * leftYmiddle = this->findChild<QLineEdit *>(QString("inputLeftYmiddle"));
    leftYmiddle->setText(QString::number((int) data["arming"]["leftY"].get<int>()));

    QLineEdit * rightXmiddle = this->findChild<QLineEdit *>(QString("inputRightXmiddle"));
    rightXmiddle->setText(QString::number((int) data["arming"]["rightX"].get<int>()));

    QLineEdit * rightYmiddle = this->findChild<QLineEdit *>(QString("inputRightYmiddle"));
    rightYmiddle->setText(QString::number((int) data["arming"]["rightY"].get<int>()));

    leftXmiddle->setValidator( new QIntValidator(0, 2000, this));
    leftYmiddle->setValidator( new QIntValidator(0, 2000, this));
    rightXmiddle->setValidator( new QIntValidator(0, 2000, this));
    rightYmiddle->setValidator( new QIntValidator(0, 2000, this));
}

void DialogArmingModeSettings::signalAccepted() {
    QLineEdit * leftXmiddle = this->findChild<QLineEdit *>(QString("inputLeftXmiddle"));
    QLineEdit * leftYmiddle = this->findChild<QLineEdit *>(QString("inputLeftYmiddle"));
    QLineEdit * rightXmiddle = this->findChild<QLineEdit *>(QString("inputRightXmiddle"));
    QLineEdit * rightYmiddle = this->findChild<QLineEdit *>(QString("inputRightYmiddle"));

    nlohmann::json data = Storage::getInstance().getData();

    int leftXmiddleValue = std::atoi(leftXmiddle->text().toStdString().c_str());
    int leftYmiddleValue = std::atoi(leftYmiddle->text().toStdString().c_str());
    int rightXmiddleValue = std::atoi(rightXmiddle->text().toStdString().c_str());
    int rightYmiddleValue = std::atoi(rightYmiddle->text().toStdString().c_str());

    data["arming"]["leftX"] = leftXmiddleValue;
    data["arming"]["leftY"] = leftYmiddleValue;
    data["arming"]["rightX"] = rightXmiddleValue;
    data["arming"]["rightY"] = rightYmiddleValue;

    Storage::getInstance().setData(data)->save();
}

DialogArmingModeSettings::~DialogArmingModeSettings() {
    delete ui;
}
