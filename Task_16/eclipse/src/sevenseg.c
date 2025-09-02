#include "../include/sevenseg.h"

static const uint8_t seg_cc_patterns[10] = {
    // gfedcba (bit0 = a)
    0b00111111, // 0
    0b00000110, // 1
    0b01011011, // 2
    0b01001111, // 3
    0b01100110, // 4
    0b01101101, // 5
    0b01111101, // 6
    0b00000111, // 7
    0b01111111, // 8
    0b01101111  // 9
};

void sevenseg_init(void) {
    SEG_DDR = 0x7F;     // PC0..PC6 outputs
    SEG_PORT = 0x00;    // all off
}

void sevenseg_show(uint8_t digit) {
    if (digit > 9) digit = 0;
    SEG_PORT = seg_cc_patterns[digit];
}
