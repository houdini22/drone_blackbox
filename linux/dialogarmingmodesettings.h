#ifndef DIALOGARMINGMODESETTINGS_H
#define DIALOGARMINGMODESETTINGS_H

#include <QDialog>

namespace Ui {
class DialogArmingModeSettings;
}

class DialogArmingModeSettings : public QDialog
{
    Q_OBJECT
public:
    explicit DialogArmingModeSettings(QWidget *parent = 0);
    ~DialogArmingModeSettings();
private:
    Ui::DialogArmingModeSettings *ui;
private slots:
    void signalAccepted();
};

#endif // DIALOGARMINGMODESETTINGS_H
