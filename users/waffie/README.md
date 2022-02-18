Waffie QMK Userspace
========================
# Overview
Defines some custom keycodes, they are used mainly for typing IT characters while using a standard ANSI layout with US keycaps.

## Additional Notes
Requires windows _United States (International Alternate)_ layout or any other layout that switches dead keys on AltGr in order to work properly.
Can be used with the standard US INTERNATIONAL keyboard layout but you will have dead keys that are pretty annoying.
Download Link: https://keyboards.jargon-file.org/

## Custom Keycodes
----
### Italian vowels
- `KC_AACC` inputs à or á when shifted
- `KC_EACC` inputs è or é when shifted
- `KC_IACC` inputs ì or í when shifted
- `KC_OACC` inputs ò or ó when shifted
- `KC_UACC` inputs ù or ú when shifted

### Utilities
- `SC_TSKM` Opens Task Manager

## QMK Features
----
### NKRO Toggle RGB lighting layer
Gives a visual advice when you toggle NKRO (RGB lights will flash red or green depending from the NKRO status).
Requires `RGBLIGHT_LAYERS`, `RGBLIGHT_LAYER_BLINK` and `RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF`

### Tap Dance for Reset and CAPS
- `TD(RST)` 4+ taps to reset EEPROM
- `TD(CAP)` Double tap to CAPLOCK
