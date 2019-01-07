#include "dialogdisarmingmodesettings.h"
#include "ui_dialogdisarmingmodesettings.h"
#include "include.h"

DialogDisarmingModeSettings::DialogDisarmingModeSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDisarmingModeSettings) {
  ui->setupUi(this);

  QDialogButtonBox * buttonBox = this->findChild<QDialogButtonBox *>(QString("buttonBox"));
  connect(buttonBox, SIGNAL(accepted()), this, SLOT(signalAccepted()));

  nlohmann::json data = Storage::getInstance().getData();

  QLineEdit * leftXmiddle = this->findChild<QLineEdit *>(QString("inputLeftXmiddle"));
  leftXmiddle->setText(QString::number((int) data["disarming"]["leftX"].get<int>()));

  QLineEdit * leftYmiddle = this->findChild<QLineEdit *>(QString("inputLeftYmiddle"));
  leftYmiddle->setText(QString::number((int) data["disarming"]["leftY"].get<int>()));

  QLineEdit * rightXmiddle = this->findChild<QLineEdit *>(QString("inputRightXmiddle"));
  rightXmiddle->setText(QString::number((int) data["disarming"]["rightX"].get<int>()));

  QLineEdit * rightYmiddle = this->findChild<QLineEdit *>(QString("inputRightYmiddle"));
  rightYmiddle->setText(QString::number((int) data["disarming"]["rightY"].get<int>()));

  leftXmiddle->setValidator( new QIntValidator(0, 2000, this));
  leftYmiddle->setValidator( new QIntValidator(0, 2000, this));
  rightXmiddle->setValidator( new QIntValidator(0, 2000, this));
  rightYmiddle->setValidator( new QIntValidator(0, 2000, this));
}

void DialogDisarmingModeSettings::signalAccepted() {
  QLineEdit * leftXmiddle = this->findChild<QLineEdit *>(QString("inputLeftXmiddle"));
  QLineEdit * leftYmiddle = this->findChild<QLineEdit *>(QString("inputLeftYmiddle"));
  QLineEdit * rightXmiddle = this->findChild<QLineEdit *>(QString("inputRightXmiddle"));
  QLineEdit * rightYmiddle = this->findChild<QLineEdit *>(QString("inputRightYmiddle"));

  nlohmann::json data = Storage::getInstance().getData();

  int leftXmiddleValue = std::atoi(leftXmiddle->text().toStdString().c_str());
  int leftYmiddleValue = std::atoi(leftYmiddle->text().toStdString().c_str());
  int rightXmiddleValue = std::atoi(rightXmiddle->text().toStdString().c_str());
  int rightYmiddleValue = std::atoi(rightYmiddle->text().toStdString().c_str());

  data["disarming"]["leftX"] = leftXmiddleValue;
  data["disarming"]["leftY"] = leftYmiddleValue;
  data["disarming"]["rightX"] = rightXmiddleValue;
  data["disarming"]["rightY"] = rightYmiddleValue;

  Storage::getInstance().setData(data)->save();
}

DialogDisarmingModeSettings::~DialogDisarmingModeSettings() {
  delete ui;
}
