/*
 * TIMER.h
 *
 *  Created on: Aug 7, 2025
 *      Author: MNasser
 */
#include "registers.h"
#include "LED.h"

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include <stdint.h>

void TIMER0_init(void);
void TIMER0_delay_ms(uint16_t ms);

void countdown(uint8_t seconds, uint8_t led_port, uint8_t led_pin);

#endif /* INC_TIMER_H_ */
