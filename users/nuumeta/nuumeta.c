#include "nuumeta.h"
#include "quantum.h"
#include "action.h"

__attribute__ ((weak)) // what is this for?

enum userspace_layers {
    KC_MAKE = SAFE_RANGE,
    NEW_SAFE_RANGE,  // use "NEW_SAFE_RANGE" for keymap specific codes
    BL,
    FL
};