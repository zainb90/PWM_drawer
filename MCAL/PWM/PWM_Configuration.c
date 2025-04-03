/*
 * PWM_Configuration.c
 *
 * Created: 2/8/2025 5:33:21 PM
 *  Author: ahmad
 */ 

#include "PWM_Configuration.h"

const PWM_ConfigurationType gaStrPWM_Config[NUM_OPERATING_PWM_CHANNELS] =
{
	{
		PWM_TIMER_0_CHANNEL,
		PWM_FAST,
		PWM_PRESCALE_8,
		PWM_INVERTED,
		256U,
		4U,
		90U
	}
};