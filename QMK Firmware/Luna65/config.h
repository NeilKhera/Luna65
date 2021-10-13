#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1024
#define PRODUCT_ID      0x2048
#define DEVICE_VER      0x0001
#define MANUFACTURER    NeilKhera
#define PRODUCT         Luna65

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_ROW_PINS {F6, F5, F4, F1, F0}
#define MATRIX_COL_PINS {F7, C7, C6, B2, B3, D1, D2, D3, D5, D4, D6, D7, B4, B5, B6}

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW


#define BACKLIGHT_PIN D0
#define BACKLIGHT_DRIVER = pwm
#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_ON_STATE 0

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
