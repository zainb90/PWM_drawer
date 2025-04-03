/*
 * DIO_Configurations.h
 *
 * Created: 2/6/2025 3:00:36 PM
 *  Author: ahmad
 */ 


#ifndef DIO_CONFIGURATION_H_
#define DIO_CONFIGURATION_H_

#include "DIO_Address.h"

typedef enum {
	DIO_PORT_A,
	DIO_PORT_B,
	DIO_PORT_C,
	DIO_PORT_D
}DIO_PortType;

typedef enum {
	DIO_PIN_0,
	DIO_PIN_1,
	DIO_PIN_2,
	DIO_PIN_3,
	DIO_PIN_4,
	DIO_PIN_5,
	DIO_PIN_6,
	DIO_PIN_7
}DIO_PinType;

typedef enum {
	DIO_INPUT,
	DIO_OUTPUT
}DIO_DirectionType;

typedef enum {
	DIO_LOW,
	DIO_HIGH
}DIO_StateType;



#endif /* DIO_CONFIGURATION_H_ */