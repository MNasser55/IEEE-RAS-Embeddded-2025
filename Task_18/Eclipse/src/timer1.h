#ifndef TIMER1_H
#define TIMER1_H
#include <stdint.h>
void timer1_init_icu(void);           /* presc=8, capture rising first */
uint16_t timer1_capture_pulse_us(void); /* echo width in microseconds */
#endif