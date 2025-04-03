/*
 * CPU_Configuration.h
 *
 * Created: 2/6/2025 2:55:29 PM
 *  Author: ahmad
 */ 


#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_


#undef F_CPU            // Disable internal clock
#define F_CPU 16000000  // Enable external clock
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "BIT_Math.h"
#include "STD_Types.h"

#include "DIO_Interface.h"
#define PORTA_OUT_REG						((volatile uint8_t*)0x3BU)
#define PORTA_DIR_REG						((volatile uint8_t*)0x3AU)
#define PORTA_INP_REG						((volatile uint8_t*)0x39U)

#define PORTB_OUT_REG						((volatile uint8_t*)0x38U)
#define PORTB_DIR_REG						((volatile uint8_t*)0x37U)
#define PORTB_INP_REG						((volatile uint8_t*)0x36U)

#define PORTC_OUT_REG						((volatile uint8_t*)0x35U)
#define PORTC_DIR_REG						((volatile uint8_t*)0x34U)
#define PORTC_INP_REG						((volatile uint8_t*)0x33U)

#define PORTD_OUT_REG						((volatile uint8_t*)0x32U)
#define PORTD_DIR_REG						((volatile uint8_t*)0x31U)
#define PORTD_INP_REG						((volatile uint8_t*)0x30U)

/************************************************************************/
/*				Global Interrupts Module - SFR Addresses                */
/************************************************************************/
#define STATUS_REG							((volatile uint8_t*)0x5FU)

/************************************************************************/
/*						Shared Timers SFR Addresses                     */
/************************************************************************/
#define TIMERS_INT_MASK_REG					((volatile uint8_t*)0x59U)
#define TIMERS_INT_FLAG_REG					((volatile uint8_t*)0x58U)

/************************************************************************/
/*						Timer 0 SFR Addresses                           */
/************************************************************************/
#define TIMER0_CTRL_REG						((volatile uint8_t*)0x53U)
#define TIMER0_CNTR_REG						((volatile uint8_t*)0x52U)
#define TIMER0_CMP_REG						((volatile uint8_t*)0x5CU)

/************************************************************************/
/*						Timer 1 SFR Addresses                           */
/************************************************************************/
#define TIMER1_CTRL_REG_A					((volatile uint8_t*)0x4FU)
#define TIMER1_CTRL_REG_B					((volatile uint8_t*)0x4EU)
#define TIMER1_CNTR_REG_H					((volatile uint8_t*)0x4DU)
#define TIMER1_CNTR_REG_L					((volatile uint8_t*)0x4CU)
#define TIMER1_CMP_A_REG_H					((volatile uint8_t*)0x4BU)
#define TIMER1_CMP_A_REG_L					((volatile uint8_t*)0x4AU)
#define TIMER1_CMP_B_REG_H					((volatile uint8_t*)0x49U)
#define TIMER1_CMP_B_REG_L					((volatile uint8_t*)0x48U)
#define TIMER1_INP_CAPT_REG_H				((volatile uint8_t*)0x47U)
#define TIMER1_INP_CAPT_REG_L				((volatile uint8_t*)0x46U)

/************************************************************************/
/*						Timer 2 SFR Addresses                           */
/************************************************************************/
#define TIMER2_CTRL_REG						((volatile uint8_t*)0x45U)
#define TIMER2_CNTR_REG						((volatile uint8_t*)0x44U)
#define TIMER2_CMP_REG						((volatile uint8_t*)0x43U)



#endif /* CPU_CONFIGURATION_H_ */