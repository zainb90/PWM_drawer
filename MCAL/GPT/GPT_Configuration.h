/*
 * GPT_Configuration.h
 *
 * Created: 2/8/2025 6:00:20 PM
 *  Author: ahmad
 */ 
#include "CPU_Configuration.h"

#ifndef GPT_CONFIGURATION_H_
#define GPT_CONFIGURATION_H_

#define NUM_TIMERS_OPERATING				(1U)


/************************************************************************/
/*				Compiler Checks for Configurations                      */
/************************************************************************/
#if NUM_TIMERS_OPERATING > 3
#pragma GCC error "There are only 3 timers in ATmega32A! Fix NUM_TIMERS_OPERATING to be of maximum 3."

#endif

#endif /* GPT_CONFIGURATION_H_ */