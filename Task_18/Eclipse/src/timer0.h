#ifndef TIMER0_H
#define TIMER0_H
#include <stdint.h>
void timer0_init_ctc_1ms(void); /* OCR0=249 presc 64 @ 16MHz */
void timer0_delay_ms(uint16_t ms);   /* polling OCF0 */
void timer0_init_fast_pwm(void);     /* OC0 (PB3), non-inverting */
void timer0_set_duty(uint8_t duty);  /* 0..255 */
#endif