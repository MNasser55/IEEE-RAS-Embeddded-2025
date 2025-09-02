#include "../include/EXTI1.h"

static void (*exti1_callback)(void) = 0;

static void exti1_apply_sense(EXTI1_Sense_t sense) {
    switch(sense) {
        case EXTI1_LOW_LEVEL:
            CLR_BIT(MCUCR, ISC10);
            CLR_BIT(MCUCR, ISC11);
            break;
        case EXTI1_ANY_CHANGE:
            SET_BIT(MCUCR, ISC10);
            CLR_BIT(MCUCR, ISC11);
            break;
        case EXTI1_FALLING_EDGE:
            CLR_BIT(MCUCR, ISC10);
            SET_BIT(MCUCR, ISC11);
            break;
        case EXTI1_RISING_EDGE:
            SET_BIT(MCUCR, ISC10);
            SET_BIT(MCUCR, ISC11);
            break;
    }
}

void EXTI1_init(EXTI1_Sense_t sense, void (*cb)(void)) {
    // Input with pull-up on PD3 (INT1)
    CLR_BIT(DDRD, PD3);
    SET_BIT(PORTD, PD3);

    exti1_apply_sense(sense);
    EXTI1_clearFlag();
    EXTI1_setCallback(cb);
    EXTI1_enable();
}

void EXTI1_enable(void) {
    SET_BIT(GICR, INT1);
}

void EXTI1_disable(void) {
    CLR_BIT(GICR, INT1);
}

void EXTI1_setCallback(void (*cb)(void)) {
    exti1_callback = cb;
}

void EXTI1_clearFlag(void) {
    SET_BIT(GIFR, INTF1);
}

// ISR
ISR(INT1_vect) {
    if (exti1_callback) {
        exti1_callback();
    }
}
