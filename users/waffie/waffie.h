#pragma once

#include "quantum.h"

// Macro Declaration
enum userspace_custom_keycodes {
  QWERTY = SAFE_RANGE,
  IT_EACC, //prints è or é based on shift status
  IT_AACC, //prints à
  IT_IACC, //prints ì
  IT_OACC, //prints ò
  IT_UACC, //prints ù 
  SC_TSKM, //opens task manager
};


// Tap Dance declarations
enum {
    RST,
    CAP,
};

