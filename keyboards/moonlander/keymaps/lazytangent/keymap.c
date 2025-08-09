/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
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

#include QMK_KEYBOARD_H

#define ALT_CTL A(KC_LCTL)
#define SPC_LT1 LT(1, KC_SPC)
#define ENT_LT2 LT(2, KC_ENT)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_ESC,            MO(3),   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    MO(3),             KC_DEL,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC,           KC_RBRC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, ALT_CTL, KC_LSFT, KC_LGUI,          QK_LEAD,           QK_LEAD,          MO(2),   KC_RGUI, KC_RSFT, KC_RALT, KC_RCTL,
                                            SPC_LT1, MO(2),   KC_LGUI,           OSL(1),  ENT_LT2, KC_BSPC
    ),

    [1] = LAYOUT_moonlander(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______,           _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_PIPE,           _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    QK_BOOT,
        MO(3),   KC_GRV,  KC_TILD, KC_BSLS, KC_LPRN, KC_RPRN, KC_LCBR,           KC_RCBR, KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_COLN, KC_DQUO,
        _______, _______, _______, KC_PIPE, KC_LCBR, KC_RCBR,                             KC_LBRC, KC_RBRC, KC_LT,   KC_GT,   KC_QUES, _______,
        _______, _______, _______, _______, _______,          _______,           CW_TOGG,          MO(3),   _______, _______, _______, MO(3),
                                            _______, MO(3),   _______,           _______, _______, KC_DEL
    ),

    [2] = LAYOUT_moonlander(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,             KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  QK_BOOT,
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______,           _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        _______, _______, _______, _______, _______, _______, _______,           _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, MO(3),            _______,           _______,          _______, MO(3),   _______, _______, _______,
                                            _______, _______, _______,           _______, _______, _______
    ),

    [3] = LAYOUT_moonlander(
        _______, KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,            KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  QK_BOOT,
        RM_TOGG, RM_NEXT, RM_HUEU, RM_SATU, RM_VALU, RM_SPDU, _______,           _______, _______, _______, _______, _______, _______, _______,
        _______, RM_PREV, RM_HUED, RM_SATD, RM_VALD, RM_SPDD, _______,           _______, MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
        EE_CLR,  _______, _______, _______, _______,          _______,           _______,          _______, _______, _______, _______, _______,
                                            _______, _______, _______,           _______, _______, _______
    )
};
