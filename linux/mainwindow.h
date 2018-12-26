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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    Drone * drone;
    bool radioSending = false;
    QListWidgetItem * currentItem;
public slots:
    void setGamePadIsConnected(bool value);
    void setRadioValues(int leftX, int leftY, int rightX, int rightY);
    void setArduinoStatus(QString value);
    void setModes(Modes modes);
    void cameraFrameChanged(MyMat);
    void setHandPosition(HandPosition);
private slots:
    void on_recordingAddButton_clicked();
    void on_recordingDeleteButton_clicked();
    void recordingCurrentItemChanged(QListWidgetItem * item, QListWidgetItem * prev);
    void onRecordingValueChanged(QString value);
    void setListItems(RecordsList records);
    void setStartRecording(QString name);
};

#endif // MAINWINDOW_H
