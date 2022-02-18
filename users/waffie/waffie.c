#include "waffie.h"

/*
 * ┌──────────────────────────────────────────────────────────────────────────┐
 * |          S T A R T   O F   C O N F I R M A T I O N   L A Y E R S         |
 * └──────────────────────────────────────────────────────────────────────────┘
 */

// Defining Lighting layers
const rgblight_segment_t PROGMEM _yes_layer[] = RGBLIGHT_LAYER_SEGMENTS( {9, 6, HSV_GREEN} );
const rgblight_segment_t PROGMEM _no_layer[] = RGBLIGHT_LAYER_SEGMENTS( {9, 6, HSV_RED} );

const rgblight_segment_t* const PROGMEM _rgb_layers[] =
    RGBLIGHT_LAYERS_LIST( _yes_layer, _no_layer );

void keyboard_post_init_user(void) {
    rgblight_layers = _rgb_layers;
}

// Note we user post_process_record_user because we want the state AFTER the flag has been flipped ...
void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DEBUG:
            rgblight_blink_layer(debug_enable ? 0 : 1, 500);
            break;

        case NK_TOGG:
        case NK_ON:
        case NK_OFF:
            rgblight_blink_layer(keymap_config.nkro ? 0 : 1, 500);
            break;
    }
}

/*
 * ┌──────────────────────────────────────────────────────────────────────────┐
 * |               S T A R T   O F   T A P   D A N C E   C O D E              |
 * └──────────────────────────────────────────────────────────────────────────┘
 */

void dance_flash(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count >= 4) {
        reset_keyboard();
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [RST] = ACTION_TAP_DANCE_FN(dance_flash),
    [CAP] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};

/*
 * ┌──────────────────────────────────────────────────────────────────────────┐
 * |  S T A R T   O F   M A C R O S   A N D   A C C E N T E D   V O W E L S   |
 * └──────────────────────────────────────────────────────────────────────────┘
 */
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

       case IT_EACC:
        if (record->event.pressed){
          if (mod_state & MOD_MASK_SHIFT){
            del_mods(MOD_MASK_SHIFT);
            tap_code16(RALT(KC_E));
            set_mods(mod_state);
          } else {
            SEND_STRING(SS_RALT("`")SS_DELAY(75)"e");
          }
        }
      return false;
      break;

      case IT_AACC:
        if (record->event.pressed){
          if (get_mods() & MOD_BIT(KC_LSHIFT)){
            unregister_code16(KC_LSHIFT);
            tap_code16(RALT(KC_A));
            register_code16(KC_LSHIFT);
          } else {
            SEND_STRING(SS_RALT("`")SS_DELAY(75)"a");
          }
        }
      return false;
      break;

      case IT_IACC:
        if (record->event.pressed){
          if (get_mods() & MOD_BIT(KC_LSHIFT)){
            unregister_code16(KC_LSHIFT);
            tap_code16(RALT(KC_I));
            register_code16(KC_LSHIFT);
          } else {
            SEND_STRING(SS_RALT("`")SS_DELAY(75)"i");
          }
        }
      return false;
      break;

      case IT_OACC:
        if (record->event.pressed){
          if (get_mods() & MOD_BIT(KC_LSHIFT)){
            unregister_code16(KC_LSHIFT);
            tap_code16(RALT(KC_O));
            register_code16(KC_LSHIFT);
          } else {
            SEND_STRING(SS_RALT("`")SS_DELAY(75)"o");
          }
        }
      return false;
      break;

      case IT_UACC:
        if (record->event.pressed){
          if (get_mods() & MOD_BIT(KC_LSHIFT)){
            unregister_code16(KC_LSHIFT);
            tap_code16(RALT(KC_U));
            register_code16(KC_LSHIFT);
          } else {
            SEND_STRING(SS_RALT("`")SS_DELAY(75)"u");
          }
        }
      return false;
      break;

      case SC_TSKM:
        if (record->event.pressed){
            tap_code16(LCTL(LSFT(KC_ESC)));
        }
      return false;
      break;

    }
    return true;
};

