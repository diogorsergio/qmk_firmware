#include QMK_KEYBOARD_H

#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_REDO LSG(KC_Z)
#define KC_MAC_ZU LGUI(KC_KP_PLUS)
#define KC_MAC_ZD LGUI(KC_KP_MINUS)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
        KC_MAC_COPY,    KC_KP_7,    KC_KP_8,   KC_KP_9,     KC_KP_SLASH,
        KC_MAC_PASTE,   KC_KP_4,    KC_KP_5,   KC_KP_6,     KC_KP_ASTERISK,
        KC_MAC_CUT,     KC_KP_1,    KC_KP_2,   KC_KP_3,     KC_KP_MINUS,
        KC_BACKSPACE,   KC_COMMA,   KC_KP_0,   KC_KP_DOT,   KC_KP_PLUS
    )
};


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { 
        if (clockwise) {
            rgblight_increase_hue();
        } else {
            rgblight_decrease_hue();
        }
    } else if (index == 1) { 
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    } else if (index == 2) { 
        if (clockwise) {
            tap_code16(KC_MAC_UNDO);
        } else {
            tap_code16(KC_MAC_REDO);
        }
    } else if (index == 3) { 
        if (clockwise) {
            tap_code16(KC_MAC_ZU);
        } else {
            tap_code16(KC_MAC_ZD);
        }
    }
    return true;
}