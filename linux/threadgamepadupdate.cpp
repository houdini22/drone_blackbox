#include "QThread"
#include "include.h"

ThreadGamepadUpdate::ThreadGamepadUpdate(SteeringRegistry * registry): QThread() {
    this->registry = registry;

    connect(this->registry, SIGNAL(signalSteeringDataChanged(SteeringData *)), this, SLOT(slotSteeringDataChanged(SteeringData *)));
}

void ThreadGamepadUpdate::run() {
    while (1) {
        QThread::msleep(40);

        nlohmann::json data = Storage::getInstance().getData();
        SteeringData * steeringData = this->steeringData;

        if (steeringData->isConnected) {
            GamepadUpdate();

            double _leftX = GamepadStickLength(GAMEPAD_0, STICK_LEFT) * cos(GamepadStickAngle(GAMEPAD_0, STICK_LEFT));
            double _leftY = GamepadStickLength(GAMEPAD_0, STICK_LEFT) * sin(GamepadStickAngle(GAMEPAD_0, STICK_LEFT));
            double _rightX = GamepadStickLength(GAMEPAD_0, STICK_RIGHT) * cos(GamepadStickAngle(GAMEPAD_0, STICK_RIGHT));
            double _rightY = GamepadStickLength(GAMEPAD_0, STICK_RIGHT) * sin(GamepadStickAngle(GAMEPAD_0, STICK_RIGHT));

            if (_leftX < 0) {
                double area = data["radio"]["leftX"]["middle"].get<int>() - data["radio"]["leftX"]["min"].get<int>();
                _leftX = data["radio"]["leftX"]["middle"].get<int>() + (area * _leftX);
            } else {
                double area = data["radio"]["leftX"]["max"].get<int>() - data["radio"]["leftX"]["middle"].get<int>();
                _leftX = data["radio"]["leftX"]["middle"].get<int>() + (area * _leftX);
            }

            if (_rightX < 0) {
                double area = data["radio"]["rightX"]["middle"].get<int>() - data["radio"]["rightX"]["min"].get<int>();
                _rightX = data["radio"]["rightX"]["middle"].get<int>() + (area * _rightX);
            } else {
                double area = data["radio"]["rightX"]["max"].get<int>() - data["radio"]["rightX"]["middle"].get<int>();
                _rightX = data["radio"]["rightX"]["middle"].get<int>() + (area * _rightX);
            }

            if (_rightY < 0) {
                double area = data["radio"]["rightY"]["middle"].get<int>() - data["radio"]["rightY"]["min"].get<int>();
                _rightY = data["radio"]["rightY"]["middle"].get<int>() + (area * _rightY);
            } else {
                double area = data["radio"]["rightY"]["max"].get<int>() - data["radio"]["rightY"]["middle"].get<int>();
                _rightY = data["radio"]["rightY"]["middle"].get<int>() + (area * _rightY);
            }

            _leftY = std::max((double) data["radio"]["leftY"]["min"].get<int>(), data["radio"]["leftY"]["min"].get<int>() + (_leftY * (data["radio"]["leftY"]["max"].get<int>() - data["radio"]["leftY"]["min"].get<int>())));

            ButtonsPressed buttons;

            buttons.leftX = ((int) _leftX);
            buttons.leftY = ((int) _leftY);
            buttons.rightX = ((int) _rightX);
            buttons.rightY = ((int) _rightY);
            buttons.start = ((GamepadButtonDown(GAMEPAD_0, BUTTON_START) ? true : false));
            buttons.arming = ((GamepadTriggerDown(GAMEPAD_0, TRIGGER_LEFT) && GamepadTriggerDown(GAMEPAD_0, TRIGGER_RIGHT)) ? true : false);
            buttons.a = (GamepadButtonDown(GAMEPAD_0, BUTTON_A) ? true : false);
            buttons.b = (GamepadButtonDown(GAMEPAD_0, BUTTON_B) ? true : false);
            buttons.y = (GamepadButtonDown(GAMEPAD_0, BUTTON_Y) ? true : false);
            buttons.leftShoulder = (GamepadButtonDown(GAMEPAD_0, BUTTON_LEFT_SHOULDER) ? true : false);
            buttons.rightShoulder = (GamepadButtonDown(GAMEPAD_0, BUTTON_RIGHT_SHOULDER) ? true : false);
            buttons.dPadUp = (GamepadButtonDown(GAMEPAD_0, BUTTON_DPAD_UP) ? true : false);
            buttons.dPadDown = (GamepadButtonDown(GAMEPAD_0, BUTTON_DPAD_DOWN) ? true : false);

            emit signalButtonsChanged(buttons);
        }
    }
}

void ThreadGamepadUpdate::slotSteeringDataChanged(SteeringData * steeringData) {
    if (steeringData->name.compare("gamepad0") == 0) {
        this->steeringData = steeringData;
    }
}
