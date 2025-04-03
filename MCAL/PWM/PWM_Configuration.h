/*
 * PWM_Address.h
 *
 * Created: 2/8/2025 5:24:58 PM
 *  Author: ahmad
 */ 


#ifndef PWM_ADDRESS_H_
#define PWM_ADDRESS_H_

#include "CPU_Configuration.h"

#define NUM_OPERATING_PWM_CHANNELS			(1U) /* Input the number of operating Timers for PWM */
#define PWM_TIMER_0_RESOLUTION				(255U)
#define PWM_TIMER_1_RESOLUTION				(65535U)
#define PWM_TIMER_2_RESOLUTION				(255U)


#if NUM_OPERATING_PWM_CHANNELS > 4
#pragma GCC error "ATmega32A has only 3 timers with 4 PWM channels!! Fix NUM_OPERATING_PWM_CHANNELS."
#endif




#define PWM_TIMER_0_FAST_BIT			(3U)
#define PWM_TIMER_0_INVERTING_BIT		(4U)

#define PWM_TIMER_1_FAST_BIT			(3U)
#define PWM_TIMER_1_A_INVERTING_BIT		(6U)
#define PWM_TIMER_1_B_INVERTING_BIT		(4U)

#define PWM_TIMER_2_FAST_BIT			(3U)
#define PWM_TIMER_2_INVERTING_BIT		(4U)

/************************************************************************/
/*					Data Types for PWM Module                           */
/************************************************************************/
typedef enum {
	PWM_TIMER_0_CHANNEL,
	PWM_TIMER_1_CHANNEL_A,
	PWM_TIMER_1_CHANNEL_B,
	PWM_TIMER_2_CHANNEL
}PWM_ChannelType;

typedef enum {
	PWM_PHASE_CORRECT,
	PWM_FAST
}PWM_ModeType;

typedef enum {
	PWM_NO_CLK_SRC,
	PWM_PRESCALE_1,
	PWM_PRESCALE_8,
	PWM_PRESCALE_32,
	PWM_PRESCALE_64,
	PWM_PRESCALE_128,
	PWM_PRESCALE_256,
	PWM_PRESCALE_1024,
	PWM_EXT_CLK_FALLING_EDGE,
	PWM_EXT_CLK_RISING_EDGE
}PWM_ClockPrescaleType;

typedef enum {
	PWM_NON_INVERTED,
	PWM_INVERTED
}PWM_OutputStateType;

typedef struct {
	PWM_ChannelType Tmr_Channel;
	PWM_ModeType Mode;
	PWM_ClockPrescaleType Clk_Prescale;
	PWM_OutputStateType State;
	uint16_t Prescale_Value;
	uint16_t Period_ms;
	uint8_t Duty_Percent;
}PWM_ConfigurationType;



#endif /* PWM_ADDRESS_H_ */