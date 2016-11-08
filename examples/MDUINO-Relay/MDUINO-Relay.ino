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

#include <MDUINO-Relay.h>

/* IMPORTANT: SWITCHES configuration
COMMUNICATION SWITCH - A ZONE
  SCL: ON
  SDA: ON
  RX1: ON
  TX1: ON
  Pin3: ON
  Pin2: ON

DIGITAL/ANALOG OUT SWITCH - B ZONE
  Q0.2: ON
  Q0.1: ON
  Q0.0: ON

DIGITAL/ANALOG OUT SWITCH - C ZONE
  Q1.2: ON
  Q1.1: ON
  Q1.0: ON

DIGITAL/ANALOG OUT SWITCH - D ZONE
  Q2.2: ON
  Q2.1: ON
  Q2.0: ON
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
  pinMode(I1_0, INPUT);
  pinMode(I1_1, INPUT);
  pinMode(I1_2, INPUT);
  pinMode(I1_3, INPUT);
  pinMode(I1_4, INPUT);
  pinMode(I1_5, INPUT);
  pinMode(I2_0, INPUT);
  pinMode(I2_1, INPUT);
  pinMode(I2_2, INPUT);
  pinMode(I2_3, INPUT);
  pinMode(I2_4, INPUT);
  pinMode(I2_5, INPUT);

  // Configure DIGITAL OUTPUT pins
  pinMode(Q0_0, OUTPUT);
  pinMode(Q0_1, OUTPUT);
  pinMode(Q0_2, OUTPUT);
  pinMode(Q1_0, OUTPUT);
  pinMode(Q1_1, OUTPUT);
  pinMode(Q1_2, OUTPUT);
  pinMode(Q2_0, OUTPUT);
  pinMode(Q2_1, OUTPUT);

  // Configure RELAY OUTPUT pins
  pinMode(R0_1, OUTPUT);
  pinMode(R0_2, OUTPUT);
  pinMode(R0_3, OUTPUT);
  pinMode(R0_4, OUTPUT);
  pinMode(R0_5, OUTPUT);
  pinMode(R0_6, OUTPUT);
  pinMode(R0_7, OUTPUT);
  pinMode(R0_8, OUTPUT);
  pinMode(R1_1, OUTPUT);
  pinMode(R1_2, OUTPUT);
  pinMode(R1_3, OUTPUT);
  pinMode(R1_4, OUTPUT);
  pinMode(R1_5, OUTPUT);
  pinMode(R1_6, OUTPUT);
  pinMode(R1_7, OUTPUT);
  pinMode(R1_8, OUTPUT);
  pinMode(R2_1, OUTPUT);
  pinMode(R2_2, OUTPUT);
  pinMode(R2_3, OUTPUT);
  pinMode(R2_4, OUTPUT);
  pinMode(R2_6, OUTPUT);
  pinMode(R2_7, OUTPUT);
  pinMode(R2_8, OUTPUT);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  // Toggle pins once a second
  digitalWrite(Q0_0, HIGH);
  digitalWrite(Q0_1, HIGH);
  digitalWrite(Q0_2, HIGH);
  digitalWrite(Q1_0, HIGH);
  digitalWrite(Q1_1, HIGH);
  digitalWrite(Q1_2, HIGH);
  digitalWrite(Q2_0, HIGH);
  digitalWrite(Q2_1, HIGH);
  digitalWrite(R0_1, HIGH);
  digitalWrite(R0_2, HIGH);
  digitalWrite(R0_3, HIGH);
  digitalWrite(R0_4, HIGH);
  digitalWrite(R0_5, HIGH);
  digitalWrite(R0_6, HIGH);
  digitalWrite(R0_7, HIGH);
  digitalWrite(R0_8, HIGH);
  digitalWrite(R1_1, HIGH);
  digitalWrite(R1_2, HIGH);
  digitalWrite(R1_3, HIGH);
  digitalWrite(R1_4, HIGH);
  digitalWrite(R1_5, HIGH);
  digitalWrite(R1_6, HIGH);
  digitalWrite(R1_7, HIGH);
  digitalWrite(R1_8, HIGH);
  digitalWrite(R2_1, HIGH);
  digitalWrite(R2_2, HIGH);
  digitalWrite(R2_3, HIGH);
  digitalWrite(R2_4, HIGH);
  digitalWrite(R2_6, HIGH);
  digitalWrite(R2_7, HIGH);
  digitalWrite(R2_8, HIGH);

  delay(1000);

  digitalWrite(Q0_0, LOW);
  digitalWrite(Q0_1, LOW);
  digitalWrite(Q0_2, LOW);
  digitalWrite(Q1_0, LOW);
  digitalWrite(Q1_1, LOW);
  digitalWrite(Q1_2, LOW);
  digitalWrite(Q2_0, LOW);
  digitalWrite(Q2_1, LOW);
  digitalWrite(R0_1, LOW);
  digitalWrite(R0_2, LOW);
  digitalWrite(R0_3, LOW);
  digitalWrite(R0_4, LOW);
  digitalWrite(R0_5, LOW);
  digitalWrite(R0_6, LOW);
  digitalWrite(R0_7, LOW);
  digitalWrite(R0_8, LOW);
  digitalWrite(R1_1, LOW);
  digitalWrite(R1_2, LOW);
  digitalWrite(R1_3, LOW);
  digitalWrite(R1_4, LOW);
  digitalWrite(R1_5, LOW);
  digitalWrite(R1_6, LOW);
  digitalWrite(R1_7, LOW);
  digitalWrite(R1_8, LOW);
  digitalWrite(R2_1, LOW);
  digitalWrite(R2_2, LOW);
  digitalWrite(R2_3, LOW);
  digitalWrite(R2_4, LOW);
  digitalWrite(R2_6, LOW);
  digitalWrite(R2_7, LOW);
  digitalWrite(R2_8, LOW);

  delay(1000);
}
