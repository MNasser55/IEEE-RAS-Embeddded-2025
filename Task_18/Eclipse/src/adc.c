#include "config.h"
#include "adc.h"
#include <avr/io.h>

void adc_init(void){
    ADMUX = (1<<REFS0); /* AVCC */
    ADCSRA = (1<<ADEN) | (1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0); /* presc 128 */
}

uint16_t adc_read(uint8_t ch){
    ch &= 0x07;
    ADMUX = (ADMUX & 0xE0) | ch;
    ADCSRA |= (1<<ADSC);
    while(ADCSRA & (1<<ADSC)) { }
    uint8_t low = ADCL, high = ADCH;
    return ((uint16_t)high<<8) | low;
}