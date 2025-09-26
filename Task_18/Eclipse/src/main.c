#include "config.h"
#include "adc.h"
#include "lcd.h"
#include "timer0.h"
#include "ultrasonic.h"
#include "wdt.h"
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

int main(void){
    lcd_init();
    adc_init();
    timer0_init_ctc_1ms();
    timer0_init_fast_pwm();
    ultrasonic_init();
    wdt_enable_2s();

    lcd_goto(0,0); lcd_puts("Task18 Demo");
    _delay_ms(600);
    lcd_clear();

    char line[17];
    while(1){
        uint16_t a = adc_read(ADC_POT_CH);
        uint8_t duty = (uint32_t)a * 255 / 1023;
        timer0_set_duty(duty);

        uint16_t cm = ultrasonic_read_cm();

        lcd_goto(0,0);
        snprintf(line,sizeof(line),"ADC:%4u D:%3u", a, duty);
        lcd_puts(line);
        lcd_goto(1,0);
        snprintf(line,sizeof(line),"Dist:%3ucm   ", cm);
        lcd_puts(line);

        wdt_kick();
        timer0_delay_ms(200);
    }
    return 0;
}