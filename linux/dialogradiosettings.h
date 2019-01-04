#ifndef DIALOGRADIOSETTINGS_H
#define DIALOGRADIOSETTINGS_H

#include <QDialog>

namespace Ui {
class DialogRadioSettings;
}

class DialogRadioSettings : public QDialog
{
    Q_OBJECT

public:
    explicit DialogRadioSettings(QWidget *parent = 0);
    ~DialogRadioSettings();
private slots:
    void signalAccepted();
private:
    Ui::DialogRadioSettings *ui;
};

#endif // DIALOGRADIOSETTINGS_H
