// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // For more information on what keys are available, view the following file:
    // qmk-firmware/quantum/keycodes.h  (normal keycodes)

    [0] = LAYOUT_medium(
    //┌──────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                   ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        KC_TAB,    KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                         KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
    //├──────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
        KC_LCTL,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                         KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
    //├──────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
        KC_LSFT,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                         KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ESC,
    //└──────────┴─────────┴─────────┴─────────┴─────────┴─────────┘                   └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
    //                                     ┌─────────┬─────────┬─────────┐        ┌─────────┬─────────┬─────────┐
                                             KC_LGUI,  MO(1),    KC_SPC,            KC_ENT,   MO(2),    KC_RALT
    //                                     └─────────┴─────────┴─────────┘        └─────────┴─────────┴─────────┘
    ),
    [1] = LAYOUT_medium(
    //┌──────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                   ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        _______,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                         KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,
    //├──────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
        _______,   KC_MS_L,  KC_MS_D,  KC_MS_U,  KC_MS_R,  KC_HOME,                      KC_END,   KC_LEFT,  KC_UP,    KC_DOWN,  KC_RGHT,  XXXXXXX,
    //├──────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
        _______,   KC_WH_L,  KC_WH_D,  KC_WH_U,  KC_WH_U,  XXXXXXX,                      XXXXXXX,  KC_BTN1,  KC_BTN3,  KC_BTN2,  XXXXXXX,  _______,
    //└──────────┴─────────┴─────────┴─────────┴─────────┴─────────┘                   └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
    //                                     ┌─────────┬─────────┬─────────┐        ┌─────────┬─────────┬─────────┐
                                             _______,  _______,  _______,           KC_BSPC,  MO(3),    KC_DEL
    //                                     └─────────┴─────────┴─────────┘        └─────────┴─────────┴─────────┘
    ),
    [2] = LAYOUT_medium(
    //┌──────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                   ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        _______,   XXXXXXX,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,                      KC_CIRC,  KC_AMPR,  KC_LPRN,  KC_RPRN,  XXXXXXX,  _______,
    //├──────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
        _______,   KC_EXLM,  KC_LABK,  KC_RABK,  KC_QUES,  KC_ASTR,                      KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_GRV,
    //├──────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
        _______,   KC_GRV,   KC_QUOT,  KC_DQT,   XXXXXXX,  XXXXXXX,                      KC_UNDS,  KC_PPLS,  KC_LCBR,  KC_RCBR,  KC_PIPE,  KC_TILD,
    //└──────────┴─────────┴─────────┴─────────┴─────────┴─────────┘                   └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
    //                                     ┌─────────┬─────────┬─────────┐        ┌─────────┬─────────┬─────────┐
                                             XXXXXXX,  MO(3),    XXXXXXX,           _______,  _______,  _______
    //                                     └─────────┴─────────┴─────────┘        └─────────┴─────────┴─────────┘
    ),
    [3] = LAYOUT_medium(
    //┌──────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                   ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        KC_F1,     KC_F2 ,   KC_F3 ,   KC_F4,    KC_F5 ,   KC_F6,                        KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
    //├──────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
        XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    //├──────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
        XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    //└──────────┴─────────┴─────────┴─────────┴─────────┴─────────┘                   └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
    //                                     ┌─────────┬─────────┬─────────┐        ┌─────────┬─────────┬─────────┐
                                             XXXXXXX,  _______,  XXXXXXX,           XXXXXXX,  _______,  XXXXXXX
    //                                     └─────────┴─────────┴─────────┘        └─────────┴─────────┴─────────┘
    )
};
