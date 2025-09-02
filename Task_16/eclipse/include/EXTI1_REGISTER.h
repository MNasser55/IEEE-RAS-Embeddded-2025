#ifndef EXTI1_REGISTER_H_
#define EXTI1_REGISTER_H_

#include "util.h"

/* For ATmega32:
 * MCUCR: ISC11 (bit3), ISC10 (bit2) control INT1 sense
 * GICR: INT1 (bit7) enable
 * GIFR: INTF1 (bit7) flag
 */
#ifndef ISC10
#define ISC10 2
#endif
#ifndef ISC11
#define ISC11 3
#endif
#ifndef INT1
#define INT1 7
#endif
#ifndef INTF1
#define INTF1 7
#endif

#endif /* EXTI1_REGISTER_H_ */
