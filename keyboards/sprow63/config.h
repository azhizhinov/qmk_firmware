/*
Copyright 2020 Pierre Chevalier <pierrechevalier83@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS_PER_SIDE (MATRIX_COLS / 2)

// wiring
#define MATRIX_ROW_PINS \
    { GP0, GP1, GP2, GP3, GP4 }
#define MATRIX_COL_PINS \
    { GP5, GP6, GP7, GP8, GP9, GP10, GP11 }
#define SECONDARY_ROW_PINS \
    { (1 << 5), (1 << 6), (1 << 7), (1 << 4) }
#define SECONDARY_COL_PINS \
    { (1 << 3), (1 << 2), (1 << 1), (1 << 0), (1 << 15), (1 << 14) }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* i2c settings */

#define I2C_DRIVER I2CD0
#define I2C0_SCL_PIN GP13
#define I2C0_SDA_PIN GP12
