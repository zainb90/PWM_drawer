/*
 * GLCD_Configuration.h
 *
 * Created: 2/6/2025 3:28:27 PM
 *  Author: ahmad
 */ 


#ifndef GLCD_CONFIGURATION_H_
#define GLCD_CONFIGURATION_H_

#include "GLCD_Char_Patterns.h"
#include "CPU_Configuration.h"
#include "DIO_Interface.h"
/************************/
/*					Graphical LCD Characteristics                       */
/************************/
#define GLCD_MAX_LINES							(8U)
#define GLCD_MAX_LINE_PIXEL_WIDTH				(128U)
#define GLCD_MAX_PAGE_PIXEL_WIDTH				(64U)

/************************/
/*					Graphical LCD Configurations                        */
/************************/
#define GLCD_USE_TIMERS_FOR_DELAY				(0U)	/* 1 to use GPT for delay, 0 to use delay.h */

/************************/
/*					Graphical LCD Connections                           */
/************************/
#define GLCD_CTRL_PORT   DIO_PORT_B
#define GLCD_ENABLE_PIN	  DIO_PIN_0
#define GLCD_RW_PIN								DIO_PIN_1
#define GLCD_RS_PIN								DIO_PIN_2
#define GLCD_PAGE_SELECT_PIN_1					DIO_PIN_4
#define GLCD_PAGE_SELECT_PIN_2					DIO_PIN_5
#define GLCD_RESET_PIN							DIO_PIN_6


#define GLCD_DATA_PORT							DIO_PORT_A
#define GLCD_DATA_D0_PIN						DIO_PIN_0
#define GLCD_DATA_D1_PIN						DIO_PIN_1
#define GLCD_DATA_D2_PIN						DIO_PIN_2
#define GLCD_DATA_D3_PIN						DIO_PIN_3
#define GLCD_DATA_D4_PIN						DIO_PIN_4
#define GLCD_DATA_D5_PIN						DIO_PIN_5
#define GLCD_DATA_D6_PIN						DIO_PIN_6
#define GLCD_DATA_D7_PIN						DIO_PIN_7



#endif /* GLCD_CONFIGURATION_H_ */