#include <avr/wdt.h>
void wdt_enable_2s(void){ wdt_enable(WDTO_2S); }
void wdt_kick(void){ wdt_reset(); }