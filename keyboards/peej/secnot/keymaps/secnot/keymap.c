/* Copyright 2020 Paul James
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
#include "keymap_spanish.h"

enum layers {
  _QWERTY = 0,
  _SYMBOLS,
};

#define SYMB   MO(_SYMBOLS)
#define TSYMB  TG(_SYMBOLS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------. ,-----------------------------------------.
 * | ESC  |  1   |  2   |  3   |  4   |  5   | |  6   |  7   |  8   |  9   |  0   |  '   |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * | Tab  |  Q   |  W   |  E   |  R   |  T   | |  Y   |  U   |  I   |  O   |  P   |  +   |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * | Ctrl |  A   |  S   |  D   |  F   |  G   | |  H   |  J   |  K   |  L   |  Ñ   |  '   |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * | Shft |  Z   |  X   |  C   |  V   |  B   | |  N   |  M   |  ,   |  .   |  -   | Shft |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |  Alt |      |      |Lower |Lower |Enter | |Space |BackSP|Insert|Delete|      |      |
 * `-----------------------------------------' `-----------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_5x12(
    KC_ESC,   KC_1,    KC_2,       KC_3,     KC_4,     KC_5,              KC_6,    KC_7,    KC_8,      KC_9,      KC_0,      KC_GRV,
    KC_TAB,   KC_Q,    KC_W,       KC_E,     KC_R,     KC_T,              KC_Y,    KC_U,    KC_I,      KC_O,      KC_P,      KC_PLUS,
    KC_LCTL,  KC_A,    KC_S,       KC_D,     KC_F,     KC_G,              KC_H,    KC_J,    KC_K,      KC_L,      ES_NTIL,   ES_ACUT,
    KC_LSFT,  KC_Z,    KC_X,       KC_C,     KC_V,     KC_B,              KC_N,    KC_M,    ES_COMM,   ES_DOT,    ES_MINS,   KC_RSFT,
    KC_LALT,  _______, _______,    TSYMB,    SYMB,     KC_ENT,            KC_SPC,  KC_BSPC, KC_INSERT, KC_DELETE, _______,   _______
),


/* Function
* ,------------------------------------------. .-----------------------------------------.
 * | ESC  |  F1  |  F2  |  F3  |  F4  |  F5  | |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * | Tab  |   {  |   [  |   ]  |   }  |   #  | | -TAB | PGUP |  Up  | PGDN | +TAB |  *   |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |   /  |   (  |   )  |   =  |   !  | | -TAB | Left | Down |Right | +TAB |quote |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |   ^  |   <  |   >  |   &  |   |  | | AutoC|      |   ;  |   :  |   _  |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |Space |Enter | |Space |BackSP|      |      |      |      |
 * `-----------------------------------------' `-----------------------------------------'
 */
[_SYMBOLS] = LAYOUT_ortho_5x12(
    KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_F6,         KC_F7,     KC_F8,   KC_F9,   KC_F10,        KC_F11,
    KC_TAB,   ES_LCBR, ES_LBRC, ES_RBRC, ES_RCBR, ES_HASH,                    C(S(KC_PGUP)), KC_PGUP,   KC_UP,   KC_PGDN, C(S(KC_PGDN)), ES_ASTR,
    _______,  ES_SLSH, ES_LPRN, ES_RPRN, ES_EQL,  ES_EXLM,                    C(KC_PGUP),    KC_LEFT,   KC_DOWN, KC_RGHT, C(KC_PGDN),    ES_QUOT,
    _______,  ES_CIRC, ES_LABK, ES_RABK, ES_AMPR, ES_PIPE,                    C(KC_N),       _______,   ES_SCLN, ES_COLN, ES_UNDS,       _______,
    _______,  _______, _______, _______, KC_SPC,  KC_ENT,                     KC_SPC,        KC_BSPC,   _______, _______, _______,       _______
)

};
