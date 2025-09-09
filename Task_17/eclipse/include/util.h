#ifndef UTIL_H_
#define UTIL_H_

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdint.h>
#include <stdbool.h>

#define SET_BIT(REG,BIT)   ((REG) |= (1U << (BIT)))
#define CLR_BIT(REG,BIT)   ((REG) &= ~(1U << (BIT)))
#define TOG_BIT(REG,BIT)   ((REG) ^= (1U << (BIT)))
#define READ_BIT(REG,BIT)  (((REG) >> (BIT)) & 1U)

#endif /* UTIL_H_ */
