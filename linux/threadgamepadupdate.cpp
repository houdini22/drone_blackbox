#include "QThread"
#include "include.h"

ThreadGamepadUpdate::ThreadGamepadUpdate(SteeringRegistry * registry): QThread() {
    this->registry = registry;

    connect(this->registry, SIGNAL(signalSteeringDataChanged(SteeringData *)), this, SLOT(slotSteeringDataChanged(SteeringData *)));
}

void ThreadGamepadUpdate::run() {
    while (1) {
        QThread::msleep(40);
        SteeringData * data = this->steeringData;

        if (data->isConnected) {
            GamepadUpdate();

            double _leftX = GamepadStickLength(GAMEPAD_0, STICK_LEFT) * cos(GamepadStickAngle(GAMEPAD_0, STICK_LEFT));
            double _leftY = GamepadStickLength(GAMEPAD_0, STICK_LEFT) * sin(GamepadStickAngle(GAMEPAD_0, STICK_LEFT));
            double _rightX = GamepadStickLength(GAMEPAD_0, STICK_RIGHT) * cos(GamepadStickAngle(GAMEPAD_0, STICK_RIGHT));
            double _rightY = GamepadStickLength(GAMEPAD_0, STICK_RIGHT) * sin(GamepadStickAngle(GAMEPAD_0, STICK_RIGHT));

            double middlePoint = (((double) MAX_SEND_VALUE + (double) MIN_SEND_VALUE) / 2.0);
            double area = ((double) MAX_SEND_VALUE - (double) MIN_SEND_VALUE) / 2.0;

            area *= SEND_SCALE_RATIO;

            _leftX = middlePoint + (area * _leftX);
            _leftY = std::max((double) MIN_SEND_VALUE, MIN_SEND_VALUE + (_leftY * (MAX_SEND_VALUE - MIN_SEND_VALUE)));
            _rightX = middlePoint + (area * _rightX);
            _rightY = middlePoint + (area * _rightY);

            ButtonsPressed * buttons = new ButtonsPressed;

            buttons->leftX = ((int) _leftX);
            buttons->leftY = ((int) _leftY);
            buttons->rightX = ((int) _rightX);
            buttons->rightY = ((int) _rightY);
            buttons->start = ((GamepadButtonDown(GAMEPAD_0, BUTTON_START) ? true : false));
            buttons->arming = ((GamepadTriggerDown(GAMEPAD_0, TRIGGER_LEFT) && GamepadTriggerDown(GAMEPAD_0, TRIGGER_RIGHT)) ? true : false);
            buttons->a = (GamepadButtonDown(GAMEPAD_0, BUTTON_A) ? true : false);
            buttons->b = (GamepadButtonDown(GAMEPAD_0, BUTTON_B) ? true : false);
            buttons->y = (GamepadButtonDown(GAMEPAD_0, BUTTON_Y) ? true : false);
            buttons->leftShoulder = (GamepadButtonDown(GAMEPAD_0, BUTTON_LEFT_SHOULDER) ? true : false);
            buttons->rightShoulder = (GamepadButtonDown(GAMEPAD_0, BUTTON_RIGHT_SHOULDER) ? true : false);
            buttons->dPadUp = (GamepadButtonDown(GAMEPAD_0, BUTTON_DPAD_UP) ? true : false);
            buttons->dPadDown = (GamepadButtonDown(GAMEPAD_0, BUTTON_DPAD_DOWN) ? true : false);

            emit signalButtonsChanged(buttons);
        }
    }
}

void ThreadGamepadUpdate::slotSteeringDataChanged(SteeringData * steeringData) {
    if (steeringData->name.compare("gamepad0") == 0) {
        this->steeringData = steeringData;
    }
}
