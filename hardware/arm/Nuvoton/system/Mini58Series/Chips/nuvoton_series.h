
#include "Mini58Series.h"

#define GPIO_PIN_REGADR(port, pin) ((GPIOBIT0_BASE+(0x20*(port))) + ((pin)<<2))
