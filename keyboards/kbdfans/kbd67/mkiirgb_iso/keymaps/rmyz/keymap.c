/* Copyright 2021 DZTECH <moyi4681@live.cn>
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

enum {
    TD_ONE_F1,
    TD_TWO_F2,
    TD_THREE_F3,
    TD_FOUR_F4,
    TD_FIVE_F5,
    TD_SIX_F6,
    TD_SEVEN_F7,
    TD_EIGHT_F8,
    TD_NINE_F9,
    TD_ZERO_F10,
    TD_MINS_F11,
    TD_EQUAL_F12,
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_ONE_F1]     = ACTION_TAP_DANCE_DOUBLE(KC_1, KC_F1),
    [TD_TWO_F2]     = ACTION_TAP_DANCE_DOUBLE(KC_2, KC_F2),
    [TD_THREE_F3]   = ACTION_TAP_DANCE_DOUBLE(KC_3, KC_F3),
    [TD_FOUR_F4]    = ACTION_TAP_DANCE_DOUBLE(KC_4, KC_F4),
    [TD_FIVE_F5]    = ACTION_TAP_DANCE_DOUBLE(KC_5, KC_F5),
    [TD_SIX_F6]     = ACTION_TAP_DANCE_DOUBLE(KC_6, KC_F6),
    [TD_SEVEN_F7]   = ACTION_TAP_DANCE_DOUBLE(KC_7, KC_F7),
    [TD_EIGHT_F8]   = ACTION_TAP_DANCE_DOUBLE(KC_8, KC_F8),
    [TD_NINE_F9]    = ACTION_TAP_DANCE_DOUBLE(KC_9, KC_F9),
    [TD_ZERO_F10]   = ACTION_TAP_DANCE_DOUBLE(KC_0, KC_F10),
    [TD_MINS_F11]   = ACTION_TAP_DANCE_DOUBLE(KC_MINS, KC_F11),
    [TD_EQUAL_F12]  = ACTION_TAP_DANCE_DOUBLE(KC_EQL, KC_F12),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_iso_blocker(
        QK_GESC,  TD(TD_ONE_F1),    TD(TD_TWO_F2),    TD(TD_THREE_F3),    TD(TD_FOUR_F4),    TD(TD_FIVE_F5),    TD(TD_SIX_F6),    TD(TD_SEVEN_F7),    TD(TD_EIGHT_F8),    TD(TD_NINE_F9),    TD(TD_ZERO_F10), TD(TD_MINS_F11), TD(TD_EQUAL_F12),  KC_BSPC, KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,  KC_PGDN,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                    KC_RALT, KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_65_iso_blocker(
        QK_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_HOME,
        KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_SCRL, KC_PAUS,          KC_PGUP,
        KC_TRNS, RGB_SPI, RGB_SPD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, EE_CLR,  QK_BOOT, KC_PGDN,
        KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU, KC_MUTE,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                   KC_TRNS, KC_TRNS,          KC_MPRV, KC_VOLD, KC_MNXT
    ),
};
