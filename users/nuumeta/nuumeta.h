#pragma once
#include QMK_KEYBOARD_H

#include "version.h"
#include "eeprom.h"
#include "quantum.h"
#include "layout_macros.h"

#if defined(RGBLIGHT_ENABLE)
#    include "rgb_layers.h"
#endif

#ifdef TAP_DANCE_ENABLE
#    include "tap_dances.h"
#endif  // TAP_DANCE_ENABLE

// Init macro keycodes, define what they do in <name>.c
enum custom_keys {
    MCSG3 = SAFE_RANGE,
    MCSG4,
    MGF2
};

enum userspace_layers {
    _UNIX  = 0,
    _WINDOWS,
    _FUNCTIONS,
    _SETTINGS,
    _MACROS,
    _VIM
};

#ifdef TAP_DANCE_ENABLE
#    define KC_SAFE_RESET TD(TD_SAFE_RESET)
#else  // TAP_DANCE_ENABLE
#    define KC_SAFE_RESET RESET
#endif  // TAP_DANCE_ENABLE
