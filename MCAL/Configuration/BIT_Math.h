/*
 * BIT_Math.h
 *
 * Created: 2/6/2025 2:55:00 PM
 *  Author: ahmad
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define set_bit(reg,bit) reg|=(1<<bit)
#define clr_bit(reg,bit) reg&=~(1<<bit)
#define tgl_bit(reg,bit) reg^=(1<<bit)
#define get_bit(reg,bit) ((reg>>bit)&0x01)


#endif /* BIT_MATH_H_ */