/*
 * GLCD_Interface.h
 *
 * Created: 2/6/2025 3:28:42 PM
 *  Author: ahmad
 */ 

#include "GLCD_Private.h"

#ifndef GLCD_INTERFACE_H_
#define GLCD_INTERFACE_H_

typedef enum {
	GLCD_DISPLAY_OFF				= (0x3EU),
	GLCD_DISPLAY_ON					= (0x3FU),
	GLCD_SET_Y_ADDRESS_PREFIX		= (0x40U),
	GLCD_SET_X_ADDRESS_PREFIX		= (0xB8U),
	GLCD_SET_Z_ADDRESS_PREFIX		= (0xC0U)
}GLCD_CommandType;

typedef enum {
	GLCD_INSTRUCTION_REG,
	GLCD_DATA_REG
}GLCD_RegisterSelectType;

typedef enum {
	GLCD_NO_PAGES,
	GLCD_PAGE_0,
	GLCD_PAGE_1,
	GLCD_BOTH_PAGES
}GLCD_PageSelectType;

typedef enum {
	GLCD_WRITE_MODE,
	GLCD_READ_MODE
}GLCD_ReadWriteType;

/************************************************************************/
/*			Function Prototypes for Graphical LCD Module                */
/************************************************************************/
void GLCD_Init(void);
void GLCD_SelectPage(GLCD_PageSelectType Page);
void GLCD_SendInstruction(GLCD_CommandType Instruction);
void GLCD_SendData(uint8_t Data);
void GLCD_Reset(void);
void GLCD_DisplayCharacter(char Data);
void GLCD_DisplayString(char* Data_Ptr);
void GLCD_DisplayInteger(sint32_t Data);
void GLCD_DisplayFloatingPoint(fint32_t Data);
void GLCD_ClearDisplay(void);
void GLCD_GoToLine(uint8_t Line);
void GLCD_DisplaySpecialPattern(uint64_t Pattern);


#endif /* GLCD_INTERFACE_H_ */