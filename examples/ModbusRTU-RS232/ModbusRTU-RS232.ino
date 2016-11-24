/*
   Copyright (c) 2016 Boot&Work Corp., S.L. All rights reserved

   This program is free software: you can redistribute it and/or modify
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

// Include Industrial Shields libraries
#include <RS232.h>

// External library: download it from https://goo.gl/2gDyYO
#include <ModbusMaster.h>

// The Modbus slave node
ModbusMaster slave;

// Slave ID
const static int slaveId = 2;

// Coil value control
bool coilValue = true;

////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() {
  // Begin serial port
	Serial.begin(9600);

  // Begin RS-232 port for Modbus communication at 19200bps
  RS232.begin(19200);

  // Slave with ID 'slaveId' is connected to RS-232 port
  slave.begin(slaveId, RS232);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  // Toggle coil value
  Serial.print("Set coil value to ");
  Serial.println(coilValue);
  slave.writeSingleCoil(1, coilValue);
  coilValue = !coilValue;

  // And read input registers
  uint8_t result = slave.readInputRegisters(0x1000, 2);
  if (result == slave.ku8MBSuccess) {
    Serial.print("Register 0x1000 value: ");
    Serial.println(slave.getResponseBuffer(0));

    Serial.print("Register 0x1001 value: ");
    Serial.println(slave.getResponseBuffer(1));
  }

  // Once per second
  delay(1000);
}
