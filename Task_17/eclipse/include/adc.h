#ifndef ADC_H
#define ADC_H

#include <stdint.h>

void adc_init(void);
/* Read single-ended channel (0..7) on ATmega32, returns 10-bit result (0..1023) */
uint16_t adc_read(uint8_t ch);

#endif /* ADC_H */