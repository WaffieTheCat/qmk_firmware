Waffie QMK Userspace
========================
# Overview
Defines some custom keycodes, they are used mainly for typing IT characters while using a standard ANSI layout with US keycaps.

## Additional Notes
Requires windows _United States (International Alternate)_ layout or any other layout that switches dead keys on AltGr in order to work properly.
Can be used with the standard US INTERNATIONAL keyboard layout but you will have dead keys that are pretty annoying.
Download Link: https://keyboards.jargon-file.org/


## Custom Keycodes
### Italian vowels
- `KC_AACC` inputs à or á when shifted
- `KC_EACC` inputs è or é when shifted
- `KC_IACC` inputs ì or í when shifted
- `KC_OACC` inputs ò or ó when shifted
- `KC_UACC` inputs ù or ú when shifted

### Utilities
- `SC_TSKM` Opens Task Manager


## QMK Features
### NKRO Toggle RGB lighting layer
Gives a visual advice when you toggle NKRO (RGB lights will flash red or green depending from the NKRO status).
Requires `RGBLIGHT_LAYERS`, `RGBLIGHT_LAYER_BLINK` and `RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF`

### Tap Dance for Reset and CAPS
- `TD(RST)` 4+ taps to reset EEPROM
- `TD(CAP)` Double tap to CAPLOCK


## License
_Copyright 2022 Waffie_

_This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version._

_This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details._

_You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>._
