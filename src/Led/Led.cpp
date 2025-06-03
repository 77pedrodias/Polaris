#include "Led.h"

Led::Led(int pin) : _pin(pin) {}

void Led::begin() {
    pinMode(_pin, OUTPUT);
    digitalWrite(_pin, LOW);
    _state = false;
    _blinking = false;
    _lastToggle = millis();
    _interval = 0;
    _blinkCount = 0; 
}

void Led::on() {
    _state = true;
    digitalWrite(_pin, HIGH);
}

void Led::off() {
    _state = false;
    digitalWrite(_pin, LOW);
}

void Led::toggle() {
    _state = !_state;
    digitalWrite(_pin, _state);
}

void Led::startBlink(unsigned long interval) {
    _blinking = true;
    _interval = interval;
    _lastToggle = millis();
    _blinkCount = 0;
}

void Led::stopBlink() {
    _blinking = false;
}

void Led::update() {
    if (_blinking && (millis() - _lastToggle >= _interval)) {
        _lastToggle = millis();
        toggle();
        if (_state) { 
            _blinkCount++;
        }
    }
}

int Led::getBlinkCount() {
    return _blinkCount;
}

bool Led::isBlinking() {
    return _blinking;
}

bool Led::isOn() {
    return _state;
}