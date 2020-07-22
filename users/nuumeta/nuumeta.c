#include "nuumeta.h"
#include "quantum.h"
#include "action.h"

__attribute__((weak)) void keyboard_post_init_keymap(void) {}

void keyboard_post_init_user(void) {
#if defined(RGBLIGHT_ENABLE)
    keyboard_post_init_rgb_light();
#endif
    keyboard_post_init_keymap();
}