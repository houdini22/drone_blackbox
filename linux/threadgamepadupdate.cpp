#include "QThread"
#include "include.h"

ThreadGamepadUpdate::ThreadGamepadUpdate(Drone * drone): QThread()
{
    this->drone = drone;
}

void ThreadGamepadUpdate::run() {
    while (1) {
        if (this->drone->isGamePadConnected()) {
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

            ButtonsPressed buttons;

            buttons.leftX = QString::number((int) _leftX);
            buttons.leftY = QString::number((int) _leftY);
            buttons.rightX = QString::number((int) _rightX);
            buttons.rightY = QString::number((int) _rightY);
            buttons.start = QString((GamepadButtonDown(GAMEPAD_0, BUTTON_START) ? "true" : "false"));
            buttons.arming = QString((GamepadTriggerDown(GAMEPAD_0, TRIGGER_LEFT) && GamepadTriggerDown(GAMEPAD_0, TRIGGER_RIGHT)) ? "true" : "false");
            buttons.a = QString(GamepadButtonDown(GAMEPAD_0, BUTTON_A) ? "true" : "false");
            buttons.b = QString(GamepadButtonDown(GAMEPAD_0, BUTTON_B) ? "true" : "false");
            buttons.y = QString(GamepadButtonDown(GAMEPAD_0, BUTTON_Y) ? "true" : "false");
            buttons.leftShoulder = QString(GamepadButtonDown(GAMEPAD_0, BUTTON_LEFT_SHOULDER) ? "true" : "false");
            buttons.rightShoulder = QString(GamepadButtonDown(GAMEPAD_0, BUTTON_RIGHT_SHOULDER) ? "true" : "false");
            buttons.dPadUp = QString(GamepadButtonDown(GAMEPAD_0, BUTTON_DPAD_UP) ? "true" : "false");
            buttons.dPadDown = QString(GamepadButtonDown(GAMEPAD_0, BUTTON_DPAD_DOWN) ? "true" : "false");

            this->setButtons(buttons);
        }
        QThread::msleep(40);
    }
}

void ThreadGamepadUpdate::setButtons(ButtonsPressed buttons) {
    emit buttonsChanged(buttons);
}
