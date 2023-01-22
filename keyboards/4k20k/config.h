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