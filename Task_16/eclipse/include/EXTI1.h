#ifndef EXTI1_H_
#define EXTI1_H_

#include "EXTI1_REGISTER.h"

typedef enum {
    EXTI1_LOW_LEVEL = 0,
    EXTI1_ANY_CHANGE,
    EXTI1_FALLING_EDGE,
    EXTI1_RISING_EDGE
} EXTI1_Sense_t;

void EXTI1_init(EXTI1_Sense_t sense, void (*cb)(void));
void EXTI1_enable(void);
void EXTI1_disable(void);
void EXTI1_setCallback(void (*cb)(void));
void EXTI1_clearFlag(void);

#endif /* EXTI1_H_ */
