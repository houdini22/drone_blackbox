#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "include.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->drone = new Drone(this);

    connect(this->drone, SIGNAL(signalModesChanged(Modes*)), this, SLOT(slotModesChanged(Modes*)));
    connect(this->drone, SIGNAL(cameraFrameChanged(MyMat)), this, SLOT(cameraFrameChanged(MyMat)));
    connect(this->drone, SIGNAL(handPositionChanged(HandPosition)), this, SLOT(setHandPosition(HandPosition)));
    connect(this->drone, SIGNAL(signalSteeringDataChanged(SteeringData *)), this, SLOT(slotSteeringDataChanged(SteeringData *)));
    connect(this->drone, SIGNAL(signalSendingsDataChanged(QHash<QString,SendingData*>*)), this, SLOT(slotSendingsDataChanged(QHash<QString,SendingData*>*)));

    this->drone->start();

    QMenu * menu = this->menuBar()->findChild<QMenu*>(QString("menuSettings"));
    foreach (QAction *action, menu->actions()) {
        if (action->text().compare("&Radio") == 0) {
            connect(action, SIGNAL(triggered(bool)), this, SLOT(handleRadioSettingsTriggered(bool)));
            break;
        }
    }

    this->slotRefreshLabels();

    QRect rec = QApplication::desktop()->screenGeometry();
    this->setFixedSize(rec.width(), rec.height() - 100);

    MouseSteering * mouseSteering = this->centralWidget()->findChild<MouseSteering *>(QString("mouseSteering"));
    mouseSteering->setDrone(this->drone);

    QRadioButton * radio = this->centralWidget()->findChild<QRadioButton *>(QString("radioMouseSteering"));
    connect(radio, SIGNAL(toggled(bool)), this, SLOT(slotRadioToggled(bool)));
}

void MainWindow::slotRadioToggled(bool active) {
    Modes * modes = this->drone->getModes();
    if (modes->mouseSteering) {
        modes->radioSending = active;
        this->drone->setModes(modes);
    }
}

void MainWindow::handleRadioSettingsTriggered(bool active) {
    this->dialogRadioSettings = new DialogRadioSettings(this); // Be sure to destroy your window somewhere
    this->dialogRadioSettings->show();
    this->dialogRadioSettings->setAttribute(Qt::WA_DeleteOnClose);
    connect(this->dialogRadioSettings, SIGNAL(destroyed(QObject*)), this, SLOT(slotRefreshLabels()));
}

void MainWindow::slotRefreshLabels() {
    nlohmann::json data = Storage::getInstance().getData();

    QLabel * leftXmin = this->findChild<QLabel *>(QString("labelLeftXmin"));
    leftXmin->setText(QString::number((int) data["radio"]["leftX"]["min"].get<int>()));
    QLabel * leftXmiddle = this->findChild<QLabel *>(QString("labelLeftXmiddle"));
    leftXmiddle->setText(QString::number((int) data["radio"]["leftX"]["middle"].get<int>()));
    QLabel * leftXmax = this->findChild<QLabel *>(QString("labelLeftXmax"));
    leftXmax->setText(QString::number((int) data["radio"]["leftX"]["max"].get<int>()));

    QLabel * leftYmin = this->findChild<QLabel *>(QString("labelLeftYmin"));
    leftYmin->setText(QString::number((int) data["radio"]["leftY"]["min"].get<int>()));
    QLabel * leftYmiddle = this->findChild<QLabel *>(QString("labelLeftYmiddle"));
    leftYmiddle->setText(QString::number((int) data["radio"]["leftY"]["middle"].get<int>()));
    QLabel * leftYmax = this->findChild<QLabel *>(QString("labelLeftYmax"));
    leftYmax->setText(QString::number((int) data["radio"]["leftY"]["max"].get<int>()));

    QLabel * rightXmin = this->findChild<QLabel *>(QString("labelRightXmin"));
    rightXmin->setText(QString::number((int) data["radio"]["rightX"]["min"].get<int>()));
    QLabel * rightXmiddle = this->findChild<QLabel *>(QString("labelRightXmiddle"));
    rightXmiddle->setText(QString::number((int) data["radio"]["rightX"]["middle"].get<int>()));
    QLabel * rightXmax = this->findChild<QLabel *>(QString("labelRightXmax"));
    rightXmax->setText(QString::number((int) data["radio"]["rightX"]["max"].get<int>()));

    QLabel * rightYmin = this->findChild<QLabel *>(QString("labelRightYmin"));
    rightYmin->setText(QString::number((int) data["radio"]["rightY"]["min"].get<int>()));
    QLabel * rightYmiddle = this->findChild<QLabel *>(QString("labelRightYmiddle"));
    rightYmiddle->setText(QString::number((int) data["radio"]["rightY"]["middle"].get<int>()));
    QLabel * rightYmax = this->findChild<QLabel *>(QString("labelRightYmax"));
    rightYmax->setText(QString::number((int) data["radio"]["rightY"]["max"].get<int>()));
}

void MainWindow::slotSteeringDataChanged(SteeringData * data) {
    if (data->name.compare("gamepad0") == 0) {
        QLabel * labelGamePad = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadValue"));

        if (data->isConnected) {
            labelGamePad->setText("connected");
            labelGamePad->setDisabled(false);
        } else {
            labelGamePad->setText("connect...");
            labelGamePad->setDisabled(true);
        }
    } else {
        QLabel * labelLeapMotion = this->centralWidget()->findChild<QLabel *>(QString("labelLeapMotionValue"));

        if (data->isConnected) {
            labelLeapMotion->setText("connected");
            labelLeapMotion->setDisabled(false);
        } else {
            labelLeapMotion->setText("connect...");
            labelLeapMotion->setDisabled(true);
        }
    }
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

void MainWindow::slotModesChanged(Modes * modes) {
    QLabel * labelLeftX = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadLeftX"));
    QLabel * labelLeftY = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadLeftY"));
    QLabel * labelRightX = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadRightX"));
    QLabel * labelRightY = this->centralWidget()->findChild<QLabel *>(QString("labelGamePadRightY"));
    QLabel * labelArmedValue = this->centralWidget()->findChild<QLabel *>(QString("labelArmedValue"));
    QLabel * labelThrottleMode = this->centralWidget()->findChild<QLabel *>(QString("labelThrottleMode"));
    QLabel * labelSending = this->centralWidget()->findChild<QLabel *>(QString("labelSending"));

    if (!modes->radioSending) {
        labelLeftX->setText("-");
        labelLeftY->setText("-");
        labelRightX->setText("-");
        labelRightY->setText("-");
    } else {
        labelLeftX->setText(QString::number(modes->leftX));
        labelLeftY->setText(QString::number(modes->leftY));
        labelRightX->setText(QString::number(modes->rightX));
        labelRightY->setText(QString::number(modes->rightY));
    }

    labelArmedValue->setText(modes->motorsArmed ? QString("armed") : QString("not armed"));

    if (modes->throttleModeActive) {
        labelThrottleMode->setText("active");
    } else {
        labelThrottleMode->setText("not active");
    }

    if (modes->radioSending) {
        labelSending->setText("sending");
    } else {
        labelSending->setText("not sending");
    }

    QLabel * labelMouseSteering = this->centralWidget()->findChild<QLabel *>(QString("labelMouseSteering"));

    if (modes->mouseSteering) {
        labelMouseSteering->setText("active");
        labelMouseSteering->setDisabled(false);
    } else {
        labelMouseSteering->setText("not active");
        labelMouseSteering->setDisabled(true);
    }
}

MainWindow::~MainWindow() {
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

Drone * MainWindow::getDrone() {
    return this->drone;
}
