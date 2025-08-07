/*
 * seven_segment.h
 *
 *  Created on: Aug 7, 2025
 *      Author: MNasser
 */

#ifndef INC_SEVEN_SEGMENT_H_
#define INC_SEVEN_SEGMENT_H_
#include "GPIO.h"
#include "registers.h"

// Segment Pins
#define SEG_A_PIN   0
#define SEG_B_PIN   1
#define SEG_C_PIN   2
#define SEG_D_PIN   3
#define SEG_E_PIN   4
#define SEG_F_PIN   5
#define SEG_G_PIN   6

#define SEG1_PORT     'C'
#define SEG2_PORT     'D'

// Digit Select Pins
#define DIGIT1_PIN  0
#define DIGIT2_PIN  1
#define DIGIT_PORT  'B'

void SevenSegment_Init(void);
void SevenSegment_DisplayDigit(uint8_t SEG_PORT,uint8_t number);

#endif /* INC_SEVEN_SEGMENT_H_ */
