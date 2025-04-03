/*
 * PWM_Interface.h
 *
 * Created: 2/8/2025 5:25:32 PM
 *  Author: ahmad
 */ 


#ifndef PWM_INTERFACE_H_
#define PWM_INTERFACE_H_

#include "PWM_Private.h"
/************************************************************************/
/*				Function Prototypes for PWM Module                      */
/************************************************************************/
void PWM_Init(const PWM_ConfigurationType* Config_Ptr);
void PWM_SetDuty(PWM_ChannelType Tmr_Channel, PWM_OutputStateType State, uint16_t Duty_Percent);

/************************************************************************/
/*				External Variables for PWM Module                       */
/************************************************************************/
extern const PWM_ConfigurationType gaStrPWM_Config[NUM_OPERATING_PWM_CHANNELS];


#endif /* PWM_INTERFACE_H_ */