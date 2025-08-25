#include "../HAL/LCD/LCD.h"
#include "../HAL/KEYPAD/KEYPAD.h"
#include <util/delay.h>
#include <stdint.h>

static uint8_t started = 0;

static uint8_t heart_char[8] = {
    0b00000,
    0b00000,
    0b11011,
    0b11111,
    0b11111,
    0b01110,
    0b00100,
    0b00000
};


static uint8_t smile_char[8] = {
    0b00000,
    0b00000,
    0b01010,
    0b00000,
    0b00000,
    0b10001,
    0b01110,
    0b00000
};

static void reset_calc(int *n1, int *n2, int *res, char *op)
{
    *n1 = 0; *n2 = 0; *res = 0; *op = 0;
    started = 0;
    LCD_Clear();
    LCD_GoTo(0,3);
    LCD_WriteString("Calc Ready");
    LCD_GoTo(1,0);
    LCD_WriteString("Nasser ");
    LCD_WriteChar(1);
    LCD_WriteChar(0);
    started = 0;
}

int main(void)
{
    LCD_Init();
    KEYPAD_Init();
    LCD_CreateCustomChar(0, heart_char);
    LCD_CreateCustomChar(1, smile_char);

    LCD_GoTo(0,3);
    LCD_WriteString("Calc Ready");


    LCD_GoTo(1, 0);
    LCD_WriteString("Nasser ");
    LCD_WriteChar(1);
    LCD_WriteChar(0);
    char key;
    int  num1 = 0, num2 = 0, result = 0;
    char op = 0;

    while (1)
    {
        key = KEYPAD_GetKey();
        if (key == KEYPAD_NO_PRESSED) continue;

        // زرار Clear
        if (key == 'C') {
            reset_calc(&num1, &num2, &result, &op);
            continue;
        }

            if (key >= '0' && key <= '9')
        {
            if (!started) {
                LCD_Clear();
                _delay_ms(3);
                started = 1;
            }

            LCD_WriteChar(key);

            if (op == 0)  num1 = num1 * 10 + (key - '0');
            else          num2 = num2 * 10 + (key - '0');
            continue;
        }


        if (key == '+' || key == '-' || key == '*' || key == '/')
        {
            if (!started) continue;
            op = key;
            LCD_WriteChar(key);
            continue;
        }


        if (key == '=')
        {
            if (!started) continue;

            uint8_t has_error = 0;
            switch (op)
            {
                case '+': result = num1 + num2; break;
                case '-': result = num1 - num2; break;
                case '*': result = num1 * num2; break;
                case '/':
                    if (num2 != 0) result = num1 / num2;
                    else { has_error = 1; }
                    break;
                default:  result = num1; break;
            }

            if (has_error) {
                LCD_Clear();
                LCD_WriteString("Err div0");
                _delay_ms(700);
                reset_calc(&num1, &num2, &result, &op);
                continue;
            }

            LCD_Clear();
            _delay_ms(2);
            LCD_WriteInteger(result);


            num1 = result; num2 = 0; op = 0;
            started = 1;
        }
    }
}
