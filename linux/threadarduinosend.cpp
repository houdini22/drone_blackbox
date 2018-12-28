#include "QThread"
#include "include.h"

ThreadArduinoSend::ThreadArduinoSend(Drone * drone): QThread()
{
    this->drone = drone;
}

void ThreadArduinoSend::send(QString buffer) {
    try {
        this->drone->getArduino()->Write(buffer.toStdString());
    } catch(std::runtime_error ex) {}
}

int ThreadArduinoSend::axisValueFromDouble(double value) {
    return (int) ((((double) MAX_SEND_VALUE_FORCE + (double) MIN_SEND_VALUE_FORCE) / 2.0) +
                           (value * ((double) MAX_SEND_VALUE_FORCE - (double) MIN_SEND_VALUE_FORCE) / 2.0));
}

QString ThreadArduinoSend::createAxisBuffer(double leftX, double leftY, double rightX, double rightY) {
    return this->createAxisBuffer(
                this->axisValueFromDouble(leftX),
                this->axisValueFromDouble(leftY),
                this->axisValueFromDouble(rightX),
                this->axisValueFromDouble(rightY));
}

QString ThreadArduinoSend::createAxisBuffer(int leftX, int leftY, int rightX, int rightY) {
    QString buffer = "";

    buffer.append("^");
    buffer.append(QString::number(leftX));
    buffer.append(" ");
    buffer.append(QString::number(leftY));
    buffer.append(" ");
    buffer.append(QString::number(rightX));
    buffer.append(" ");
    buffer.append(QString::number(rightY));
    buffer.append("$");

    return buffer;
}

