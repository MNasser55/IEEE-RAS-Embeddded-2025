/*
 * main.c
 *
 *  Created on: Aug 6, 2025
 *      Author: MNasser
 */


#include "../inc/TIMER.h"
#include "../inc/LED.h"
#include "../inc/seven_segment.h"



int main(void)
{
    LED_init();
    TIMER0_init();
    SevenSegment_Init();

    while (1)
    {
       countdown(15, RED_LED_PORT, RED_LED_PIN);
       countdown(5,  YELLOW_LED_PORT, YELLOW_LED_PIN);
       countdown(10, GREEN_LED_PORT, GREEN_LED_PIN);
   }

}


