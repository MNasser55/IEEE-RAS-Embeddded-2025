#include "../include/registers.h"
#include "../include/gpio.h"
#include <avr/io.h>

void leds_init(void)
{
    /* Configure LED pins as outputs */
    LED_DDR |= 0xFF; /* PC0..PC7 as outputs */

    LED_PORT &= ~(0xFF);

}

void leds_write_raw(uint8_t pattern)
{
    LED_PORT = (LED_PORT & ~0xFF) | (pattern & 0xFF);
}

void leds_set_count(uint8_t count)
{
    if (count > LED_COUNT) count = LED_COUNT;
    uint8_t pattern = 0;
    for (uint8_t i = 0; i < count; ++i) pattern |= (1 << i);
    leds_write_raw(pattern);
}
