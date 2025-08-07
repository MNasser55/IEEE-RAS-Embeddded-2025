/*
 * GPIO.h
 *
 *  Created on: Aug 6, 2025
 *      Author: MNasser
 */
#ifndef GPIO_H
#define GPIO_H

typedef unsigned char uint8_t;
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

#define INPUT  0
#define OUTPUT 1

#define HIGH 1
#define LOW 0

void GPIO_Init(uint8_t PORTNUM,uint8_t PINNUM,uint8_t Mode);
void GPIO_Setpin(uint8_t PORTNUM,uint8_t PINNUM,uint8_t Mode);
uint8_t GPIO_Readpin(uint8_t PORTNUM,uint8_t PINNUM);

void GPIO_SetPortDirection(uint8_t port, uint8_t direction);
void GPIO_WritePort(uint8_t port, uint8_t value);

#endif