void ThreadArduinoSend::run() {
    bool startMode = false;
    int sendingStart = 0;
    bool armingMode = false;
    int sendingArm = 0;
    bool throttleMode = false;
    int sendingThrottle = 0;
    double leftY = 0.0;
    int sendingLeftY = 0;
    int sendingRecording = 0;
    bool recordingMode = false;
    int sendingDpadDown = 0;
    int sendingDpadUp = 0;
    int sendingB = 0;
    bool modePlaying = false;

    while (1) {
        QThread::msleep(40);

        /*
        HandPosition handPosition = this->drone->getHandPosition();

        if (!handPosition.isAvailable) {
            if (this->drone->isArduinoDetected() && this->drone->isArduinoConnected()) {
                ButtonsPressed buttons = this->drone->getButtons();

                // send
                if (sendingArm == 0 && sendingThrottle == 0 && sendingStart == 0 && sendingRecording == 0 && sendingDpadDown == 0 && sendingDpadUp == 0 && sendingB == 0) {
                    if (modePlaying) {
                        size_t currentPlay = this->drone->getDatabase()->getCurrentPlay();
                        bool canPlay = currentPlay != -1;

                        if (!canPlay) {
                            modePlaying = !modePlaying;
                            emit playingModeChanged("false");

                            continue;
                        }

                        PlayFrame frame = this->drone->getDatabase()->getFrame(currentPlay);

                        this->setRadioValues(frame["leftX"].toInt(), frame["leftY"].toInt(), frame["rightX"].toInt(), frame["rightY"].toInt());
                        this->send(this->createAxisBuffer(frame["leftX"].toInt(), frame["leftY"].toInt(), frame["rightX"].toInt(), frame["rightY"].toInt()));
                    } else {
                        if (throttleMode) {
                            if (this->drone->getCanStartRecording()) {
                                this->drone->getDatabase()->record(buttons.leftX, MIN_SEND_VALUE + (MAX_SEND_VALUE - MIN_SEND_VALUE) * leftY, buttons.rightX, buttons.rightY);
                            }
                            this->setRadioValues(buttons.leftX, MIN_SEND_VALUE + (MAX_SEND_VALUE - MIN_SEND_VALUE) * leftY, buttons.rightX, buttons.rightY);
                            this->send(this->createAxisBuffer(buttons.leftX, (int) (MIN_SEND_VALUE + (MAX_SEND_VALUE - MIN_SEND_VALUE) * leftY), buttons.rightX, buttons.rightY));
                        } else {
                            if (this->drone->getCanStartRecording()) {
                                this->drone->getDatabase()->record(buttons.leftX, buttons.leftY, buttons.rightX, buttons.rightY);
                            }
                            this->setRadioValues(buttons.leftX, buttons.leftY, buttons.rightX, buttons.rightY);
                            this->send(this->createAxisBuffer(buttons.leftX, buttons.leftY, buttons.rightX, buttons.rightY));
                        }
                    }
                }

                // listen
                if (buttons.y) {
                    sendingRecording = 6;

                    continue;
                }

                if (sendingArm == 0 && sendingThrottle == 0 && sendingStart == 0 && sendingLeftY == 0 && sendingRecording == 0 && sendingDpadDown == 0 && sendingDpadUp == 0 && sendingB == 0) { // listening buttons
                    if (buttons.a) { // toggle Throttle mode
                        sendingThrottle = 13;
                        throttleMode = !throttleMode;
                        this->setThrottleMode(throttleMode);

                        continue;
                    }

                    if (buttons.b) {
                        sendingB = 13;

                        continue;
                    }

                    if (buttons.start && !armingMode) { // toggle sending
                        if (startMode) {
                            sendingStart = 26; // 26 * 40 ms

                            this->send("f"); // off
                            this->setRadioSending(false);
                        } else {
                            sendingStart = 26; // 26 * 40 ms

                            this->send("n"); // on
                            this->setRadioSending(true);
                        }

                        continue;
                    }

                    if (startMode) { // if toggled sendinf true
                        if (buttons.arming) { // if arming
                            if (!armingMode) {
                                sendingArm = 28; // 28 * 40 ms

                                emit motorsArmedChanged(true);
                            } else {
                                if (startMode) {
                                    sendingArm = 28; // 28 * 40 ms

                                    emit motorsArmedChanged(false);
                                }
                            }

                            continue;
                        }
                    }

                    if (throttleMode) { // a on
                        if (buttons.leftShoulder) {
                            sendingLeftY = 6;

                            leftY -= 0.025;
                            if (leftY < 0.0) {
                                leftY = 0.0;
                            }
                        } else if (buttons.rightShoulder) {
                            sendingLeftY = 6;

                            leftY += 0.025;
                            if (leftY > 1.0) {
                                leftY = 1.0;
                            }
                        }
                        continue;
                    }
                }

                if (sendingStart > 0) {
                    sendingStart--;
                    if (sendingStart == 0) {
                        startMode = !startMode;
                    }

                    continue;
                }

                if (sendingArm > 0) {
                    if (!armingMode) {
                        if (this->drone->getCanStartRecording()) {
                            this->drone->getDatabase()->record(this->axisValueFromDouble(1), this->axisValueFromDouble(-1), this->axisValueFromDouble(0), this->axisValueFromDouble(0));
                        }
                        this->setRadioValues(this->axisValueFromDouble(1), this->axisValueFromDouble(-1), this->axisValueFromDouble(0), this->axisValueFromDouble(0));
                        this->send(this->createAxisBuffer(this->axisValueFromDouble(1), this->axisValueFromDouble(-1), this->axisValueFromDouble(0), this->axisValueFromDouble(0)));
                    } else {
                        if (this->drone->getCanStartRecording()) {
                            this->drone->getDatabase()->record(this->axisValueFromDouble(-1), this->axisValueFromDouble(-1), this->axisValueFromDouble(0), this->axisValueFromDouble(0));
                        }
                        this->setRadioValues(this->axisValueFromDouble(-1), this->axisValueFromDouble(-1), this->axisValueFromDouble(0), this->axisValueFromDouble(0));
                        this->send(this->createAxisBuffer(this->axisValueFromDouble(-1), this->axisValueFromDouble(-1), this->axisValueFromDouble(0), this->axisValueFromDouble(0)));

                    }

                    sendingArm--;
                    if (sendingArm == 0) {
                        if (!armingMode) {
                            emit motorsArmedChanged(true);
                        } else {
                            emit motorsArmedChanged(false);
                        }
                        armingMode = !armingMode;
                    }

                    continue;
                }

                if (sendingThrottle > 0) {
                    sendingThrottle--;

                    continue;
                }

                if (sendingLeftY > 0) {
                    sendingLeftY--;

                    continue;
                }

                if (sendingRecording > 0) {
                    sendingRecording--;

                    if (sendingRecording == 0) {
                        recordingMode = !recordingMode;

                        emit recordingModeChanged(recordingMode);

                    }

                    continue;
                }

                if (sendingB > 0) {
                    sendingB--;

                    if (sendingB == 0) {
                        modePlaying = !modePlaying;

                        if (modePlaying) {
                            this->drone->getDatabase()->openPlay();
                            emit playingModeChanged(true);
                        } else {
                            emit playingModeChanged(false);
                        }
                    }

                    continue;
                }
            }
        }
        else if (this->drone->isArduinoDetected() && this->drone->isArduinoConnected()) {
            if (sendingArm == 0 && sendingStart == 0) {
                if (handPosition.fist && !startMode) { // toggle sending
                    if (startMode) {
                        sendingStart = 26; // 26 * 40 ms

                        this->send("f"); // off
                        this->setRadioSending(false);
                    } else {
                        sendingStart = 26; // 26 * 40 ms

                        this->send("n"); // on
                        this->setRadioSending(true);
                    }

                    continue;
                } else if (handPosition.fist && startMode) {
                    if (!armingMode) {
                        sendingArm = 28; // 28 * 40 ms

                        emit motorsArmedChanged(true);
                    } else if (startMode) {
                        sendingArm = 28; // 28 * 40 ms

                        emit motorsArmedChanged(false);
                    }

                    continue;
                }
            }
            if (sendingArm > 0) {
                if (!armingMode) {
                    this->setRadioValues(this->axisValueFromDouble(1), this->axisValueFromDouble(-1), this->axisValueFromDouble(0), this->axisValueFromDouble(0));
                    this->send(this->createAxisBuffer(this->axisValueFromDouble(1), this->axisValueFromDouble(-1), this->axisValueFromDouble(0), this->axisValueFromDouble(0)));
                } else {
                    this->setRadioValues(this->axisValueFromDouble(-1), this->axisValueFromDouble(-1), this->axisValueFromDouble(0), this->axisValueFromDouble(0));
                    this->send(this->createAxisBuffer(this->axisValueFromDouble(-1), this->axisValueFromDouble(-1), this->axisValueFromDouble(0), this->axisValueFromDouble(0)));
                }

                sendingArm--;
                if (sendingArm == 0) {
                    if (!armingMode) {
                        emit motorsArmedChanged(true);
                    } else {
                        emit motorsArmedChanged(false);
                    }
                    armingMode = !armingMode;
                }

                continue;
            }
            if (sendingStart > 0) {
                sendingStart--;
                if (sendingStart == 0) {
                    startMode = !startMode;
                }

                continue;
            }

            this->setRadioValues(this->axisValueFromDouble(0), this->axisValueFromDouble(handPosition.y), this->axisValueFromDouble(handPosition.x), this->axisValueFromDouble(handPosition.z));
            this->send(this->createAxisBuffer(this->axisValueFromDouble(0.0), this->axisValueFromDouble(handPosition.y), this->axisValueFromDouble(handPosition.x), this->axisValueFromDouble(handPosition.z)));
        }
        */
    }
}


void ThreadArduinoSend::setRadioSending(bool value) {
    if (this->radioSending != value) {
        this->radioSending = value;
        emit radioSendingChanged(value);
    }
}

void ThreadArduinoSend::setMotorsArmed(bool value) {
    if (this->motorsArmed != value) {
        this->motorsArmed = value;
        emit motorsArmedChanged(value);
    }
}

void ThreadArduinoSend::setThrottleMode(bool value) {
    if (this->throttleModeActive != value) {
        this->throttleModeActive = value;
        emit throttleModeChanged(value);
    }
}

void ThreadArduinoSend::setRadioValues(double leftX, double leftY, double rightX, double rightY) {
    bool update = false;

    if (this->leftX != leftX) {
        this->leftX = leftX;
        update = true;
    }

    if (this->leftY != leftY) {
        this->leftY = leftY;
        update = true;
    }

    if (this->rightX != rightX) {
        this->rightX = rightX;
        update = true;
    }

    if (this->rightY != rightY) {
        this->rightY = rightY;
        update = true;
    }

    if (update) {
        emit radioValuesChanged(leftX, leftY, rightX, rightY);
    }
}
