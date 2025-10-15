// Copyright 2024 Santosh Kumar (@santosh)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define TRI_LAYER_LOWER_LAYER 2
#define TRI_LAYER_UPPER_LAYER 3
#define TRI_LAYER_ADJUST_LAYER 4

#define MASTER_LEFT
#define POINTING_DEVICE_RIGHT


#define SPLIT_POINTING_ENABLE
#define CIRQUE_PINNACLE_ADDR 0x2A
#define CIRQUE_PINNACLE_DIAMETER_MM 40
#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_INVERT_Y
#define CIRQUE_PINNACLE_TAP_ENABLE
#define CIRQUE_PINNACLE_CURVED_OVERLAY
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
#define POINTING_DEVICE_RIGHT

#ifdef CIRQUE_PINNACLE_ATTENUATION
    #undef CIRQUE_PINNACLE_ATTENUATION
    #define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_3x

#endif

#define SPLIT_OLED_ENABLE
#define OLED_BRIGHTNESS	100
#define OLED_SCROLL_TIMEOUT 1200000
#define OLED_TIMEOUT 120000
#define OLED_FADE_OUT

#ifdef RGB_MATRIX_ENABLE

    #define RGBLIGHT_SPLIT
    #define RGB_MATRIX_KEYPRESSES // reacts to keypresses
    #ifndef RGB_MATRIX_SPLIT
    #define RGB_MATRIX_SPLIT { 36, 36 } // changed from RGBLED_SPLIT
    #endif

    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
    #define RGB_MATRIX_HUE_STEP 8
    #define RGB_MATRIX_SAT_STEP 8
    #define RGB_MATRIX_VAL_STEP 8
    #define RGB_MATRIX_SPD_STEP 10

    #define RGB_MATRIX_DEFAULT_HUE 220 // Sets the default hue value, if none has been set
    #define RGB_MATRIX_DEFAULT_SAT 255 // Sets the default saturation value, if none has been set
    #define RGB_MATRIX_DEFAULT_SPD 50 // Sets the default animation speed, if none has been set
    #define RGB_MATRIX_DEFAULT_VAL 50 // Sets the default brightness value, if none has been set

    #define RGB_MATRIX_TIMEOUT 120000 // number of milliseconds to wait until rgb automatically turns off
    #define RGB_DISABLE_WHEN_USB_SUSPENDED  // turns off lights when PC is suspended
    #define RGBLED_SLEEP   // the RGB lighting will be switched off when the host goes to sleep
    // #define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS

    #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
    #undef RGB_MATRIX_DEFAULT_MODE
    #define RGB_MATRIX_DEFAULT_MODE  RGB_MATRIX_CYCLE_LEFT_RIGHT
    // #define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)

#endif

