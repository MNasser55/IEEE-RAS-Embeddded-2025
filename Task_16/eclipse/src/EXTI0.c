#include "../include/EXTI0.h"

static void (*exti0_callback)(void) = 0;

static void exti0_apply_sense(EXTI0_Sense_t sense) {
    switch(sense) {
        case EXTI0_LOW_LEVEL:
            CLR_BIT(MCUCR, ISC00);
            CLR_BIT(MCUCR, ISC01);
            break;
        case EXTI0_ANY_CHANGE:
            SET_BIT(MCUCR, ISC00);
            CLR_BIT(MCUCR, ISC01);
            break;
        case EXTI0_FALLING_EDGE:
            CLR_BIT(MCUCR, ISC00);
            SET_BIT(MCUCR, ISC01);
            break;
        case EXTI0_RISING_EDGE:
            SET_BIT(MCUCR, ISC00);
            SET_BIT(MCUCR, ISC01);
            break;
    }
}

void EXTI0_init(EXTI0_Sense_t sense, void (*cb)(void)) {
    // Input with pull-up on PD2 (INT0)
    CLR_BIT(DDRD, PD2);
    SET_BIT(PORTD, PD2); // enable internal pull-up

    exti0_apply_sense(sense);
    EXTI0_clearFlag();
    EXTI0_setCallback(cb);
    EXTI0_enable();
}

void EXTI0_enable(void) {
    SET_BIT(GICR, INT0);
}

void EXTI0_disable(void) {
    CLR_BIT(GICR, INT0);
}

void EXTI0_setCallback(void (*cb)(void)) {
    exti0_callback = cb;
}

void EXTI0_clearFlag(void) {
    // write 1 to clear
    SET_BIT(GIFR, INTF0);
}

// ISR
ISR(INT0_vect) {
    if (exti0_callback) {
        exti0_callback();
    }
}
