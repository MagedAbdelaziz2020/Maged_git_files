/*
 * LCD.c
 *
 * Created: 2/14/2020 10:42:49 PM
 *  Author: Akram
 */ 
#include "BIT_LVL.h"
#include "STD_Types.h"
#include "DIO.h"
#include "LCD.h"
#include "LCD_config.h"
#include <avr/io.h>
#define F_CPU 8000000
#include <util/delay.h>


void LCD_voidSendCommand(uint8 Command)
{
	uint8 Upper = Command>>4;
	uint8 Lower = Command & 0x0f;
	//send 1st part of command
	DIO_voidSetPinValue(LCD_RS_PORT,LCD_RS_PIN,DIO_LOW);
	DIO_voidSetPinValue(LCD_RW_PORT,LCD_RW_PIN,DIO_LOW);
	if(((Upper>>0)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D4_PORT,LCD_D4_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D4_PORT,LCD_D4_PIN,DIO_LOW);
	}
	if(((Upper>>1)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D5_PORT,LCD_D5_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D5_PORT,LCD_D5_PIN,DIO_LOW);
	}
	if(((Upper>>2)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D6_PORT,LCD_D6_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D6_PORT,LCD_D6_PIN,DIO_LOW);
	}
	if(((Upper>>3)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D7_PORT,LCD_D7_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D7_PORT,LCD_D7_PIN,DIO_LOW);
	}
	DIO_voidSetPinValue(LCD_E_PORT,LCD_E_PIN,DIO_HIGH);
	_delay_ms(2);
	DIO_voidSetPinValue(LCD_E_PORT,LCD_E_PIN,DIO_LOW);
	
	//send 2nd part of command
	DIO_voidSetPinValue(LCD_RS_PORT,LCD_RS_PIN,DIO_LOW);
	DIO_voidSetPinValue(LCD_RW_PORT,LCD_RW_PIN,DIO_LOW);
	if(((Lower>>0)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D4_PORT,LCD_D4_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D4_PORT,LCD_D4_PIN,DIO_LOW);
	}
	if(((Lower>>1)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D5_PORT,LCD_D5_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D5_PORT,LCD_D5_PIN,DIO_LOW);
	}
	if(((Lower>>2)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D6_PORT,LCD_D6_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D6_PORT,LCD_D6_PIN,DIO_LOW);
	}
	if(((Lower>>3)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D7_PORT,LCD_D7_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D7_PORT,LCD_D7_PIN,DIO_LOW);
	}
	DIO_voidSetPinValue(LCD_E_PORT,LCD_E_PIN,DIO_HIGH);
	_delay_ms(2);
	DIO_voidSetPinValue(LCD_E_PORT,LCD_E_PIN,DIO_LOW);	
}

void LCD_voidWriteCharacter(uint8 Data)
{
	uint8 Upper = Data>>4;
	uint8 Lower = Data & 0x0f;
	//send 1st part of Data
	DIO_voidSetPinValue(LCD_RS_PORT,LCD_RS_PIN,DIO_HIGH);
	DIO_voidSetPinValue(LCD_RW_PORT,LCD_RW_PIN,DIO_LOW);
	if(((Upper>>0)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D4_PORT,LCD_D4_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D4_PORT,LCD_D4_PIN,DIO_LOW);
	}
	if(((Upper>>1)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D5_PORT,LCD_D5_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D5_PORT,LCD_D5_PIN,DIO_LOW);
	}
	if(((Upper>>2)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D6_PORT,LCD_D6_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D6_PORT,LCD_D6_PIN,DIO_LOW);
	}
	if(((Upper>>3)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D7_PORT,LCD_D7_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D7_PORT,LCD_D7_PIN,DIO_LOW);
	}
	DIO_voidSetPinValue(LCD_E_PORT,LCD_E_PIN,DIO_HIGH);
	_delay_ms(2);
	DIO_voidSetPinValue(LCD_E_PORT,LCD_E_PIN,DIO_LOW);
	
	//send 2nd part of Data
	DIO_voidSetPinValue(LCD_RS_PORT,LCD_RS_PIN,DIO_HIGH);
	DIO_voidSetPinValue(LCD_RW_PORT,LCD_RW_PIN,DIO_LOW);
	if(((Lower>>0)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D4_PORT,LCD_D4_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D4_PORT,LCD_D4_PIN,DIO_LOW);
	}
	if(((Lower>>1)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D5_PORT,LCD_D5_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D5_PORT,LCD_D5_PIN,DIO_LOW);
	}
	if(((Lower>>2)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D6_PORT,LCD_D6_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D6_PORT,LCD_D6_PIN,DIO_LOW);
	}
	if(((Lower>>3)&1)==1)
	{
		DIO_voidSetPinValue(LCD_D7_PORT,LCD_D7_PIN,DIO_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_D7_PORT,LCD_D7_PIN,DIO_LOW);
	}
	DIO_voidSetPinValue(LCD_E_PORT,LCD_E_PIN,DIO_HIGH);
	_delay_ms(2);
	DIO_voidSetPinValue(LCD_E_PORT,LCD_E_PIN,DIO_LOW);	
}

void LCD_voidInit(void)
{
	DIO_voidSetPinDirection(LCD_D4_PORT,LCD_D4_PIN,DIO_OUTPUT);
	DIO_voidSetPinDirection(LCD_D5_PORT,LCD_D5_PIN,DIO_OUTPUT);
	DIO_voidSetPinDirection(LCD_D6_PORT,LCD_D6_PIN,DIO_OUTPUT);
	DIO_voidSetPinDirection(LCD_D7_PORT,LCD_D7_PIN,DIO_OUTPUT);

	DIO_voidSetPinDirection(LCD_RS_PORT,LCD_RS_PIN,DIO_OUTPUT);
	DIO_voidSetPinDirection(LCD_RW_PORT,LCD_RW_PIN,DIO_OUTPUT);
	DIO_voidSetPinDirection(LCD_E_PORT,LCD_E_PIN,DIO_OUTPUT);
	
	_delay_ms(50);
	LCD_voidSendCommand(LCD_4_BIT_MODE);
	_delay_ms(5);
	LCD_voidSendCommand(LCD_DISPLAY_ON);
	_delay_ms(5);
	LCD_voidSendCommand(LCD_CLEAR);
	_delay_ms(5);
}

