/*
 * LED.h
 *
 *  Created on: Aug 7, 2025
 *      Author: MNasser
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "registers.h"
#include "../inc/GPIO.h"
// Define LED pins
#define RED_LED_PORT    'A'
#define RED_LED_PIN      0

#define YELLOW_LED_PORT  'A'
#define YELLOW_LED_PIN   1

#define GREEN_LED_PORT  'A'
#define GREEN_LED_PIN    2

void LED_init(void);
void LED_on(uint8_t port, uint8_t pin);
void LED_off(uint8_t port, uint8_t pin);



#endif /* INC_LED_H_ */
