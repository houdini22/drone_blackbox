#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "include.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->drone = new Drone(this);

    connect(this->drone, SIGNAL(radioValuesChanged(int,int,int,int)), this, SLOT(setRadioValues(int,int,int,int)));
    connect(this->drone, SIGNAL(arduinoStatusChanged(QString)), this, SLOT(setArduinoStatus(QString)));
    connect(this->drone, SIGNAL(modeChanged(Modes)), this, SLOT(setModes(Modes)));
    connect(this->drone, SIGNAL(recordFilesChanged(RecordsList)), this, SLOT(setListItems(RecordsList)));
    connect(this->drone, SIGNAL(startRecording(QString)), this, SLOT(setStartRecording(QString)));
    connect(this->drone, SIGNAL(cameraFrameChanged(MyMat)), this, SLOT(cameraFrameChanged(MyMat)));
    connect(this->drone, SIGNAL(handPositionChanged(HandPosition)), this, SLOT(setHandPosition(HandPosition)));

    connect(this->drone, SIGNAL(signalSteeringsDataChanged(QHash<QString,SteeringData*>*)), this, SLOT(slotSteeringsDataChanged(QHash<QString,SteeringData*>*)));

    QListWidget * listWidget = this->centralWidget()->findChild<QListWidget *>(QString("listWidgetRecording"));
    connect(listWidget, SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)), this, SLOT(recordingCurrentItemChanged(QListWidgetItem*, QListWidgetItem*)));

    QLineEdit * input = this->centralWidget()->findChild<QLineEdit *>(QString("lineRecordingName"));
    connect(input, SIGNAL(textChanged(QString)), this, SLOT(onRecordingValueChanged(QString)));

    this->drone->start();
}

void MainWindow::slotSteeringsDataChanged(QHash<QString, SteeringData *> * data) {
    QLabel * label = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadValue"));

    if (data->take("gamepad0")->isConnected) {
        label->setText("connected");
        label->setDisabled(false);
    } else {
        label->setText("connect...");
        label->setDisabled(true);
    }
}

void MainWindow::setRadioValues(int leftX, int leftY, int rightX, int rightY) {
    QLabel * labelLeftX = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadLeftX"));
    QLabel * labelLeftY = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadLeftY"));
    QLabel * labelRightX = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadRightX"));
    QLabel * labelRightY = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadRightY"));

    if (this->radioSending) {
        labelLeftX->setText(QString::number(leftX));
        labelLeftY->setText(QString::number(leftY));
        labelRightX->setText(QString::number(rightX));
        labelRightY->setText(QString::number(rightY));
    }
}

void MainWindow::setArduinoStatus(QString value) {
    QLabel * label = this->centralWidget()->findChild<QLabel *>(QString("labelArduinoValue"));

    if (value.compare("connect") == 0) {
        label->setDisabled(true);
    } else {
        label->setDisabled(false);
    }

    label->setText(value);
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

void MainWindow::on_recordingAddButton_clicked() {

}

void MainWindow::on_recordingDeleteButton_clicked() {
    QListWidget * listWidget = this->centralWidget()->findChild<QListWidget *>(QString("listWidgetRecording"));
    QListWidgetItem * item = listWidget->currentItem();

    if (item != nullptr) {
        this->drone->getDatabase()->remove(item->text());
        listWidget->takeItem(listWidget->row(listWidget->currentItem()));
    }
}

void MainWindow::recordingCurrentItemChanged(QListWidgetItem * item, QListWidgetItem * prev) {
    QLineEdit * input = this->centralWidget()->findChild<QLineEdit *>(QString("lineRecordingName"));

    if (item != nullptr) {
        input->setText(item->text());
        this->drone->getDatabase()->setActivePlay(item->text());
    } else {
        input->setText("");
    }

    this->currentItem = item;
}

void MainWindow::onRecordingValueChanged(QString value) {
    QListWidget * listWidget = this->centralWidget()->findChild<QListWidget *>(QString("listWidgetRecording"));
    QListWidgetItem * item = listWidget->currentItem();

    if (this->currentItem != item) {
        if (item != nullptr) {
            item->setText(value);
        }
    } else {
        if (item != nullptr) {
            this->drone->getDatabase()->move(item->text(), value);
            item->setText(value);
        }
    }
}

void MainWindow::setListItems(RecordsList records) {
    QListWidget * listWidget = this->centralWidget()->findChild<QListWidget *>(QString("listWidgetRecording"));

    for (RecordsList::iterator it = records.begin(); it != records.end(); ++it) {
        QListWidgetItem * item = new QListWidgetItem(tr((*it).toStdString().c_str()), listWidget);
        listWidget->addItem(item);
    }
}

void MainWindow::setStartRecording(QString name) {
    QListWidget * listWidget = this->centralWidget()->findChild<QListWidget *>(QString("listWidgetRecording"));
    QListWidgetItem * item = new QListWidgetItem(tr(name.toStdString().c_str()), listWidget);

    listWidget->addItem(item);
    listWidget->setCurrentItem(item);

    this->drone->getDatabase()->setActivePlay(item->text());
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
