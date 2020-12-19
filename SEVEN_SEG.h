/*
 * SEVEN_SEG.h
 *
 *  Created on: Dec 12, 2020
 *      Author: SOUQ COMPUTER
 */

#ifndef SEVEN_SEG_H_
#define SEVEN_SEG_H_

#define Seg_Port  PORTA_REG

typedef enum{
	DISPLAY1=0,
	DISPLAY2
}ENABLE_Type;

extern void SEGMENT_Display_test(void);

extern void SEGMENT_Display(uint8 num);

extern void SEGMENT_Display_2Digit(ENABLE_Type en ,uint8 num);

#endif /* SEVEN_SEG_H_ */
