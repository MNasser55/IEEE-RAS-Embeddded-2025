#include "../include/lcd.h"
#include <util/delay.h>


void LCD_Command(uint8_t cmd)
{
    LCD_PORT = (LCD_PORT & 0x0F) | (cmd & 0xF0);
    LCD_PORT &= ~(1<<RS);
    LCD_PORT |= (1<<EN);
    _delay_us(1);
    LCD_PORT &= ~(1<<EN);
    _delay_us(200);

    LCD_PORT = (LCD_PORT & 0x0F) | (cmd<<4);
    LCD_PORT |= (1<<EN);
    _delay_us(1);
    LCD_PORT &= ~(1<<EN);
    _delay_ms(2);
}

void LCD_Init(void)
{
    LCD_DDR = 0xFF;
    _delay_ms(20);
    LCD_Command(0x02);
    LCD_Command(0x28);
    LCD_Command(0x0C);
    LCD_Command(0x06);
    LCD_Command(0x01);
}

void LCD_Clear(void)
{
    LCD_Command(0x01);     // Clear display
    _delay_ms(5);          // بدل 2ms خلّيها 5ms للآمان
    LCD_Command(0x80);     // Go to DDRAM address 0 (Home)
    _delay_ms(1);
}

void LCD_WriteChar(char c)
{
    LCD_PORT = (LCD_PORT & 0x0F) | (c & 0xF0);
    LCD_PORT |= (1<<RS);
    LCD_PORT |= (1<<EN);
    _delay_us(1);
    LCD_PORT &= ~(1<<EN);

    LCD_PORT = (LCD_PORT & 0x0F) | (c<<4);
    LCD_PORT |= (1<<EN);
    _delay_us(1);
    LCD_PORT &= ~(1<<EN);
    _delay_ms(2);
}

void LCD_WriteString(const char* str)
{
    while(*str)
    {
        LCD_WriteChar(*str++);
    }
}

void LCD_WriteInteger(int num)
{
    char buffer[16];
    itoa(num, buffer, 10);
    LCD_WriteString(buffer);
}

void LCD_CreateCustomChar(uint8_t location, uint8_t *pattern)
{
    location &= 0x07;                 // مسموح 0..7
    LCD_Command(0x40 | (location<<3)); // عنوان CGRAM = 0x40 + (loc*8)
    for (uint8_t i = 0; i < 8; i++)
        LCD_WriteChar(pattern[i]);    // نكتب صفوف الباترن كـ Data
    LCD_Command(0x80);                // رجوع لـ DDRAM
}

void LCD_GoTo(uint8_t row, uint8_t col)
{
    // row: 0 أو 1 / col: 0..15
    uint8_t base = (row == 0) ? 0x00 : 0x40;
    LCD_Command(0x80 | (base + col));
}
