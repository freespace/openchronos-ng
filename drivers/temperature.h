/*
    temperature.h: Temperature driver header

    Copyright (C) 2012 Matthew Excell <matt@excellclan.com>
    Copyright (C) 2012 Stanislas Bach <stanislasbach@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __TEMPERATURE_H__
#define __TEMPERATURE_H__

#include <core/openchronos.h>

#define TEMPERATURE_DEGREES_C		0
#define TEMPERATURE_DEGREES_F		1
#define TEMPERATURE_DEGREES_BOTH	2

void temperature_init(void);
void temperature_measurement(void);
void temperature_get_C(int16_t *temp);
void temperature_get_F(int16_t *temp);

struct {
	uint16_t value;
	int16_t offset;
} temperature;

#endif /* __TEMPERATURE_H__ */
