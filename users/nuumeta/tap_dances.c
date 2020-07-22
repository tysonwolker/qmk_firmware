#include "tap_dances.h"

void safe_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count >= 3) {
        // Reset the keyboard if you tap the key more than three times
        reset_keyboard();
        reset_tap_dance(state);
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_SAFE_RESET] = ACTION_TAP_DANCE_FN(safe_reset)
};

