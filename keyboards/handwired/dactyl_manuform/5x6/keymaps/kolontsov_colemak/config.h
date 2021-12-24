#pragma once

#undef RGB_DI_PIN
#undef RGBLED_NUM

#define USE_SERIAL

#define EE_HANDS
//#define MASTER_LEFT
//#define MASTER_RIGHT

// Underglow
#define RGB_DI_PIN D1
#define RGBLED_NUM 24    // Number of LEDs
#define RGBLED_SPLIT { 12, 12 }
#define RGBLIGHT_SLEEP
#define RGBLIGHT_LIMIT_VAL 150

#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_STATIC_LIGHT
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD

// taken from https://github.com/precondition/dactyl-manuform-keymap

// Default tapping term is 200
#define TAPPING_TERM 170
#define TAPPING_TERM_PER_KEY // See bottom of keymap.c

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// This prevents accidental repeats of the tap-hold keys when typing quickly.
#define TAPPING_FORCE_HOLD_PER_KEY

// Disable PERMISSIVE_HOLD
// (It's enabled dy default for all Dactyl Manuform boards,
// so it requires explicit undef to disable)
#undef PERMISSIVE_HOLD

// Other settings //
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

#define COMBO_TERM 70

// The setting below defines how many times you need to tap a TT() to toggle the layer.
#define TAPPING_TOGGLE 3

// Limits the max. amount of layers to 8 to save firmware memory.
#define LAYER_STATE_8BIT
