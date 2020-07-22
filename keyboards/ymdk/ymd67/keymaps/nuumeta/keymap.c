#include QMK_KEYBOARD_H
#include "nuumeta.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_UNIX] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_BSPC,
               KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
               KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
               KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,
               KC_LCTL, KC_LALT, KC_LGUI, MO(_FUNCTIONS), KC_SPC, MO(_SETTINGS), KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
  
  [_WINDOWS] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_BSPC,
               KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
               KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
               KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,
               KC_LCTL, KC_LGUI, KC_LALT, MO(_FUNCTIONS), KC_SPC, MO(_SETTINGS), KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

  [_FUNCTIONS] = LAYOUT(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_SYSTEM_SLEEP, 
               _______, KC_BRIGHTNESS_DOWN, KC_UP, KC_BRIGHTNESS_UP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
               _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
               _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_AUDIO_MUTE, KC_AUDIO_VOL_UP, KC_MEDIA_PLAY_PAUSE, 
               _______, _______, _______, _______, _______, _______, _______, _______, KC_MEDIA_PREV_TRACK, KC_AUDIO_VOL_DOWN, KC_MEDIA_NEXT_TRACK),
  
  [_SETTINGS] = LAYOUT(KC_SAFE_RESET, DF(_UNIX), DF(_WINDOWS), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
               _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, _______, 
               _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
               _______, _______, _______, BL_DEC, BL_TOGG, BL_INC, _______, _______, _______, _______, _______, _______, _______, _______, 
               _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)
};