/*
 * KEYPAD.h
 *
 *  Created on: Aug 25, 2025
 *      Author: MNasser
 */

#ifndef HAL_KEYPAD_H_
#define HAL_KEYPAD_H_
#include "../../MCAL/GPIO.h"


#define KEYPAD_NO_PRESSED 0xFF

#define KEYPAD_PORT PORTD
#define KEYPAD_DDR  DDRD
#define KEYPAD_PIN  PIND

void KEYPAD_Init(void);
char KEYPAD_GetKey(void);

#endif



