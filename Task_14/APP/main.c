/*
 * main.c
 *
 *  Created on: Aug 6, 2025
 *      Author: MNasser
 */



#include "../HAL/Button.h"
#include "../HAL/Motor.h"

int main(void)
{
	uint8_t Value_1=0 ,Value_2=0 ,Value_3=0 ,Value_4=0 ,Value_5=0 ;
	Buttons_init();
	Motors_init();


   while (1)
   {

 read_button(Buttons_Port ,Forword_button , &Value_1);
	   if (Value_1==1){
		   Motor_forward();
	   }

  read_button(Buttons_Port ,Backword_button , &Value_2);
   	   if (Value_2==1){
   		 Motor_backword();
   	   }


   read_button(Buttons_Port,Turning_right_button,&Value_3);
	   if (Value_3==1){
		   Turning_right();
	   }


   read_button(Buttons_Port,Turning_left_button , &Value_4);
   	   if (Value_4==1){
   		Turning_left();
   	   }


      read_button(Buttons_Port , Stop_button , &Value_5);
      	   if (Value_5==1){
      	Motor_stop();
      	   }
   }

}




