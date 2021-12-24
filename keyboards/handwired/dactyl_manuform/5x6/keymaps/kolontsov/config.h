#pragma once

#define EE_HANDS

#undef RGB_DI_PIN
#undef RGBLED_NUM

#define RGB_DI_PIN D1
#define RGBLED_NUM 24
#define RGBLED_SPLIT { 12, 12 }
#define RGBLIGHT_SLEEP
#define RGBLIGHT_LIMIT_VAL 150
#define RGBLIGHT_EFFECT_STATIC_LIGHT
