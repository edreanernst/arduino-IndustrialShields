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

// Include system libraries
#include <SPI.h>
#include <Ethernet.h>

/*
IMPORTANT: remember to use the modified version of w5100.h header file.
You can grab the w5100.h file from the extras directory of the
Industrial Shields library. You might copy it into the Arduino
Ethernet library: Arduino/libraries/Ethernet/src/utility/w5100.h
 */

// PLC MAC address: DE:AD:BE:EF:FE:EE
byte _macAddress[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xEE};

// PLC static IP address: 10.0.0.3
byte _ipAddress[] = {10, 0, 0, 3};

// Server IP address: 10.0.0.2
byte _serverAddress[] = {10, 0, 0, 2};

// TCP port to connect to
unsigned short _tcpPort = 60601;

// Ethernet server instance
EthernetClient _client;

////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() {
  // Begin serial port
	Serial.begin(9600);

  // Begin Ethernet
  Ethernet.begin(_macAddress, _ipAddress);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  // Check server connection
  if (!_client.connected()) {
    // Not connected to the server:
    // Wait a second
    delay(1000);

    // And try to connect
    _client.connect(_serverAddress, _tcpPort);

  } else {
    // Connection to the server is ready:
    byte rx;

    if (Serial.available()) {
      // And data available in the serial port:
      // Read serial port data
      rx = Serial.read();

      // And send it to the server
      _client.write(rx);
    }

    if (_client.available()) {
      // And data received from the server:
      // Read the received byte
      rx = _client.read();

      // And print it to the serial port
      Serial.print((char) rx);
    }
  }
}
