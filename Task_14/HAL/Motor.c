/*
 * Motor.c
 *
 *  Created on: Aug 10, 2025
 *      Author: MNasser
 */

#include"Motor.h"

void Motors_init(void){
	GPIO_Init(Motors_port,Motor1_pin1,OUTPUT);
	GPIO_Init(Motors_port,Motor1_pin2,OUTPUT);
	GPIO_Init(Motors_port,Motor2_pin1,OUTPUT);
	GPIO_Init(Motors_port,Motor2_pin2,OUTPUT);
}
void Motor_forward(){

	GPIO_Setpin(Motors_port,Motor1_pin1,HIGH);
	GPIO_Setpin(Motors_port,Motor1_pin2,LOW);
	GPIO_Setpin(Motors_port,Motor2_pin1,HIGH);
	GPIO_Setpin(Motors_port,Motor2_pin2,LOW);
}
void Motor_backword(){

	GPIO_Setpin(Motors_port,Motor1_pin1,LOW);
	GPIO_Setpin(Motors_port,Motor1_pin2,HIGH);
	GPIO_Setpin(Motors_port,Motor2_pin1,LOW);
	GPIO_Setpin(Motors_port,Motor2_pin2,HIGH);
}
void Motor_stop(){

    GPIO_Setpin(Motors_port,Motor1_pin1,LOW);
	GPIO_Setpin(Motors_port,Motor1_pin2,LOW);
	GPIO_Setpin(Motors_port,Motor2_pin1,LOW);
	GPIO_Setpin(Motors_port,Motor2_pin2,LOW);
}

void Turning_right(){

	GPIO_Setpin(Motors_port,Motor1_pin1,HIGH);
	GPIO_Setpin(Motors_port,Motor1_pin2,LOW);
	GPIO_Setpin(Motors_port,Motor2_pin1,LOW);
	GPIO_Setpin(Motors_port,Motor2_pin2,LOW);

}
void Turning_left(){

	GPIO_Setpin(Motors_port,Motor1_pin1,LOW);
	GPIO_Setpin(Motors_port,Motor1_pin2,LOW);
	GPIO_Setpin(Motors_port,Motor2_pin1,LOW);
	GPIO_Setpin(Motors_port,Motor2_pin2,HIGH);

}
