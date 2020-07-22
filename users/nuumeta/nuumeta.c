#include "nuumeta.h"
#include "quantum.h"
#include "action.h"


__attribute__((weak)) void keyboard_post_init_keymap(void) {}

void keyboard_post_init_user(void) {
    keyboard_post_init_rgb_light();
    keyboard_post_init_keymap();
}