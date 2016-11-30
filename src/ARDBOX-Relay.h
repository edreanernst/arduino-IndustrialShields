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

#ifndef __INDUSTRIALSHIELDS_ARDBOX_RELAY_H__
#define __INDUSTRIALSHIELDS_ARDBOX_RELAY_H__

#include <Arduino.h>

#define ARDBOX
#define ARDBOX_RELAY

// DIGITAL INPUTS
#define I0_0					2
#define I0_1					3
#define I0_2					0
#define I0_3					1
#define I0_4					A0
#define I0_5					A1
#define I0_6					A2
#define I0_7					A3
#define I0_8					A4
#define I0_9					A5

// DIGITAL OUTPUTS
#define Q0_0					5
#define Q0_1					6

// RELAY OUTPUTS
#define R1						4
#define R2						7
#define R3						8
#define R4						9
#define R5						10
#define R6						11
#define R7						12
#define R8						13

// RS485
#define WITH_RS485
#define RS485_RX				11 // RO
#define RS485_TX				10 // DI
#define RS485_MODE				7 // DE
#define RS485_EN				4 // RE 

// RS232
#define WITH_RS232

#endif
