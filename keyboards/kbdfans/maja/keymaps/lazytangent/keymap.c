// vim: shiftwidth=2

#include QMK_KEYBOARD_H

enum keycodes {
  L01LSFT = QK_USER,
  L02LSFT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Base */
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_ESC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_DEL,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    MO(1),   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
    KC_LALT,          KC_LGUI, MO(1),            KC_SPC,           MO(2),            KC_RGUI,                   KC_LEFT, KC_DOWN, KC_RIGHT
  ),
  [1] = LAYOUT( /* FN */
    KC_ESC,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, KC_DEL,  _______,
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LCBR, KC_RCBR, QK_BOOT, _______,
    _______, KC_GRV,  KC_TILD, KC_BSLS, KC_LPRN, KC_RPRN, KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_COLN, KC_DQUO,          _______, _______,
    _______, _______, L01LSFT, KC_PIPE, KC_LCBR, KC_RCBR, _______, KC_LBRC, KC_RBRC, KC_LABK, KC_RABK, KC_QUES, _______, _______,
    _______,          L01LSFT, _______,          _______,          MO(3),            _______,                   _______, _______, _______
  ),
  [2] = LAYOUT( /* FN2 */
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  QK_BOOT, _______,
    _______, MS_BTN2, MS_UP,   MS_BTN1, MS_WHLU, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT, _______,
    _______, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
    _______, _______, MS_WHLL, MS_WHLR, _______, _______, L02LSFT, _______, _______, _______, _______, _______, _______, _______,
    _______,          _______, MO(3),            _______,          _______,          MO(3),                     _______, _______, _______
  ),
  [3] = LAYOUT( /* FN3 */
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    RM_TOGG, RM_NEXT, RM_HUEU, RM_SATU, RM_VALU, RM_SPDU, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, RM_PREV, RM_HUED, RM_SATD, RM_VALD, RM_SPDD, _______, _______, _______, _______, _______, _______,          _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,          _______, _______,          _______,          _______,          _______,                   _______, _______, _______
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case L01LSFT:
      if (!record->event.pressed) {
        del_mods(MOD_BIT(KC_LSFT));
        layer_on(1);
        return false;
      }

      layer_move(0);
      add_mods(MOD_BIT(KC_LSFT));

      return false;
    case L02LSFT:
      if (!record->event.pressed) {
        del_mods(MOD_BIT(KC_LSFT));
        layer_on(2);
        return false;
      }

      layer_move(0);
      add_mods(MOD_BIT(KC_LSFT));

      return false;
    default:
      return true;
  }
}
