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

#include <ARDBOX-Analog.h>

/* IMPORTANT: SWITCHES configuration
FRONT SWITCH ZONE
  Q0.1: ON
  RO: OFF
  Q0.2: ON
  DI: OFF

COMMUNICATION SWITCH ZONE
  DE-D7/Q0.7: ON
  RE-D4/I0.3: ON
  RX-D1/Q0.8: OFF
  TX-D0/Q0.9: OFF
  SDA-D2/I0.0: ON
  SCL-D3/Q0.6: ON

DIGITAL/ANALOG OUT SWITCH ZONE
  Q0.6: ON
  Q0.5: ON
  Q0.4: ON
  Q0.3: ON
  Q0.2: ON
  Q0.1: ON
  Q0.0: ON
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

  // Configure DIGITAL OUTPUT pins
  pinMode(Q0_0, OUTPUT);
  pinMode(Q0_1, OUTPUT);
  pinMode(Q0_2, OUTPUT);
  pinMode(Q0_3, OUTPUT);
  pinMode(Q0_4, OUTPUT);
  pinMode(Q0_5, OUTPUT);
  pinMode(Q0_6, OUTPUT);
  pinMode(Q0_7, OUTPUT);
  pinMode(Q0_8, OUTPUT);
  pinMode(Q0_9, OUTPUT);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  // Toggle pins once a second
  digitalWrite(Q0_0, HIGH);
  digitalWrite(Q0_1, HIGH);
  digitalWrite(Q0_2, HIGH);
  digitalWrite(Q0_3, HIGH);
  digitalWrite(Q0_4, HIGH);
  digitalWrite(Q0_5, HIGH);
  digitalWrite(Q0_6, HIGH);
  digitalWrite(Q0_7, HIGH);
  digitalWrite(Q0_8, HIGH);
  digitalWrite(Q0_9, HIGH);

  delay(1000);

  digitalWrite(Q0_0, LOW);
  digitalWrite(Q0_1, LOW);
  digitalWrite(Q0_2, LOW);
  digitalWrite(Q0_3, LOW);
  digitalWrite(Q0_4, LOW);
  digitalWrite(Q0_5, LOW);
  digitalWrite(Q0_6, LOW);
  digitalWrite(Q0_7, LOW);
  digitalWrite(Q0_8, LOW);
  digitalWrite(Q0_9, LOW);

  delay(1000);
}
