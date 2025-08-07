/*
 * GPIO.c
 *
 *  Created on: Aug 6, 2025
 *      Author: MNasser
 */

#include "../inc/registers.h"
#include "../inc/GPIO.h"
void GPIO_Init(uint8_t PORTNUM,uint8_t PINNUM,uint8_t Mode){
	switch(PORTNUM){

	case 'A':
		if(Mode==INPUT){
			DDRA &=~(1<<PINNUM);

		}else{

			DDRA |=(1<<PINNUM);

		}
	break;
	case 'B':
			if(Mode==0){
				DDRB &=~(1<<PINNUM);

			}else{

				DDRB |=(1<<PINNUM);

			}
		break;
	case 'C':
			if(Mode==0){
				DDRC &=~(1<<PINNUM);

			}else{

				DDRC |=(1<<PINNUM);

			}
		break;
	case 'D':
			if(Mode==0){
				DDRD &=~(1<<PINNUM);

			}else{

				DDRD|=(1<<PINNUM);

			}
		break;


	}


}
void GPIO_Setpin(uint8_t PORTNUM,uint8_t PINNUM,uint8_t Mode){

	switch(PORTNUM){

   case 'A':
		if(Mode==LOW){
			PORTA &=~(1<<PINNUM);

		}else{

			PORTA |=(1<<PINNUM);

		}
	break;
	case 'B':
			if(Mode==LOW){
				PORTB &=~(1<<PINNUM);

			}else{

				PORTB |=(1<<PINNUM);

			}
		break;
	case 'C':
			if(Mode==LOW){
				PORTC &=~(1<<PINNUM);

			}else{

				PORTC |=(1<<PINNUM);

			}
		break;
	case 'D':
			if(Mode==LOW){
				PORTD &=~(1<<PINNUM);

			}else{

				PORTD|=(1<<PINNUM);

			}
		break;


	}

}
uint8_t  GPIO_Readpin(uint8_t PORTNUM,uint8_t PINNUM){

	  switch(PORTNUM) {
	        case 'A': return (PINA >> PINNUM) & 1;
	        case 'B': return (PINB >> PINNUM) & 1;
	        case 'C': return (PINC >> PINNUM) & 1;
	        case 'D': return (PIND>> PINNUM) & 1;
	    }
	    return 0;



}

void GPIO_SetPortDirection(uint8_t port, uint8_t direction)
{
	switch(port)
	{
		case'A':
			DDRA = direction;
			break;
		case 'B':
			DDRB = direction;
			break;
		case 'C':
			DDRC = direction;
			break;
		case 'D':
			DDRD = direction;
			break;
		default:
			// Do nothing or handle error
			break;
	}
}

void GPIO_WritePort(uint8_t port,uint8_t value)
{
	switch(port)
	{
		case PORT_A:
			PORTA = value;
			break;
		case PORT_B:
			PORTB = value;
			break;
		case PORT_C:
			PORTC = value;
			break;
		case PORT_D:
			PORTD = value;
			break;
		default:
			// ممكن تضيف هنا error handler أو تسيبها فاضية
			break;
	}
}

