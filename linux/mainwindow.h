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
};

#endif // MAINWINDOW_H
