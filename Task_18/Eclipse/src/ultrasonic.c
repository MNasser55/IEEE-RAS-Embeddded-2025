#include "config.h"
#include "ultrasonic.h"
#include "timer1.h"
#include <avr/io.h>
#include <util/delay.h>

void ultrasonic_init(void){
    US_TRIG_DDR |= (1<<US_TRIG_PIN);
    US_TRIG_PORT &= ~(1<<US_TRIG_PIN);
    timer1_init_icu();
}
uint16_t ultrasonic_read_cm(void){
    US_TRIG_PORT |= (1<<US_TRIG_PIN);
    _delay_us(10);
    US_TRIG_PORT &= ~(1<<US_TRIG_PIN);
    uint16_t us = timer1_capture_pulse_us();
    return (uint16_t)(us / 58);
}