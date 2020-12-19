/*
 * sevenSEG.c
 *
 *  Created on: Dec 12, 2020
 *      Author: Yara mohsen
 */

#include "DIO_Reg.h"
#include "STD_Types.h"
#include"DIO.h"
#include<util/delay.h>
#define F_CPU 8000000
#include"SEVEN_SEG.h"


/*************************************************************************
* SEGMENT_Display_test :
* ********************
* take void and return void
* test the first display seven segement on my kit "yara's kit".
* dispaly numbers from 0 to 9 with delay 1000 ms using  _delay_ms function.
*
* *************************************************************************
*
* SEGMENT_Display :
* ****************
* input : uint8 number between 0 to 9
* return void
* output : display a number taken from user without delay
* you should use take care the delay time in the application main.
*
* **************************************************************************
*
* SEGMENT_Display_2Digit :
* **********************
* return void
*
* intput : number of the seven segement display " DISPLAY1 or DISPALY2"
*          uint8 number between 0 to 9 to display it
*
* output : display number on segement 1 or 2
*          without delay in the function

*****************************************************************************/

uint8 SEVEN_Seg[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0xff,0xef	};

void display_all_numbers(void){
	uint8 i=0;

	        DIO_Write_Channel(portC6,HIGH);
			DIO_Write_Channel(portC7,LOW);

			for(i=0;i<10;i++){

				DIO_WRITE_PORT(Seg_Port, SEVEN_Seg[i]<<1);
	        _delay_ms(1000);

			}
}

void SEGMENT_Display(uint8 num){

	DIO_Write_Channel(portC6,HIGH);
	DIO_Write_Channel(portC7,LOW);

	DIO_WRITE_PORT(Seg_Port,SEVEN_Seg[num]<<1);
}

void SEGMENT_Display_2Digit(ENABLE_Type en ,uint8 num)
{
	switch(en){
	case DISPLAY1:
		DIO_Write_Channel(portC6,HIGH);
		DIO_Write_Channel(portC7,LOW);
	break;

	case DISPLAY2:
		DIO_Write_Channel(portC7,HIGH);
		DIO_Write_Channel(portC6,LOW);
	break;
	}

	DIO_WRITE_PORT( Seg_Port ,(SEVEN_Seg[num]<<1));


	}
