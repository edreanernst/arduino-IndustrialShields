#include "RS485.h"

#define RS485_MODE_TX					HIGH
#define RS485_MODE_RX					LOW

////////////////////////////////////////////////////////////////////////////////////////////////////
RS485Class::RS485Class(uint8_t rxPin, uint8_t txPin, uint8_t modePin, uint8_t enPin) : SoftwareSerial9(rxPin, txPin) {
	_modePin = modePin;
	_enPin = enPin;

	pinMode(_modePin, OUTPUT);
	pinMode(_enPin, OUTPUT);

	digitalWrite(_modePin, RS485_MODE_RX);
	digitalWrite(_enPin, LOW);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
size_t RS485Class::write(uint8_t value) {
	digitalWrite(_modePin, RS485_MODE_TX);
	size_t ret = SoftwareSerial9::write(value);
	digitalWrite(_modePin, RS485_MODE_TX);
	return ret;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
size_t RS485Class::write(const uint8_t *buff, size_t len) {
	digitalWrite(_modePin, RS485_MODE_TX);
	size_t ret = SoftwareSerial9::write(buff, len);
	digitalWrite(_modePin, RS485_MODE_RX);
	return ret;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
size_t RS485Class::write9(uint16_t value) {
	digitalWrite(_modePin, RS485_MODE_TX);
	size_t ret = SoftwareSerial9::write9(value);
	digitalWrite(_modePin, RS485_MODE_TX);
	return ret;
}