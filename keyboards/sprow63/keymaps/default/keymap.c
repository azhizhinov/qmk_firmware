// Copyright 2021 azhizhinov (@azhizhinov)
// SPDX-License-Identifier: GPL-2.0-or-late
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NO,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINUS,KC_BACKSPACE,
        KC_GRV,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_6,       KC_NO,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQUAL,
        KC_GRV,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_LBRC,    KC_NO,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_TAB,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_RBRC,    KC_NO,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC,
        KC_LSFT,                  KC_LALT,KC_LSFT,MO(1),  KC_BSPC,    KC_ENT,  MO(2),   KC_SPC,  KC_RCTL
    )
};
