/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define ADJUST MO(_ADJUST)

#define LANG LGUI(KC_SPC)
#define ALFRED HYPR(KC_QUOT)

// https://precondition.github.io/home-row-mods#cags

//#define HOME_ROW_MOD 1

#ifdef HOME_ROW_MOD
// Left-hand home row mods
#define HOME_A LCTL_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LGUI_T(KC_S)
#define HOME_T LSFT_T(KC_T)
// Right-hand home row mods
#define HOME_N RSFT_T(KC_N)
#define HOME_E RGUI_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O RCTL_T(KC_O)
#else
#define HOME_A KC_A
#define HOME_R KC_R
#define HOME_S KC_S
#define HOME_T KC_T
// Right-hand home row mods
#define HOME_N KC_N
#define HOME_E KC_E
#define HOME_I KC_I
#define HOME_O KC_O
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,        KC_6, KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS,
     KC_TAB,  KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,        KC_J, KC_L,   KC_U,    KC_Y,   KC_SCLN, KC_EQL,
     KC_LCTL, HOME_A, HOME_R, HOME_S, HOME_T, KC_G,        KC_M, HOME_N, HOME_E,  HOME_I, HOME_O,  KC_QUOT,
     KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_D,   KC_V,        KC_K, KC_H,   KC_COMM, KC_DOT, KC_SLSH, KC_BSLASH,
                      KC_GRV, KC_HYPR,                                   KC_LBRC, KC_RBRC,
                                      KC_SPC , _______,    _______, KC_ENT,
                                        KC_LALT, LOWER,    RAISE,   KC_RGUI,
                                        LANG, KC_LGUI,     KC_BSPC,  ALFRED
  ),

  [_LOWER] = LAYOUT_5x6(

     _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
     _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
     _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______ , _______,
                       _______, _______,                                        _______, _______,
                                         _______, _______,    _______, _______, 
                                         _______, _______,    ADJUST,  _______,
                                         _______, _______,    _______, _______

  ),

  [_RAISE] = LAYOUT_5x6(
     _______, KC_F1,   KC_F2,   KC_F3,  KC_F4,     KC_F5,     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
     _______, _______, _______, _______, _______, _______,    _______, _______, KC_UP,   _______, _______, _______,
     _______, _______, _______, _______, _______, _______,    _______, KC_LEFT, KC_DOWN, KC_RIGHT,_______, _______,
     _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
                       _______, _______,                                        _______, _______,
                                         _______, _______,    _______, _______,
                                         _______, ADJUST,     _______, _______,
                                         _______, _______,    _______, _______
  ),

  [_ADJUST] = LAYOUT_5x6(
     RESET,   _______, _______, _______, _______, _______,     _______, _______, KC_MUTE, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,     _______, _______, KC_VOLU, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,     _______, _______, KC_VOLD, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,     _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______,
                       _______, _______,                                         _______, _______,                           
                                         _______, _______,     _______, _______,                                           
                                         _______, _______,     _______, _______,                                            
                                         _______, _______,     _______, _______                                             
)
};
