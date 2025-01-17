/* Copyright 2022 Cipulot
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

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

#define LED_CAPS_LOCK_PIN A13

#define APLEX_EN_PIN_0 A8
#define APLEX_EN_PIN_1 B7
#define DISCHARGE_PIN A5
#define ANALOG_PORT_0 A2

#define MATRIX_ROW_PINS { B4, A14, A15, B3, B5, B6 }
#define MATRIX_COL_CHANNELS { 6, 4, 3, 0, 1, 2, 5, 7}
#define MUX_SEL_PINS { B0, A7, A6 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
