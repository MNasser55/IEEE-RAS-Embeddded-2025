/*
 * LED.c
 *
 *  Created on: Aug 7, 2025
 *      Author: MNasser
 */
#include "../inc/LED.h"
#include "../inc/GPIO.h"
void LED_init(void)
{
	GPIO_Init(RED_LED_PORT, RED_LED_PIN, OUTPUT);
	GPIO_Init(YELLOW_LED_PORT, YELLOW_LED_PIN,OUTPUT);
	GPIO_Init(GREEN_LED_PORT, GREEN_LED_PIN,OUTPUT);

    LED_off(RED_LED_PORT, RED_LED_PIN);
    LED_off(YELLOW_LED_PORT, YELLOW_LED_PIN);
    LED_off(GREEN_LED_PORT, GREEN_LED_PIN);
}

void LED_on(uint8_t port, uint8_t pin)
{
	GPIO_Setpin(port, pin, HIGH);
}

void LED_off(uint8_t port, uint8_t pin)
{
	 GPIO_Setpin(port, pin, LOW);
}

