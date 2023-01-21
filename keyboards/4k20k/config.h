/* Copyright 2023 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 5

/* Key matrix pins */
#define MATRIX_ROW_PINS { C3, C4, C6, C7 }
#define MATRIX_COL_PINS { B3, E30, D4, D2, D3 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Vial details */
#define VIAL_KEYBOARD_UID {0x0C, 0x25, 0xF0, 0x13, 0x6A, 0xEA, 0x12, 0xD5}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 3, 4 }

#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR  65535

/* i2c_master defines */
#define I2C1_SCL_PIN B0 // A2 on pinout = B0
#define I2C1_SDA_PIN B1 // A3 on pinout = B1
#define I2C1_SCL_PAL_MODE PAL_MODE_ALTERNATIVE_2
#define I2C1_SDA_PAL_MODE PAL_MODE_ALTERNATIVE_2

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 500

/* Rotary Encoders */
#define ENCODERS_PAD_A { D6, D1, D0, A1 }
#define ENCODERS_PAD_B { E21, C5, B17, A2 }
#define ENCODER_RESOLUTION 4

/* RGB Lighting */
#define NOP_FUDGE 0.4
#define RGB_DI_PIN B1
#define RGBLED_NUM 80
#define RGBLIGHT_HUE_STEP 8