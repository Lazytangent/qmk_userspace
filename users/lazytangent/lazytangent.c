#include QMK_KEYBOARD_H

void leader_end_user(void) {
    // Requires setting LEADER_ENABLE = yes in rules.mk
    if (leader_sequence_one_key(KC_F)) {
        // Requires including QMK_KEYBOARD_H for declaration
        SEND_STRING("QMK is awesome.");
    }
}
