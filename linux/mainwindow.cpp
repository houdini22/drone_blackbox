#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "include.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->drone = new Drone(this);

    connect(this->drone, SIGNAL(modeChanged(Modes)), this, SLOT(setModes(Modes)));
    connect(this->drone, SIGNAL(recordFilesChanged(RecordsList)), this, SLOT(setListItems(RecordsList)));
    connect(this->drone, SIGNAL(startRecording(QString)), this, SLOT(setStartRecording(QString)));
    connect(this->drone, SIGNAL(cameraFrameChanged(MyMat)), this, SLOT(cameraFrameChanged(MyMat)));
    connect(this->drone, SIGNAL(handPositionChanged(HandPosition)), this, SLOT(setHandPosition(HandPosition)));

    connect(this->drone, SIGNAL(signalSteeringsDataChanged(QHash<QString,SteeringData*>*)), this, SLOT(slotSteeringsDataChanged(QHash<QString,SteeringData*>*)));
    connect(this->drone, SIGNAL(signalSendingsDataChanged(QHash<QString,SendingData*>*)), this, SLOT(slotSendingsDataChanged(QHash<QString,SendingData*>*)));

    QListWidget * listWidget = this->centralWidget()->findChild<QListWidget *>(QString("listWidgetRecording"));
    connect(listWidget, SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)), this, SLOT(recordingCurrentItemChanged(QListWidgetItem*, QListWidgetItem*)));

    QLineEdit * input = this->centralWidget()->findChild<QLineEdit *>(QString("lineRecordingName"));
    connect(input, SIGNAL(textChanged(QString)), this, SLOT(onRecordingValueChanged(QString)));

    this->drone->start();
}

void MainWindow::slotSteeringsDataChanged(QHash<QString, SteeringData *> * data) {
    SteeringData * data2 = data->take("gamepad0");

    QLabel * label = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadValue"));

    if (data2->isConnected) {
        label->setText("connected");
        label->setDisabled(false);
    } else {
        label->setText("connect...");
        label->setDisabled(true);
    }

    QLabel * labelLeftX = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadLeftX"));
    QLabel * labelLeftY = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadLeftY"));
    QLabel * labelRightX = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadRightX"));
    QLabel * labelRightY = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadRightY"));

    labelLeftX->setText(QString::number(data2->buttonsPressed->leftX));
    labelLeftY->setText(QString::number(data2->buttonsPressed->leftY));
    labelRightX->setText(QString::number(data2->buttonsPressed->rightX));
    labelRightY->setText(QString::number(data2->buttonsPressed->rightY));
}


void MainWindow::slotSendingsDataChanged(QHash<QString, SendingData *> * data) {
    SendingData * data2 = data->take("arduino0");

    QLabel * label = this->centralWidget()->findChild<QLabel *>(QString("labelArduinoValue"));

    if (data2->mode == MODE_ARDUINO_DETECTED) {
        label->setDisabled(true);
        label->setText("connecting...");
    } else if (data2->mode == MODE_ARDUINO_CONNECTED) {
        label->setDisabled(false);
        label->setText("connected");
    } else if (data2->mode == MODE_ARDUINO_DISCONNECTED) {
        label->setDisabled(true);
        label->setText("connect...");
    }
}

void MainWindow::setModes(Modes modes) {
    this->radioSending = modes.radioSending;

    QLabel * labelLeftX = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadLeftX"));
    QLabel * labelLeftY = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadLeftY"));
    QLabel * labelRightX = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadRightX"));
    QLabel * labelRightY = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadRightY"));
    QLabel * labelArmedValue = this->centralWidget()->findChild<QLabel *>(QString("labelArmedValue"));
    QLabel * labelThrottleMode = this->centralWidget()->findChild<QLabel *>(QString("labelThrottleMode"));
    QLabel * labelSending = this->centralWidget()->findChild<QLabel *>(QString("labelSending"));
    QLabel * labelRecordingActive = this->centralWidget()->findChild<QLabel *>(QString("labelRecordingActive"));

    if (!modes.radioSending) {
        labelLeftX->setText("-");
        labelLeftY->setText("-");
        labelRightX->setText("-");
        labelRightY->setText("-");
    }

    labelArmedValue->setText(modes.motorsArmed ? QString("armed") : QString("not armed"));

    if (modes.throttleModeActive) {
        labelThrottleMode->setText("active");
    } else {
        labelThrottleMode->setText("not active");
    }

    if (modes.radioSending) {
        labelSending->setText("sending");
    } else {
        labelSending->setText("not sending");
    }

    /*
    if (modes.recordingActive) {
        labelRecordingActive->setText("recording");
    } else if (modes.playingActive) {
        labelRecordingActive->setText("playing");
    } else {
        labelRecordingActive->setText("none");
    }
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::cameraFrameChanged(MyMat mat) {
    const uchar * buffer = (const uchar *) mat.data;
    QImage image(buffer, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
    QLabel * label = this->centralWidget()->findChild<QLabel *>(QString("imageLabel"));
    label->setPixmap(QPixmap::fromImage(image));
}

void MainWindow::setHandPosition(HandPosition handPosition) {
    QLabel * labelThrottle = this->centralWidget()->findChild<QLabel *>(QString("labelThrottle"));
    QLabel * labelYaw = this->centralWidget()->findChild<QLabel *>(QString("labelYaw"));
    QLabel * labelRoll = this->centralWidget()->findChild<QLabel *>(QString("labelRoll"));
    QLabel * labelIsAvailable = this->centralWidget()->findChild<QLabel *>(QString("labelIsAvailable"));

    labelThrottle->setText(QString::number(handPosition.y));
    labelYaw->setText(QString::number(handPosition.roll));
    labelRoll->setText(QString::number(handPosition.z));
    labelIsAvailable->setText(handPosition.isAvailable ? "true" : "false");
}
