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

#ifndef __INDUSTRIALSHIELDS_ARDBOX_ANALOG_H__
#define __INDUSTRIALSHIELDS_ARDBOX_ANALOG_H__

#include <Arduino.h>

#define ARDBOX
#define ARDBOX_ANALOG

// INPUTS
#define I0_0					2
#define I0_1					A11
#define I0_2					A8
#define I0_3					A6
#define I0_4					A5
#define I0_5					A4
#define I0_6					A3
#define I0_7					A2
#define I0_8					A1
#define I0_9					A0

// DIGITAL OUTPUTS
#define Q0_0					13
#define Q0_1					11
#define Q0_2					10
#define Q0_3					9
#define Q0_4					6
#define Q0_5					5
#define Q0_6					3
#define Q0_7					7
#define Q0_8					1
#define Q0_9					0

// ANALOG OUTPUTS
#define A0_0					13
#define A0_1					11
#define A0_2					10
#define A0_3					9
#define A0_4					6
#define A0_5					5
#define A0_6					3

// RS485
#define WITH_RS485
#define RS485_RX				11 // RO
#define RS485_TX				10 // DI
#define RS485_MODE				7 // DE
#define RS485_EN				4 // RE 

// RS232
#define WITH_RS232

#endif
