/*
 * Button.h
 *
 *  Created on: Aug 10, 2025
 *      Author: MNasser
 */
#include "../MCAL/GPIO.h"
#ifndef HAL_BUTTON_H_
#define HAL_BUTTON_H_

#define Forword_button         0
#define Backword_button        1
#define Turning_right_button   2
#define Turning_left_button    3
#define Stop_button            4

#define Buttons_Port  'C'

void Buttons_init(void);
void read_button(uint8_t Button_port, uint8_t button_pin,uint8_t *value);

#endif /* HAL_BUTTON_H_ */
