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

#ifndef __INDUSTRIALSHIELDS_TIME_H__
#define __INDUSTRIALSHIELDS_TIME_H__

typedef unsigned long time_t;
typedef unsigned long millis_t;

/* Update and reads the current time
 */
time_t time();
millis_t timeMillis();

/* Only read the last updated time
 */
time_t getTime();
millis_t getTimeMillis();

/* Sets the current time
 */
time_t setTime(time_t t, millis_t m = 0);

#endif // __INDUSTRIALSHIELDS_TIME_H__
