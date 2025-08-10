/*
 * Motor.h
 *
 *  Created on: Aug 10, 2025
 *      Author: MNasser
 */
#include "../MCAL/GPIO.h"
#ifndef HAL_MOTOR_H_
#define HAL_MOTOR_H_

#define Motor1_pin1 0
#define Motor1_pin2 1
#define Motor2_pin1 2
#define Motor2_pin2 3

#define Motors_port 'D'

void Motors_init(void);
void Motor_forward(void);
void Motor_backword(void);
void Turning_right(void);
void Turning_left(void);
void Motor_stop(void);


#endif /* HAL_MOTOR_H_ */

