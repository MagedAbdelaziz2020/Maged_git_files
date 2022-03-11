/*
 * LCD.c
 *
 * Created: 2/14/2020 10:42:02 PM
 * Author : Akram
 */ 

#include "BIT_LVL.h"
#include "STD_Types.h"
#include "LCD.h"



int main(void)
{
	LCD_voidInit();
	LCD_voidWriteCharacter('A');
	LCD_voidWriteCharacter('K');
	LCD_voidWriteCharacter('R');
	LCD_voidWriteCharacter('A');
	LCD_voidWriteCharacter('M');
    while (1) 
    {
		
    }
	return 0;
}

