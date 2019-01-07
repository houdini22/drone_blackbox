#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "include.h"

using namespace cv;

class Drone;
typedef std::vector<QString> RecordsList;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget * parent = 0);
    ~MainWindow();
    Drone * getDrone();
private:
    Ui::MainWindow *ui;
    Drone * drone;
    bool radioSending = false;
    QListWidgetItem * currentItem;
    DialogRadioSettings * dialogRadioSettings = nullptr;
    DialogArmingModeSettings * dialogArmingModeSettings = nullptr;
    DialogDisarmingModeSettings * dialogDisarmingModeSettings = nullptr;
    DialogThrottleModeSettings * dialogThrottleModeSettings = nullptr;
    void openSettingsArmingMotors();
    void openSettingsDisarmingMotors();
    void openSettingsRadio();
    void openSettingsThrottleMode();
protected:
    void moveEvent(QMoveEvent* ev) {
        move(QPoint(0, 0));
    }
public slots:
    void slotModesChanged(Modes * modes);
    void cameraFrameChanged(MyMat);
    void setHandPosition(HandPosition);
    void slotSteeringDataChanged(SteeringData *);
    void slotSendingsDataChanged(QHash<QString,SendingData*>*);
    void handleRadioSettingsTriggered(bool);
    void slotRefreshLabels();
    void slotRadioMouseSendingToggled(bool);
    void slotRadioMouseSteeringEnabledToggled(bool);
    void slotRadioGamePad1Enable(bool);
    void slotRadioGamePad2Enable(bool);
    void handleArmingModeSettingsTriggered(bool);
    void handleDisarmingModeSettingsTriggered(bool);
    void slotOnClickButtonSettingsArmed();
    void slotOnClickButtonSettingsDisarmed();
    void slotOnClickButtonSettingsRadio();
    void slotOnClickButtonSettingsThrottleMode();
};

#endif // MAINWINDOW_H
