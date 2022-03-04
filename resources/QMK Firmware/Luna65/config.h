/*
Copyright 2021 Neil Khera

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

#include "config_common.h"

#define AdafruitBleCSPin B0

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1111
#define PRODUCT_ID      0x1024
#define DEVICE_VER      0x0001
#define MANUFACTURER    NeilKhera
#define PRODUCT         Luna65
#define DESCRIPTION     Luna 65 keys with BT

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 12

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
tyre
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_COL_PINS { F7, D1, D2, D3, D5, D6, D7, B7, C7, C6, B6, B5 }
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6, B4}
#define UNUSED_PINS

/* COL2ROW, ROW2COL, or CUSTOM_MATRIX */
#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PIN D0
//#define BACKLIGHT_DRIVER = pwm
#define BACKLIGHT_LEVELS 5
//#define BACKLIGHT_ON_STATE 0

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 100