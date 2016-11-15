/*
   Copyright (c) 2016 Boot&Work Corp., S.L.

   This library is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __INDUSTRIALSHIELDS_RS485_H__
#define __INDUSTRIALSHIELDS_RS485_H__

#include <Arduino.h>
#include <SoftwareSerial.h>

#define RS485_MODE_TX					HIGH
#define RS485_MODE_RX					LOW

class RS485Class : public SoftwareSerial {
	public:
		RS485Class(uint8_t rxPin, uint8_t txPin, uint8_t modePin, uint8_t enPin) : SoftwareSerial(rxPin, txPin) {
			_modePin = modePin;
			_enPin = enPin;

			pinMode(_modePin, OUTPUT);
			pinMode(_enPin, OUTPUT);

			digitalWrite(_modePin, RS485_MODE_RX);
			digitalWrite(_enPin, LOW);
		}

	public:
		virtual size_t write(const uint8_t *buff, size_t len) {
			digitalWrite(_modePin, RS485_MODE_TX);
			size_t ret = SoftwareSerial::write(buff, len);
			digitalWrite(_modePin, RS485_MODE_RX);
			return ret;
		}

	private:
		uint8_t _modePin;
		uint8_t _enPin;
};

static RS485Class RS485(RS485_RX, RS485_TX, RS485_MODE, RS485_EN);

#endif // __INDUSTRIALSHIELDS_RS485_H__
