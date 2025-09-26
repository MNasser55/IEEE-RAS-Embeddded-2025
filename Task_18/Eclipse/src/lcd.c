#include "config.h"
#include "lcd.h"
#include <avr/io.h>
#include <util/delay.h>

static void pulse(void){ LCD_PORT |= (1<<LCD_EN_PIN); _delay_us(1); LCD_PORT &= ~(1<<LCD_EN_PIN); _delay_us(100); }
static void write4(uint8_t n){
    uint8_t mask=(1<<LCD_D4_PIN)|(1<<LCD_D5_PIN)|(1<<LCD_D6_PIN)|(1<<LCD_D7_PIN);
    LCD_PORT &= ~mask;
    if(n&1) LCD_PORT |= (1<<LCD_D4_PIN);
    if(n&2) LCD_PORT |= (1<<LCD_D5_PIN);
    if(n&4) LCD_PORT |= (1<<LCD_D6_PIN);
    if(n&8) LCD_PORT |= (1<<LCD_D7_PIN);
    pulse();
}
static void write(uint8_t v,uint8_t rs){
    if(rs) LCD_PORT |= (1<<LCD_RS_PIN); else LCD_PORT &= ~(1<<LCD_RS_PIN);
    write4(v>>4); write4(v & 0x0F);
}
void lcd_cmd(uint8_t c){ write(c,0); _delay_ms(2); }
void lcd_putc(char c){ write((uint8_t)c,1); }
void lcd_puts(const char* s){ while(*s) lcd_putc(*s++); }
void lcd_goto(uint8_t r,uint8_t c){ static const uint8_t off[]={0x00,0x40,0x14,0x54}; lcd_cmd(0x80 | (off[r&3]+c)); }
void lcd_clear(void){ lcd_cmd(0x01); _delay_ms(2); }
void lcd_init(void){
    LCD_DDR |= (1<<LCD_RS_PIN)|(1<<LCD_EN_PIN)|(1<<LCD_D4_PIN)|(1<<LCD_D5_PIN)|(1<<LCD_D6_PIN)|(1<<LCD_D7_PIN);
    _delay_ms(40);
    LCD_PORT &= ~((1<<LCD_RS_PIN)|(1<<LCD_EN_PIN));
    write4(0x03); _delay_ms(5);
    write4(0x03); _delay_us(150);
    write4(0x03); _delay_us(150);
    write4(0x02);
    lcd_cmd(0x28); lcd_cmd(0x0C); lcd_cmd(0x06); lcd_clear();
}