#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "include.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->drone = new Drone(this);

    connect(this->drone, SIGNAL(gamePadIsConnectedChanged(QString)), this, SLOT(setGamePadIsConnected(QString)));
    connect(this->drone, SIGNAL(radioValuesChanged(QString,QString,QString,QString)), this, SLOT(setRadioValues(QString,QString,QString,QString)));
    connect(this->drone, SIGNAL(arduinoStatusChanged(QString)), this, SLOT(setArduinoStatus(QString)));
    connect(this->drone, SIGNAL(modeChanged(Modes)), this, SLOT(setModes(Modes)));
    connect(this->drone, SIGNAL(recordFilesChanged(RecordsList)), this, SLOT(setListItems(RecordsList)));
    connect(this->drone, SIGNAL(startRecording(QString)), this, SLOT(setStartRecording(QString)));
    connect(this->drone, SIGNAL(cameraFrameChanged(MyMat)), this, SLOT(cameraFrameChanged(MyMat)));

    QListWidget * listWidget = this->centralWidget()->findChild<QListWidget *>(QString("listWidgetRecording"));
    connect(listWidget, SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)), this, SLOT(recordingCurrentItemChanged(QListWidgetItem*, QListWidgetItem*)));

    QLineEdit * input = this->centralWidget()->findChild<QLineEdit *>(QString("lineRecordingName"));
    connect(input, SIGNAL(textChanged(QString)), this, SLOT(onRecordingValueChanged(QString)));

    this->drone->start();
}

void MainWindow::setGamePadIsConnected(QString value) {
    QLabel * label = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadValue"));

    if (value.compare("true") == 0) {
        label->setText("connected");
        label->setDisabled(false);
    } else if (value.compare("false") == 0) {
        label->setText("connect...");
        label->setDisabled(true);
    }
}

void MainWindow::setRadioValues(QString leftX, QString leftY, QString rightX, QString rightY) {
    QLabel * labelLeftX = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadLeftX"));
    QLabel * labelLeftY = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadLeftY"));
    QLabel * labelRightX = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadRightX"));
    QLabel * labelRightY = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadRightY"));

    if (this->radioSending.compare("true") == 0) {
        labelLeftX->setText(leftX);
        labelLeftY->setText(leftY);
        labelRightX->setText(rightX);
        labelRightY->setText(rightY);
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

    if (modes.radioSending.compare("false") == 0) {
        labelLeftX->setText("-");
        labelLeftY->setText("-");
        labelRightX->setText("-");
        labelRightY->setText("-");
    }

    labelArmedValue->setText(modes.motorsArmed);

    if (modes.throttleModeActive.compare("true") == 0) {
        labelThrottleMode->setText("active");
    } else {
        labelThrottleMode->setText("not active");
    }

    if (modes.radioSending.compare("true") == 0) {
        labelSending->setText("sending");
    } else {
        labelSending->setText("not sending");
    }

    if (modes.recordingActive.compare("true") == 0) {
        labelRecordingActive->setText("recording");
    } else if (modes.playingActive.compare("true") == 0) {
        labelRecordingActive->setText("playing");
    } else {
        labelRecordingActive->setText("none");
    }
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
