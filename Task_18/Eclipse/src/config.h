#ifndef CONFIG_H
#define CONFIG_H

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

/* LCD 4-bit on PORTB */
#define LCD_DDR      DDRB
#define LCD_PORT     PORTB
#define LCD_RS_PIN   PB0
#define LCD_EN_PIN   PB1
#define LCD_D4_PIN   PB4
#define LCD_D5_PIN   PB5
#define LCD_D6_PIN   PB6
#define LCD_D7_PIN   PB7

/* ADC */
#define ADC_POT_CH   0 /* PA0 */

/* Timer0 PWM LED (OC0) */
#define LED_PWM_DDR  DDRB
#define LED_PWM_PIN  PB3 /* OC0 */

/* Ultrasonic */
#define US_TRIG_DDR   DDRD
#define US_TRIG_PORT  PORTD
#define US_TRIG_PIN   PD7
/* Echo on ICP1 (PD6) */

#endif