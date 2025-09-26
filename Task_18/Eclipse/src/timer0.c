#include "config.h"
#include "timer0.h"
#include <avr/io.h>

void timer0_init_ctc_1ms(void){
    TCCR0 = (1<<WGM01); /* CTC */
    OCR0 = 249;         /* 1ms @ 16MHz, presc=64 */
    TCCR0 |= (1<<CS01)|(1<<CS00); /* presc=64 */
    TIFR |= (1<<OCF0);
}
void timer0_delay_ms(uint16_t ms){
    while(ms--){
        TCNT0 = 0;
        TIFR |= (1<<OCF0);
        while(!(TIFR & (1<<OCF0))){}
    }
}
void timer0_init_fast_pwm(void){
    LED_PWM_DDR |= (1<<LED_PWM_PIN);
    TCCR0 = (1<<WGM01)|(1<<WGM00) | (1<<COM01) | (1<<CS01)|(1<<CS00); /* Fast PWM, non-inv, presc 64 */
    OCR0 = 0;
}
void timer0_set_duty(uint8_t duty){
    OCR0 = duty;
}