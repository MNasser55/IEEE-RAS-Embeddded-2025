/*
 * Button.c
 *
 *  Created on: Aug 10, 2025
 *      Author: MNasser
 */
#include "Button.h"

void Buttons_init(void){

	GPIO_Init( Buttons_Port, Forword_button,INPUT);
	GPIO_Init( Buttons_Port,Backword_button,INPUT);
	GPIO_Init( Buttons_Port,Turning_right_button,INPUT);
	GPIO_Init( Buttons_Port,Turning_left_button,INPUT);
	GPIO_Init( Buttons_Port,Stop_button ,INPUT);

	 GPIO_Setpin( Buttons_Port,Forword_button, LOW);
	 GPIO_Setpin( Buttons_Port,Backword_button, LOW);
	 GPIO_Setpin( Buttons_Port,Turning_right_button, LOW);
	 GPIO_Setpin( Buttons_Port,Turning_left_button, LOW);
	 GPIO_Setpin( Buttons_Port,Stop_button, LOW);
}

void read_button(uint8_t Buttons_port, uint8_t button_pin,uint8_t *value){

	if(GPIO_Readpin(Buttons_port,button_pin)==LOW){

		*value = 0;

	}else{

		*value = 1;

	}


}
