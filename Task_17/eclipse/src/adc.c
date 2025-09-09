#include "../include/registers.h"
#include "../include/adc.h"
#include <avr/io.h>

void adc_init(void)
{
	/* Use default channel ADC0 (PA0). Ensure PORTA pin is input (default). */
    DDRA &= ~(1 << PA0);
    /* Select reference: AVCC with external capacitor at AREF pin */
    ADMUX = (1 << REFS0); /* REFS1=0, REFS0=1 => AVCC, right adjusted by default */

    /* ADC prescaler  */
    ADCSRA |=(1 << ADEN)  ;

}

uint16_t adc_read(uint8_t ch)
{
    ch &= 0x07;                /* Only channels 0..7 on ATmega32 */
    ADMUX = (ADMUX & 0xE0) | ch; /* Keep REFS bits, set MUX */
    ADCSRA |= (1 << ADSC);     /* Start conversion */

    while (ADCSRA & (1 << ADSC)) { /* Wait for conversion to complete */ }

    /* Read ADCL first then ADCH (10-bit result) */
    uint8_t low = ADCL;
    uint8_t high = ADCH;
    return (uint16_t)((high << 8) | low);
}
