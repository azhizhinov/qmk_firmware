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
#define MATRIX_ROWS 10
#define MATRIX_COLS 14

#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS_PER_SIDE (MATRIX_COLS / 2)

// wiring
#define MATRIX_ROW_PINS_MCU \
    { GP0, GP1, GP2, GP3, GP4 }
#define MATRIX_COL_PINS_MCU \
    { GP5, GP6, GP7, GP8, GP9, GP10, GP11 }
#define MATRIX_ROW_PINS_MCP \
    { A0, A1, A2, A3, A4 }
#define MATRIX_COL_PINS_MCP \
    { B0, B1, B2, B3, B4, B5, B6 }

#define MATRIX_ROW_PINS \
    { GP0, GP1, GP2, GP3, GP4, A0, A0, A0, A0, A0 }
#define MATRIX_COL_PINS \
    { GP5, GP6, GP7, GP8, GP9, GP10, GP11, A1, A1, A1, A1, A1, A1, A1 }

    /* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* i2c settings */
#define I2C_DRIVER I2CD0
#define I2C1_SCL_PIN GP13
#define I2C1_SDA_PIN GP12
#define I2C1_TIMINGR_PRESC 2U
#define I2C1_TIMINGR_SCLDEL 1U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 9U
#define I2C1_TIMINGR_SCLL 26U
#define I2C1_SCL_PAL_MODE 1
#define I2C1_SDA_PAL_MODE 1


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
