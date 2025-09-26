/*
 * TIMER.c
 *
 *  Created on: Aug 7, 2025
 *      Author: MNasser
 */
#include "../inc/TIMER.h"
#include "../inc/LED.h"
#include "../inc/seven_segment.h"
#include "../inc/GPIO.h"
void TIMER0_init(void)
{
    // Normal Mode = WGM01 = 0, WGM00 = 0 (by default)
    // Prescaler = 64 => CS01 = 1, CS00 = 1
    TCCR0 = (1 << CS01) | (1 << CS00);
}

void TIMER0_delay_ms(uint16_t ms)
{
    // Overflow كل 16.384 ms على 1MHz clock
    // لو عايز تعمل Delay لعدد ms، نحسب عدد الـ Overflows المطلوبة

    uint16_t overflows = ms / 16.384;

    for (uint16_t i = 0; i < overflows; i++)
    {
        TCNT0 = 0; // Reset counter
        while ((TIFR & (1 << TOV0)) == 0); // استنى لما يحصل overflow
        TIFR |= (1 << TOV0); // امسح الفلاج
    }


}
void countdown(uint8_t seconds, uint8_t led_port, uint8_t led_pin)
{
	LED_on(led_port, led_pin);
	for (int i=seconds;i>0;i--){
if (i>9){
	SevenSegment_DisplayDigit(PORT_C,i-10);
	SevenSegment_DisplayDigit(PORT_D,1);

}else{
    SevenSegment_DisplayDigit(PORT_C,i);
    SevenSegment_DisplayDigit(PORT_D,0);
}
		TIMER0_delay_ms(1000);
    }
	  LED_off(led_port, led_pin);

    }


