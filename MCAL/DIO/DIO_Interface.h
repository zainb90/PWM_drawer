/*
 * DIO_Interface.h
 *
 * Created: 2/6/2025 3:00:16 PM
 *  Author: ahmad
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "DIO_Private.h"

void DIO_SetPinDirection(DIO_PortType Port, DIO_PinType Pin, DIO_DirectionType Direction);
void DIO_WritePin(DIO_PortType Port, DIO_PinType Pin, DIO_StateType State);
void DIO_TogglePin(DIO_PortType Port, DIO_PinType Pin);
DIO_StateType DIO_ReadPin(DIO_PortType Port, DIO_PinType Pin);

void DIO_SetPortDirection(DIO_PortType Port, DIO_DirectionType Direction);
void DIO_WritePort(DIO_PortType Port, uint8_t Value);
uint8_t DIO_ReadPort(DIO_PortType Port);

void DIO_SetHighHalfPortDirection(DIO_PortType Port, DIO_DirectionType Direction);
void DIO_SetLowHalfPortDirection(DIO_PortType Port, DIO_DirectionType Direction);

void DIO_WriteHighHalfPort(DIO_PortType Port, uint8_t HighValue);
void DIO_WriteLowHalfPort(DIO_PortType Port, uint8_t LowValue);

uint8_t DIO_ReadHighHalfPort(DIO_PortType Port);
uint8_t DIO_ReadLowHalfPort(DIO_PortType Port);



#endif /* DIO_INTERFACE_H_ */