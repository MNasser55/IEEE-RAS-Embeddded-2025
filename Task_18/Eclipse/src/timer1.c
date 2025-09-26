#include <avr/io.h>
#include "timer1.h"

void timer1_init_icu(void){
    TCCR1A = 0x00;
    TCCR1B = (1<<ICES1) | (1<<CS11); /* rising, presc=8 (tick=0.5us) */
    TIFR |= (1<<ICF1)|(1<<TOV1);
}

uint16_t timer1_capture_pulse_us(void){
    /* rising */
    TCCR1B |= (1<<ICES1);
    TIFR |= (1<<ICF1);
    while(!(TIFR & (1<<ICF1))){}
    uint16_t start = ICR1;
    /* falling */
    TCCR1B &= ~(1<<ICES1);
    TIFR |= (1<<ICF1);
    while(!(TIFR & (1<<ICF1))){}
    uint16_t end = ICR1;
    uint16_t ticks = end - start; /* 0.5us per tick */
    return (ticks >> 1);
}