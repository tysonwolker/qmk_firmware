#include "nuumeta.h"

const rgblight_segment_t PROGMEM bl_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLED_NUM, HSV_CYAN}
);

const rgblight_segment_t PROGMEM fl_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLED_NUM, HSV_MAGENTA}
);

// Now define the array of layers. Later layers take precedence
// const rgblight_segment_t *const PROGMEM rgb_light_layers[] = {
const rgblight_segment_t *const PROGMEM rgb_light_layers[] = RGBLIGHT_LAYERS_LIST(
    bl_layer,
    fl_layer
);

layer_state_t layer_state_set_user(layer_state_t state) {
    dprintf("in layer_state_set_user: %u\n", state);
    // Both layers will light up if both kb layers are active
    rgblight_set_layer_state(0, layer_state_cmp(state, _BL));
    rgblight_set_layer_state(1, layer_state_cmp(state, _FL));

    return state;
}

void keyboard_post_init_user(void) {
    // set initial animation type (in that I don’t want it)
    rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
    // set the default colour
    rgblight_sethsv_range(HSV_CYAN, 0, RGBLED_NUM);
    // Enable the LED layers
    rgblight_layers = rgb_light_layers;
}