#ifndef EXTI0_REGISTER_H_
#define EXTI0_REGISTER_H_

#include "util.h"

/* For ATmega32:
 * MCUCR: ISC01 (bit1), ISC00 (bit0) control INT0 sense
 * GICR: INT0 (bit6) enable
 * GIFR: INTF0 (bit6) flag
 */
#ifndef ISC00
#define ISC00 0
#endif
#ifndef ISC01
#define ISC01 1
#endif
#ifndef INT0
#define INT0 6
#endif
#ifndef INTF0
#define INTF0 6
#endif

#endif /* EXTI0_REGISTER_H_ */
