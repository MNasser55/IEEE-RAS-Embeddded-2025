#include "../include/registers.h"
#include "../include/adc.h"
#include "../include/gpio.h"
#include "../include/lcd.h"
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

static void show_value(uint16_t adc)
{
    /* Map ADC (0..1023) -> LEDs (0..8) */
    uint8_t leds = (uint32_t)adc * 8 / 1023;
    leds_set_count(leds);

    /* Percentage (0..100) with simple rounding */
    uint16_t pct = (uint32_t)adc * 100 / 1023;

    char line[17];
    LCD_GoTo(0,0);
    snprintf(line, sizeof(line), "ADC:%4u      ", adc);
    LCD_WriteString(line);

    LCD_GoTo(1,0);
    snprintf(line, sizeof(line), "Pct:%3u%%     ", pct);
    LCD_WriteString(line);
}

int main(void)
{
    leds_init();
    LCD_Init();
    adc_init();

    LCD_GoTo(0,0);
    LCD_WriteString("Analog to LEDs");
    _delay_ms(100);
    LCD_Clear();

    while (1)
    {
        uint16_t val = adc_read(ADC_CHANNEL_DEFAULT);
        show_value(val);
        _delay_ms(100);
    }

    return 0;
}
