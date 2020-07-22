#pragma once
#include QMK_KEYBOARD_H

#include "version.h"
#include "eeprom.h"
#include "quantum.h"
#include "layout_macros.h"

#if defined(RGBLIGHT_ENABLE)
#    include "rgb_layers.h"
#endif

// Init macro keycodes, define what they do in <name>.c
enum custom_keys {
    MCSG3 = SAFE_RANGE,
    MCSG4,
    MGF2
};

enum userspace_layers {
    _QWERTY  = 0,
    _FUNCTIONS,
    _SETTINGS
};