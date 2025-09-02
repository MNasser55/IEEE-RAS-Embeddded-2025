#include "../include/util.h"
#include "../include/gpio.h"
#include "../include/EXTI0.h"
#include "../include/EXTI1.h"
#include "../include/lcd.h"
#include "../include/sevenseg.h"

#define LED_PORT PORTD
#define LED_DDR  DDRD
#define LED_PIN  PD5

volatile uint8_t counter = 1;

static void on_button_toggle_led(void) {
    // INT0 -> toggle LED
    TOG_BIT(LED_PORT, LED_PIN);
}

static void on_button_reset_counter(void) {
    // INT1 -> reset counter to 1
    counter = 1;
}

int main(void) {
    // LED pin output
    SET_BIT(LED_DDR, LED_PIN);
    CLR_BIT(LED_PORT, LED_PIN);


    LCD_Init();
    sevenseg_init();

    EXTI0_init(EXTI0_FALLING_EDGE, on_button_toggle_led); // PD2 with pull-up
    EXTI1_init(EXTI1_FALLING_EDGE, on_button_reset_counter); // PD3 with pull-up

    sei(); // global enable

    LCD_WriteString("CNT:");
    while (1) {
        // Show counter on LCD and 7-seg
    	LCD_GoTo(0, 4);
    	LCD_WriteString("   ");
        LCD_GoTo(0, 4);
        LCD_WriteInteger(counter);

        sevenseg_show(counter);

        // advance 1..9
        counter++;
        if (counter > 9) counter = 1;

        _delay_ms(350);
    }
}
