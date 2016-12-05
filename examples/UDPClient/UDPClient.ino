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
#include <EthernetUdp.h>

/*
IMPORTANT: remember to use the modified version of w5100.h header file.
You can grab the w5100.h file from the extras directory of the
Industrial Shields library. You might copy it into the Arduino
Ethernet library: Arduino/libraries/Ethernet/src/utility/w5100.h
 */

// PLC MAC address: DE:AD:BE:EF:FE:ED
byte _macAddress[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xEE};

// PLC static IP address: 10.0.0.3
byte _ipAddress[] = {10, 0, 0, 3};

// Server IP address: 10.0.0.2
byte _serverAddress[] = {10, 0, 0, 2};

// UDP port to listen
unsigned short _udpPort = 60601;

// UDP server instance
EthernetUDP _udp;

////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() {
  // Begin serial port
	Serial.begin(9600);
  Serial.println("STARTED");

  // Begin Ethernet
  Ethernet.begin(_macAddress, _ipAddress);

  // Begin the UDP listener
  _udp.begin(_udpPort);

  Serial.print("Listening on UDP port ");
  Serial.println(_udpPort);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  // Prepare a packet to be sent
  _udp.beginPacket(_serverAddress, _udpPort);

  // Prepare the packet data: 0xAB
  _udp.write('a');

  // And send it to the server
  _udp.endPacket();

  // Do it periodically, once per second
  delay(1000);
}
