#include "dialogradiosettings.h"
#include "ui_dialogradiosettings.h"
#include "include.h"

DialogRadioSettings::DialogRadioSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogRadioSettings)
{
    ui->setupUi(this);

    QDialogButtonBox * buttonBox = this->findChild<QDialogButtonBox *>(QString("buttonBox"));
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(signalAccepted()));

    nlohmann::json data = Storage::getInstance().getData();

    QLineEdit * leftXmin = this->findChild<QLineEdit *>(QString("inputLeftXmin"));
    leftXmin->setText(QString::number((int) data["radio"]["leftX"]["min"].get<int>()));
    QLineEdit * leftXmiddle = this->findChild<QLineEdit *>(QString("inputLeftXmiddle"));
    leftXmiddle->setText(QString::number((int) data["radio"]["leftX"]["middle"].get<int>()));
    QLineEdit * leftXmax = this->findChild<QLineEdit *>(QString("inputLeftXmax"));
    leftXmax->setText(QString::number((int) data["radio"]["leftX"]["max"].get<int>()));

    QLineEdit * leftYmin = this->findChild<QLineEdit *>(QString("inputLeftYmin"));
    leftYmin->setText(QString::number((int) data["radio"]["leftY"]["min"].get<int>()));
    QLineEdit * leftYmiddle = this->findChild<QLineEdit *>(QString("inputLeftYmiddle"));
    leftYmiddle->setText(QString::number((int) data["radio"]["leftY"]["middle"].get<int>()));
    QLineEdit * leftYmax = this->findChild<QLineEdit *>(QString("inputLeftYmax"));
    leftYmax->setText(QString::number((int) data["radio"]["leftY"]["max"].get<int>()));

    QLineEdit * rightXmin = this->findChild<QLineEdit *>(QString("inputRightXmin"));
    rightXmin->setText(QString::number((int) data["radio"]["rightX"]["min"].get<int>()));
    QLineEdit * rightXmiddle = this->findChild<QLineEdit *>(QString("inputRightXmiddle"));
    rightXmiddle->setText(QString::number((int) data["radio"]["rightX"]["middle"].get<int>()));
    QLineEdit * rightXmax = this->findChild<QLineEdit *>(QString("inputRightXmax"));
    rightXmax->setText(QString::number((int) data["radio"]["rightX"]["max"].get<int>()));

    QLineEdit * rightYmin = this->findChild<QLineEdit *>(QString("inputRightYmin"));
    rightYmin->setText(QString::number((int) data["radio"]["rightY"]["min"].get<int>()));
    QLineEdit * rightYmiddle = this->findChild<QLineEdit *>(QString("inputRightYmiddle"));
    rightYmiddle->setText(QString::number((int) data["radio"]["rightY"]["middle"].get<int>()));
    QLineEdit * rightYmax = this->findChild<QLineEdit *>(QString("inputRightYmax"));
    rightYmax->setText(QString::number((int) data["radio"]["rightY"]["max"].get<int>()));

    leftXmin->setValidator( new QIntValidator(0, 2000, this));
    leftXmiddle->setValidator( new QIntValidator(0, 2000, this));
    leftXmax->setValidator( new QIntValidator(0, 2000, this));

    leftYmin->setValidator( new QIntValidator(0, 2000, this));
    leftYmiddle->setValidator( new QIntValidator(0, 2000, this));
    leftYmax->setValidator( new QIntValidator(0, 2000, this));

    rightXmin->setValidator( new QIntValidator(0, 2000, this));
    rightXmiddle->setValidator( new QIntValidator(0, 2000, this));
    rightXmax->setValidator( new QIntValidator(0, 2000, this));

    rightYmin->setValidator( new QIntValidator(0, 2000, this));
    rightYmiddle->setValidator( new QIntValidator(0, 2000, this));
    rightYmax->setValidator( new QIntValidator(0, 2000, this));
}

void DialogRadioSettings::signalAccepted() {
    QLineEdit * leftXmin = this->findChild<QLineEdit *>(QString("inputLeftXmin"));
    QLineEdit * leftXmiddle = this->findChild<QLineEdit *>(QString("inputLeftXmiddle"));
    QLineEdit * leftXmax = this->findChild<QLineEdit *>(QString("inputLeftXmax"));

    QLineEdit * leftYmin = this->findChild<QLineEdit *>(QString("inputLeftYmin"));
    QLineEdit * leftYmiddle = this->findChild<QLineEdit *>(QString("inputLeftYmiddle"));
    QLineEdit * leftYmax = this->findChild<QLineEdit *>(QString("inputLeftYmax"));

    QLineEdit * rightXmin = this->findChild<QLineEdit *>(QString("inputRightXmin"));
    QLineEdit * rightXmiddle = this->findChild<QLineEdit *>(QString("inputRightXmiddle"));
    QLineEdit * rightXmax = this->findChild<QLineEdit *>(QString("inputRightXmax"));

    QLineEdit * rightYmin = this->findChild<QLineEdit *>(QString("inputRightYmin"));
    QLineEdit * rightYmiddle = this->findChild<QLineEdit *>(QString("inputRightYmiddle"));
    QLineEdit * rightYmax = this->findChild<QLineEdit *>(QString("inputRightYmax"));

    nlohmann::json data = Storage::getInstance().getData();

    int leftXminValue = std::atoi(leftXmin->text().toStdString().c_str());
    int leftXmiddleValue = std::atoi(leftXmiddle->text().toStdString().c_str());
    int leftXmaxValue = std::atoi(leftXmax->text().toStdString().c_str());

    int leftYminValue = std::atoi(leftYmin->text().toStdString().c_str());
    int leftYmiddleValue = std::atoi(leftYmiddle->text().toStdString().c_str());
    int leftYmaxValue = std::atoi(leftYmax->text().toStdString().c_str());

    int rightXminValue = std::atoi(rightXmin->text().toStdString().c_str());
    int rightXmiddleValue = std::atoi(rightXmiddle->text().toStdString().c_str());
    int rightXmaxValue = std::atoi(rightXmax->text().toStdString().c_str());

    int rightYminValue = std::atoi(rightYmin->text().toStdString().c_str());
    int rightYmiddleValue = std::atoi(rightYmiddle->text().toStdString().c_str());
    int rightYmaxValue = std::atoi(rightYmax->text().toStdString().c_str());

    data["radio"]["leftX"]["min"] = leftXminValue;
    data["radio"]["leftX"]["middle"] = leftXmiddleValue;
    data["radio"]["leftX"]["max"] = leftXmaxValue;

    data["radio"]["leftY"]["min"] = leftYminValue;
    data["radio"]["leftY"]["middle"] = leftYmiddleValue;
    data["radio"]["leftY"]["max"] = leftYmaxValue;

    data["radio"]["rightX"]["min"] = rightXminValue;
    data["radio"]["rightX"]["middle"] = rightXmiddleValue;
    data["radio"]["rightX"]["max"] = rightXmaxValue;

    data["radio"]["rightY"]["min"] = rightYminValue;
    data["radio"]["rightY"]["middle"] = rightYmiddleValue;
    data["radio"]["rightY"]["max"] = rightYmaxValue;

    Storage::getInstance().setData(data)->save();
}

DialogRadioSettings::~DialogRadioSettings()
{
    delete ui;
}
