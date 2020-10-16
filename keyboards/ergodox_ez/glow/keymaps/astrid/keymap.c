#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           MT(MOD_HYPR, KC_CAPSLOCK),                                MT(MOD_HYPR, KC_AUDIO_MUTE),KC_6,           KC_7,           KC_8,           MT(MOD_MEH, KC_9),LSA_T(KC_0),    TG(1),
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_BRIGHTNESS_UP,                                KC_AUDIO_VOL_UP,KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_BSPACE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_DELETE,
    KC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           SCMD_T(KC_BRIGHTNESS_DOWN),                                KC_AUDIO_VOL_DOWN,KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSPC,
    KC_LCTRL,       TG(5),          LCTL(KC_LSHIFT),KC_LGUI,        KC_LALT,                                                                                                        KC_QUOTE,       KC_GRAVE,       OSL(3),         TG(2),          LCTL(KC_LSHIFT),
                                                                                                    KC_LBRACKET,    RGB_TOG,        LED_LEVEL,      KC_RBRACKET,
                                                                                                                    LSFT(KC_INSERT),KC_ASTG,
                                                                                    LT(7,KC_SPACE), LT(4,KC_MINUS), KC_UNDS,        KC_PLUS,        LT(6,KC_EQUAL), LT(7,KC_ENTER)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_0,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    OSL(7),         KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_6,           KC_7,           KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_8,           KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_TRANSPARENT, KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    TO(0),          KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN4,     KC_MS_BTN3,     KC_NO,          KC_MS_BTN5,     KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_MS_BTN2,     KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(6),          KC_MS_BTN1
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, LALT(LGUI(KC_1)),LALT(LGUI(KC_2)),LALT(LGUI(KC_3)),LALT(LGUI(KC_4)),LALT(LGUI(KC_5)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LGUI(KC_6)),LALT(LGUI(KC_7)),LALT(LGUI(KC_8)),LALT(LGUI(KC_9)),LALT(LGUI(KC_0)),KC_TRANSPARENT,
    KC_TRANSPARENT, LGUI(KC_F1),    LGUI(KC_F2),    LGUI(KC_F3),    LGUI(KC_F4),    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LGUI(KC_F5),    LGUI(KC_F6),    LGUI(KC_F7),    LGUI(KC_F8),    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(KC_KP_4)),KC_TRANSPARENT, LALT(LGUI(KC_KP_6)),
    KC_TRANSPARENT, LGUI(KC_F9),    LGUI(KC_F10),   LGUI(KC_F11),   LGUI(KC_F12),   KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_KP_1),  LGUI(KC_KP_2),  LGUI(KC_KP_3),  LALT(LGUI(KC_KP_1)),LALT(LGUI(KC_KP_2)),LALT(LGUI(KC_KP_3)),
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 LGUI(KC_KP_0),  KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(KC_KP_0)),KC_RSHIFT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LGUI(KC_SPACE), LGUI(KC_MINUS), KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_EQUAL), LSFT(KC_LGUI)
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_0,           KC_9,           KC_8,           KC_7,           KC_6,           KC_AUDIO_MUTE,                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_BSLASH,      KC_P,           KC_O,           KC_I,           KC_U,           KC_Y,           KC_AUDIO_VOL_UP,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_DELETE,      KC_SCOLON,      KC_L,           KC_K,           KC_J,           KC_H,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_RSPC,        KC_SLASH,       KC_DOT,         KC_COMMA,       KC_M,           KC_N,           KC_AUDIO_VOL_DOWN,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE,       KC_QUOTE,                                                                                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 MAGIC_TOGGLE_NKRO,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, WEBUSB_PAIR,    RESET,
    KC_TRANSPARENT, LSFT(KC_F5),    KC_NO,          LSFT(KC_F11),   LCTL(KC_F10),   KC_NO,          KC_TRANSPARENT,                                 KC_ASUP,        KC_MEDIA_REWIND,KC_WWW_SEARCH,  KC_WWW_FAVORITES,KC_MEDIA_FAST_FORWARD,KC_NO,          KC_CALCULATOR,
    KC_TRANSPARENT, KC_F5,          KC_F9,          KC_F11,         KC_F10,         KC_NO,                                                                          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_MEDIA_NEXT_TRACK,KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_ASDN,        KC_WWW_HOME,    KC_MAIL,        KC_MY_COMPUTER, KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ASUP,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ASDN,        KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_INSERT,                                      DYN_REC_STOP,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_PSCREEN,     DYN_MACRO_PLAY1,                                DYN_REC_START1, KC_NUMLOCK,     KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRANSPARENT,                                                                 KC_RBRACKET,    KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ASTERISK, KC_TRANSPARENT,
    KC_LSHIFT,      KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, DYN_MACRO_PLAY2,                                DYN_REC_START2, KC_EQUAL,       KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_MINUS,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_APPLICATION, OSM(MOD_LGUI),  OSM(MOD_LALT),                                                                                                  KC_RALT,        KC_KP_0,        KC_KP_DOT,      KC_KP_PLUS,     KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {255,220,201}, {255,220,201}, {14,222,242}, {33,255,255}, {85,203,158}, {255,220,201}, {14,222,242}, {33,255,255}, {14,222,242}, {85,203,158}, {10,225,255}, {14,222,242}, {33,255,255}, {85,203,158}, {180,255,233}, {14,222,242}, {33,255,255}, {85,203,158}, {180,255,233}, {205,255,255}, {85,203,158}, {180,255,233}, {205,255,255}, {205,255,255}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {233,218,217}, {233,218,217}, {233,218,217}, {233,218,217}, {233,218,217}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {233,218,217}, {233,218,217}, {233,218,217}, {233,218,217}, {233,218,217}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233} },

    [1] = { {255,220,201}, {255,220,201}, {255,220,201}, {255,220,201}, {255,220,201}, {14,222,242}, {14,222,242}, {14,222,242}, {14,222,242}, {14,222,242}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {205,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {233,218,217}, {233,218,217}, {233,218,217}, {233,218,217}, {255,220,201}, {255,220,201}, {255,220,201}, {255,220,201}, {255,220,201}, {255,220,201}, {255,220,201}, {255,220,201}, {255,220,201}, {255,220,201}, {205,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {180,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {180,255,233} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,183,238}, {0,0,0}, {0,183,238}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {0,0,0}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {254,198,190}, {254,198,190}, {254,198,190}, {254,198,190}, {254,198,190}, {233,218,217}, {233,218,217}, {233,218,217}, {50,153,244}, {50,153,244}, {233,218,217}, {233,218,217}, {233,218,217}, {50,153,244}, {50,153,244}, {233,218,217}, {233,218,217}, {233,218,217}, {50,153,244}, {50,153,244}, {233,218,217}, {0,0,0}, {0,0,0}, {50,153,244}, {254,198,190}, {254,198,190}, {254,198,190}, {254,198,190}, {254,198,190}, {0,0,0}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {10,225,255}, {31,255,255}, {195,61,255}, {195,61,255}, {31,255,255}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {195,61,255}, {195,61,255}, {195,61,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {32,176,255}, {32,176,255}, {0,0,0}, {243,222,234}, {0,0,0}, {32,176,255}, {32,176,255}, {32,176,255}, {243,222,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,222,242}, {14,222,242}, {14,222,242}, {14,222,242}, {0,0,0}, {180,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {0,0,0}, {252,119,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {233,218,217}, {233,218,217}, {233,218,217}, {233,218,217}, {233,218,217}, {154,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {154,255,255}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {154,255,255}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {154,255,255}, {154,255,255}, {31,255,255}, {154,255,255}, {154,255,255}, {233,218,217}, {233,218,217}, {233,218,217}, {233,218,217}, {233,218,217}, {154,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
