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

#include <SPI.h>
#include <Ethernet.h>

/* IMPORTANT: SWITCHES configuration
COMMUNICATION SWITCH - A ZONE
  SCL: ON
  SDA: ON
  RX1: ON
  TX1: ON
  Pin3: ON
  Pin2: ON

DIGITAL/ANALOG OUT SWITCH - B ZONE
  Q0.7: ON
  Q0.6: ON
  Q0.5: ON

DIGITAL/ANALOG OUT SWITCH - C ZONE
  Q1.7: ON
  Q1.6: ON
  Q1.5: ON

DIGITAL/ANALOG OUT SWITCH - D ZONE
  Q2.7: ON
  Q2.6: ON
  Q2.5: ON
*/

// PLC MAC address: DE:AD:BE:EF:FE:ED
byte _macAddress[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};

// PLC static IP address: 192.168.1.223
byte _ipAddress[] = {10, 0, 0, 2};

// TCP port to listen
unsigned short _tcpPort = 60601;

// Ethernet server instance
EthernetServer _server(_tcpPort);

////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() {
  // Begin serial port
	Serial.begin(9600);

  // Begin Ethernet
  Ethernet.begin(_macAddress, _ipAddress);

  // Begin the server
  _server.begin();

  Serial.print("Listening on port ");
  Serial.println(_tcpPort);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  // Check for a connected client
  EthernetClient client = _server.available();
  if (client.available()) {

    // If a client is available, read data
    byte rx = client.read();

    // Print it
    Serial.print((char) rx);

    // And echo it to the client
    client.write(rx);
  }
}
