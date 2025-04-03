/*
 * GccApplication2.c
 *
 * Created: 3/4/2025 
 * Author : zainb 
 */ 

#include <avr/io.h>

#include "CPU_Configuration.h"
#include "PWM_Drawerh.h" 

#include <util/delay.h>

int main(void)
{
	PWMDrawer_Init();
	PWMDrawer_SignalAttributesType Signal_Data = {0, 0, 0, 0, 0};
	fint32_t Scale_ms = 0;
	while(1)
	{
		//app
		PWMDrawer_MeasureSignal(&Signal_Data);
		Scale_ms = (Signal_Data.Period_Time_ms) / 4;
		PWMDrawer_DrawSignal(&Signal_Data, Scale_ms);
		_delay_ms(100);
	}
}