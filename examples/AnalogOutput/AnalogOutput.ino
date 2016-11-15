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

// Include MDUINO library for working with MDUINO hardware
#include <MDUINO.h>

// Include IndustrialShields utilities library
#include <IS.h>

/* IMPORTANT: SWITCHES configuration
COMMUNICATION SWITCH - A ZONE
  SCL: ON
  SDA: ON
  RX1: ON
  TX1: ON
  Pin3: ON
  Pin2: ON

DIGITAL/ANALOG OUT SWITCH - B ZONE
  Q0.7: OFF
  Q0.6: OFF
  Q0.5: OFF

DIGITAL/ANALOG OUT SWITCH - C ZONE
  Q1.7: OFF
  Q1.6: OFF
  Q1.5: OFF

DIGITAL/ANALOG OUT SWITCH - D ZONE
  Q2.7: OFF
  Q2.6: OFF
  Q2.5: OFF
*/

// Output voltage variable
int voltage = 0;

////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() {
  // Configure analog output pin
  pinMode(A0_5, OUTPUT);

  // Begin serial port
  Serial.begin(9600);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  // Set the analog pin value in mV
  voltageWrite(A0_5, voltage);

  // And print the value to the serial port
  Serial.println(voltage);

  // Update voltage variable for next cycle
  voltage += 100;
  if (voltage >= 10000) {
    voltage = 0;
  }

  // Once per seconds
  delay(1000);
}
