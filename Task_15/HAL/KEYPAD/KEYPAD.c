/*
 * Keybad.c
 *
 *  Created on: Aug 25, 2025
 *      Author: MNasser
 */
#include "../KEYPAD/KEYPAD.h"

#include <util/delay.h>

void KEYPAD_Init(void)
{
    KEYPAD_DDR = 0xF0;
    KEYPAD_PORT = 0xFF;
}

char KEYPAD_GetKey(void)
{
    static const char keys[4][4] = {
        {'7','8','9','/'},
        {'4','5','6','*'},
        {'1','2','3','-'},
        {'C','0','=','+'}
    };

    for (uint8_t col = 0; col < 4; col++)
    {
        // فعّل الأعمدة: كله HIGH ما عدا العمود المختار LOW
        KEYPAD_PORT = 0xFF;                 // pull-ups للصفوف + أعمدة HIGH
        KEYPAD_PORT &= ~(1 << (col + 4));   // العمود الحالي LOW (PD4..PD7)

        _delay_us(50); // settling

        uint8_t rows = KEYPAD_PIN & 0x0F;   // الصفوف PD0..PD3

        for (uint8_t row = 0; row < 4; row++)
        {
            if (!(rows & (1 << row)))       // LOW = زر مضغوط
            {
                _delay_ms(20);


                if (!((KEYPAD_PIN & 0x0F) & (1 << row)))
                {
                    char k = keys[row][col];


                    while (!((KEYPAD_PIN & 0x0F) & (1 << row)))
                    {
                        // خليك مخلّي نفس العمود LOW أثناء الانتظار
                        KEYPAD_PORT = 0xFF;
                        KEYPAD_PORT &= ~(1 << (col + 4));
                    }
                    _delay_ms(20);

                    return k;
                }
            }
        }
    }
    return KEYPAD_NO_PRESSED;
}
