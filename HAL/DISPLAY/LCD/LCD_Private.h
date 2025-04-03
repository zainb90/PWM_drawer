/*
 * LCD_Private.h
 *
 * Created: 2/6/2025 3:22:21 PM
 *  Author: ahmad
 */ 


#ifndef LCD_PRIVATE_H_
#define LCD_PRIVATE_H_

#include "LCD_Configuration.h"

void reverse(char* str, int len);
int intToStr(int x, char str[], int d);
void ftoa(float n, char* res, int afterpoint);



#endif /* LCD_PRIVATE_H_ */