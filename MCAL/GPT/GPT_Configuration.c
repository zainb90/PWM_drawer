/*
 * GPT_Configuration.c
 *
 * Created: 2/8/2025 6:00:43 PM
 *  Author: ahmad
 */ 
#include "GPT.h"
const GPT_ConfigurationType gaStrGPT_Config[NUM_TIMERS_OPERATING] =
{
	{
		GPT_TIMER_2,
		GPT_CTC_MODE,
		GPT_PRESCALE_8,
		GPT_INTERRUPT_DISABLED
	}
};