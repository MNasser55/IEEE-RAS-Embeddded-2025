#ifndef LCD_H_
#define LCD_H_

#include"../include/gpio.h"
#include "util.h"

// Pin map (PORTB used, 4-bit mode)void LCD_Init(void);
void LCD_Init(void);
void LCD_Clear(void);
void LCD_WriteChar(char c);
void LCD_WriteString(const char* str);
void LCD_WriteInteger(int num);
void LCD_CreateCustomChar(uint8_t location, uint8_t *pattern);
void LCD_GoTo(uint8_t row, uint8_t col);

#define LCD_PORT PORTB
#define LCD_DDR  DDRB

#define EN PIN0
#define RS PIN1


#endif /* LCD_H_ */
