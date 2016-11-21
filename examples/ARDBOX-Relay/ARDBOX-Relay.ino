/*
   Copyright (c) 2016 Boot&Work Corp., S.L.

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

#include <ARDBOX-Relay.h>

/* IMPORTANT: SWITCHES configuration
FRONT SWITCH ZONE
  R6: ON
  RO: OFF
  R5: ON
  DI: OFF

COMMUNICATION SWITCH ZONE
  DE/R2: ON
  RE/R1: ON
  I0.3/RX: OFF
  I0.2/TX: OFF
  SCL/I0.1: ON
  SDA/I0.0: ON
*/

////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() {
  // Configure INPUT pins
  pinMode(I0_0, INPUT);
  pinMode(I0_1, INPUT);
  pinMode(I0_2, INPUT);
  pinMode(I0_3, INPUT);
  pinMode(I0_4, INPUT);
  pinMode(I0_5, INPUT);
  pinMode(I0_6, INPUT);
  pinMode(I0_7, INPUT);
  pinMode(I0_8, INPUT);
  pinMode(I0_9, INPUT);

  // Configure ANALOG OUTPUT pins
  pinMode(Q0_0, OUTPUT);
  pinMode(Q0_1, OUTPUT);

  // Configure RELAY OUTPUT pins
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(R4, OUTPUT);
  pinMode(R5, OUTPUT);
  pinMode(R6, OUTPUT);
  pinMode(R7, OUTPUT);
  pinMode(R8, OUTPUT);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  // Toggle relays once a second
  digitalWrite(R1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);
  digitalWrite(R5, HIGH);
  digitalWrite(R6, HIGH);
  digitalWrite(R7, HIGH);
  digitalWrite(R8, HIGH);

  delay(1000);

  digitalWrite(R1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(R3, LOW);
  digitalWrite(R4, LOW);
  digitalWrite(R5, LOW);
  digitalWrite(R6, LOW);
  digitalWrite(R7, LOW);
  digitalWrite(R8, LOW);

  delay(1000);
}
