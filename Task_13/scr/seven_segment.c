/*
 * seven_segment.c
 *
 *  Created on: Aug 7, 2025
 *      Author: MNasser
 */

#include "../inc/seven_segment.h"
#include "../inc/TIMER.h"
#include "../inc/LED.h"
static uint8_t segmentMap[10] = {
    // gfedcba (Common Cathode)
    0b00111111, // 0
    0b00000110, // 1
    0b01011011, // 2
    0b01001111, // 3
    0b01100110, // 4
    0b01101101, // 5
    0b01111101, // 6
    0b00000111, // 7
    0b01111111, // 8
    0b01101111  // 9
};

void SevenSegment_Init(void)
{
    // Set segment pins as output
	 GPIO_SetPortDirection(SEG1_PORT, 0xFF); // a-g on PIN0 to PIN7
	 GPIO_SetPortDirection(SEG2_PORT, 0x7F); // a-g on PIN0 to PIN7

}

void SevenSegment_DisplayDigit(uint8_t SEG_PORT, uint8_t number)
{

    GPIO_WritePort(SEG_PORT, segmentMap[number]);


    TIMER0_delay_ms(2); // short delay to avoid flickering
}



