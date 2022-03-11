/*
 * LCD.h
 *
 * Created: 2/14/2020 10:42:38 PM
 *  Author: Akram
 */ 


#ifndef LCD_H_
#define LCD_H_

void LCD_voidInit(void);
void LCD_voidSendCommand(uint8 Command);
void LCD_voidWriteCharacter(uint8 Data);

#define LCD_CLEAR       0x01
#define LCD_SHIFT_RIGHT 0x1C
#define LCD_SHIFT_LEFT  0x18
#define LCD_4_BIT_MODE  0x28
#define LCD_DISPLAY_ON  0x0C

#endif /* LCD_H_ */