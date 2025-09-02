#ifndef SEVENSEG_H_
#define SEVENSEG_H_

#include "util.h"

// Using PORTC for segments a..g (bits 0..6). Common Cathode assumed.
#define SEG_PORT PORTC
#define SEG_DDR  DDRC

void sevenseg_init(void);
void sevenseg_show(uint8_t digit);

#endif /* SEVENSEG_H_ */
