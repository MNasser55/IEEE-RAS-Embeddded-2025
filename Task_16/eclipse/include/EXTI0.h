#ifndef EXTI0_H_
#define EXTI0_H_

#include "EXTI0_REGISTER.h"

typedef enum {
    EXTI0_LOW_LEVEL = 0,
    EXTI0_ANY_CHANGE,
    EXTI0_FALLING_EDGE,
    EXTI0_RISING_EDGE
} EXTI0_Sense_t;

void EXTI0_init(EXTI0_Sense_t sense, void (*cb)(void));
void EXTI0_enable(void);
void EXTI0_disable(void);
void EXTI0_setCallback(void (*cb)(void));
void EXTI0_clearFlag(void);

#endif /* EXTI0_H_ */
