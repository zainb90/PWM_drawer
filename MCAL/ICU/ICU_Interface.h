/*
 * ICU_Interface.h
 *
 * Created: 2/8/2025 5:48:58 PM
 *  Author: ahmad
 */ 


#ifndef ICU_INTERFACE_H_
#define ICU_INTERFACE_H_

#include "CPU_Configuration.h"

#define ICU_TIMER1_RESOLUTION					(65536U)

#define ICU_TIMER1_EDGE_SELECT_BIT				(6U)
#define ICU_TIMER1_INT_BIT						(5U)
#define ICU_TIMER1_OVF_FLAG_BIT					(2U)

/************************************************************************/
/*						Data Types for ICU Module                       */
/************************************************************************/
typedef enum {
	ICU_TIMER_1			/* ICP1 Pin on PD6 */
}ICU_TimerChannelType;

typedef enum {
	ICU_NO_CLK_SRC,
	ICU_PRESCALE_1,
	ICU_PRESCALE_8,
	ICU_PRESCALE_64,
	ICU_PRESCALE_256,
	ICU_PRESCALE_1024,
	ICU_EXT_CLK_FALLING_EDGE,
	ICU_EXT_CLK_RISING_EDGE
}ICU_ClockPrescaleType;

typedef enum {
	ICU_TRIGGER_FALLING_EDGE,
	ICU_TRIGGER_RISING_EDGE
}ICU_TriggerEdgeType;

typedef enum {
	ICU_INTERRUPT_DISABLED,
	ICU_INTERRUPT_ENABLED
}ICU_InterruptStateType;

typedef enum {
	ICU_RUNNING,
	ICU_EVENT_CATURED
}ICU_StatusType;

typedef struct {
	fint32_t High_Time;
	fint32_t Period_Time;
}ICU_DutyCycleType;

typedef struct {
	ICU_TimerChannelType Tmr_Channel;
	ICU_ClockPrescaleType Clk_Prescale;
	ICU_TriggerEdgeType Trigger_Edge;
	ICU_InterruptStateType Int_State;
}ICU_ConfigurationType;




void ICU_Init(const ICU_ConfigurationType* Config_Ptr);
void ICU_SetTriggerEdge(ICU_TimerChannelType Tmr_Channel, ICU_TriggerEdgeType Edge);
void ICU_ClearTimerValue(ICU_TimerChannelType Tmr_Channel);
uint16_t ICU_GetInputCaptureValue(ICU_TimerChannelType Tmr_Channel);
ICU_StatusType ICU_GetStatus(ICU_TimerChannelType Tmr_Channel);
void ICU_GetDutyCycle(ICU_TimerChannelType Tmr_Channel, uint16_t Prescale_Value, ICU_DutyCycleType* Duty_Ptr);

extern const ICU_ConfigurationType gStrICU_Config;
#endif /* ICU_INTERFACE_H_ */