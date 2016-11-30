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

#ifndef __INDUSTRIALSHIELDS_MDUINO_RELAY_H__
#define __INDUSTRIALSHIELDS_MDUINO_RELAY_H__

#include <Arduino.h>

#define MDUINO
#define MDUINO_RELAY

// DIGITAL INPUTS
#define I0_0					2
#define I0_1					3
#define I0_2					A0
#define I0_3					A1
#define I0_4					A2
#define I0_5					A3
#define I1_0					18
#define I1_1					19
#define I1_2					A6
#define I1_3					A7
#define I1_4					A8
#define I1_5					A9
#define I2_0					20
#define I2_1					21
#define I2_2					A12
#define I2_3					A13
#define I2_4					A14
#define I2_5					A15

// ANALOG INPUTS
#define A0_0					4
#define A0_1					5
#define A0_2					6
#define A1_0					8
#define A1_1					9
#define A1_2					7
#define A2_0					12
#define A2_1					13

// DIGITAL OUTPUTS
#define Q0_0					4
#define Q0_1					5
#define Q0_2					6
#define Q1_0					8
#define Q1_1					9
#define Q1_2					7
#define Q2_0					12
#define Q2_1					13

// RELAY OUTPUTS
#define R0_1					23
#define R0_2					22
#define R0_3					25
#define R0_4					24
#define R0_5					40
#define R0_6					39
#define R0_7					38
#define R0_8					37
#define R1_1					28
#define R1_2					27
#define R1_3					30
#define R1_4					29
#define R1_5					45
#define R1_6					44
#define R1_7					43
#define R1_8					42
#define R2_1					33
#define R2_2					32
#define R2_3					35
#define R2_4					34
#define R2_6					49
#define R2_7					48
#define R2_8					47

// RS485
#define WITH_RS485
#define RS485_RX				11 // RO
#define RS485_TX				10 // DI
#define RS485_MODE				14 // DE
#define RS485_EN				15 // RE 

// RS232
#define WITH_RS232

#endif
