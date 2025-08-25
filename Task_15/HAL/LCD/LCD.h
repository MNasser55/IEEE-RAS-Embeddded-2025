/*
 * LCD.h
 *
 *  Created on: Aug 25, 2025
 *      Author: MNasser
 */
#include "../../LIB/std_types.h"
#include "../../MCAL/GPIO.h"
#ifndef HAL_LCD_H_
#define HAL_LCD_H_

void LCD_Init(void);
void LCD_Clear(void);
void LCD_WriteChar(char c);
void LCD_WriteString(const char* str);
void LCD_WriteInteger(int num);
void LCD_CreateCustomChar(uint8_t location, uint8_t *pattern);
void LCD_GoTo(uint8_t row, uint8_t col);

#define LCD_PORT PORTC
#define LCD_DDR  DDRC
#define RS PIN0
#define EN PIN1


#endif /* HAL_LCD_H_ */
