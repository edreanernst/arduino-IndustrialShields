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

#ifndef __INDUSTRIALSHIELDS_MDUINO_H__
#define __INDUSTRIALSHIELDS_MDUINO_H__

#include <Arduino.h>

#define MDUINO

// INPUTS
#define I0_0					22
#define I0_1					23
#define I0_2					24
#define I0_3					25
#define I0_4					26
#define I0_5					2
#define I0_6					3
#define I0_7					A0
#define I0_8					A1
#define I0_9					A2
#define I0_10					A3
#define I0_11					A4
#define I0_12					A5
#define I1_0					27
#define I1_1					28
#define I1_2					29
#define I1_3					30
#define I1_4					31
#define I1_5					18
#define I1_6					19
#define I1_7					A6
#define I1_8					A7
#define I1_9					A8
#define I1_10					A9
#define I1_11					A10
#define I1_12					A11
#define I2_0					32
#define I2_1					33
#define I2_2					34
#define I2_3					35
#define I2_5					20
#define I2_6					21
#define I2_7					A12
#define I2_8					A13
#define I2_9					A14
#define I2_10					A15

// DIGITAL OUTPUTS
#define Q0_0					36
#define Q0_1					37
#define Q0_2					38
#define Q0_3					39
#define Q0_4					40
#define Q0_5					4
#define Q0_6					5
#define Q0_7					6
#define Q1_0					41
#define Q1_1					42
#define Q1_2					43
#define Q1_3					44
#define Q1_4					45
#define Q1_5					8
#define Q1_6					9
#define Q1_7					7
#define Q2_0					46
#define Q2_1					47
#define Q2_2					48
#define Q2_3					49
#define Q2_5					12
#define Q2_6					13

// ANALOG OUTPUTS
#define A0_5					Q0_5
#define A0_6					Q0_6
#define A0_7					Q0_7
#define A1_5					Q1_5
#define A1_6					Q1_6
#define A1_7					Q1_7
#define A2_5					Q2_5
#define A2_6					Q2_6

// RS485
#define WITH_RS485
#define RS485_RX				11 // RO
#define RS485_TX				10 // DI
#define RS485_MODE				14 // DE
#define RS485_EN				15 // RE 

// RS232
#define WITH_RS232

#endif
