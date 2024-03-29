#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
  _BL,
  _FL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT(
      KC_GESC ,     KC_1,     KC_2,      KC_3,     KC_4,     KC_5,      KC_6,     KC_7,     KC_8,      KC_9,     KC_0,  KC_MINS,
      KC_TAB  ,     KC_Q,     KC_W,      KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,      KC_O,     KC_P,  KC_LBRC,
      KC_CAPS ,     KC_A,     KC_S,      KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,      KC_L,  KC_SCLN,  KC_QUOT, 
      KC_LSFT ,     KC_Z,     KC_X,      KC_C,     KC_V,     KC_B,      KC_N,     KC_M,  KC_COMM,    KC_DOT,  KC_SLSH,  KC_RSFT,
      KC_LCTRL,  KC_LGUI,  KC_LALT,  KC_SPACE,   KC_ENT,   KC_END,   KC_BSLS,  KC_RBRC,  KC_PGUP,   MO(_FL), KC_RCTRL,  KC_LEFT,
                                                          KC_HOME,   KC_BSPC,   KC_EQL,  KC_PGDN,  KC_RIGHT,  KC_DOWN,    KC_UP
    ),
    [_FL] = LAYOUT(
      KC_GRV  ,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
      _______ , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______ , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______ , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______ , _______, _______, _______, _______, _______, _______, _______, KC_PSCR, MO(_FL), _______, _______,
      					                RGB_VAD,  KC_DEL, _______,  KC_F12,  KC_INS, _______, _______
    )
};
