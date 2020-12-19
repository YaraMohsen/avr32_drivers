/*
 * DIO_Reg.h
 *
 *  Created on: Dec 11, 2020
 *      Author: SOUQ COMPUTER
 */

#ifndef DIO_REG_H_
#define DIO_REG_H_

#include "STD_Types.h"
#define PINA_REG  *((volatile uint8 *)0x39)
#define DDRA_REG  *((volatile uint8 *)0x3A)
#define PORTA_REG  *((volatile uint8 *)0x3B)


#define PINB_REG  *((volatile uint8 *)0x36)
#define DDRB_REG  *((volatile uint8 *)0x37)
#define PORTB_REG  *((volatile uint8 *)0x38)


#define PINC_REG  *((volatile uint8 *)0x33)
#define DDRC_REG  *((volatile uint8 *)0x34)
#define PORTC_REG  *((volatile uint8 *)0x35)


#define PIND_REG  *((volatile uint8 *)0x30)
#define DDRD_REG  *((volatile uint8 *)0x31)
#define PORTD_REG  *((volatile uint8 *)0x32)

#endif /* DIO_REG_H_ */
