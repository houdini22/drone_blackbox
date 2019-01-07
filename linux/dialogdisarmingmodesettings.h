#ifndef DIALOGDISARMINGMODESETTINGS_H
#define DIALOGDISARMINGMODESETTINGS_H

#include <QDialog>

namespace Ui {
class DialogDisarmingModeSettings;
}

class DialogDisarmingModeSettings : public QDialog
{
    Q_OBJECT
public:
    explicit DialogDisarmingModeSettings(QWidget *parent = 0);
    ~DialogDisarmingModeSettings();
private:
    Ui::DialogDisarmingModeSettings *ui;
private slots:
    void signalAccepted();
};

#endif // DIALOGDISARMINGMODESETTINGS_H
