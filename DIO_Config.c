/*
 * DIO_Config.c
 *
 *  Created on: Dec 12, 2020
 *      Author: SOUQ COMPUTER
 */

#include "DIO_Reg.h"
#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO.h"



DDR_type DIO_Pinconfig[32]={

INPULLUP,     //A0
OUTPUT,       // A1
OUTPUT,       //A2
INPULLUP,     //A3
OUTPUT,       //A4
OUTPUT,
INPULLUP,
OUTPUT,     //A7

OUTPUT,//B0
OUTPUT,//B1
INPULLUP,//B2
OUTPUT,//B3
OUTPUT,
INPULLUP,
OUTPUT,
OUTPUT,

INPULLUP,//C0
OUTPUT,
OUTPUT,
OUTPUT,
INPULLUP,
OUTPUT,
OUTPUT,
OUTPUT, //C7

INPULLUP,//D0
OUTPUT,
OUTPUT,
INPULLUP,
OUTPUT,
OUTPUT,
OUTPUT,
OUTPUT//D7




};
