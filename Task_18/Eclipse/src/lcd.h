#ifndef LCD_H
#define LCD_H
#include <stdint.h>
void lcd_init(void);
void lcd_cmd(uint8_t c);
void lcd_putc(char c);
void lcd_puts(const char* s);
void lcd_goto(uint8_t r,uint8_t c);
void lcd_clear(void);
#endif