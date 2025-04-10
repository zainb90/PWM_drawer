/*
 * LCD_Interface.h
 *
 * Created: 2/6/2025 3:22:06 PM
 *  Author: ahmad
 */ 


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

#include "LCD_Private.h"

void LCD_Initialize(void);
void LCD_Clear_Screen(void);
void LCD_Write_Command(uint8_t command);
void LCD_Write_Character(uint8_t character);
void LCD_Write_String(uint8_t* string);
void LCD_Write_IntegerNumber(uint32_t IntNumber);
void LCD_Write_FloatNumber(fint32_t FltNumber);
void LCD_Write_Location(row Rows, column Columns);
void LCD_Write_SpecialCharacter(uint8_t* customChatacter, uint8_t location);



#endif /* LCD_INTERFACE_H_ */