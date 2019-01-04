#include "dialogradiosettings.h"
#include "ui_dialogradiosettings.h"

DialogRadioSettings::DialogRadioSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogRadioSettings)
{
    ui->setupUi(this);
}

DialogRadioSettings::~DialogRadioSettings()
{
    delete ui;
}
