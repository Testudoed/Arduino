/*
 * twi_pins.h
 *
 * This file contains mapping of SDA and SCL pins for specific devices.
 * Add these SCA and SCL port and pin definition to your target !! 
 *
 * Created: 4/29/2014 10:58:17 AM
 *  Author: kyle.roberts
 */ 


#ifndef TWI_PINS_H_
#define TWI_PINS_H_

#include <avr/io.h>

#ifdef __AVR_ATmega324A__
#	define SCL PINC0
#	define SDA PINC1
#	define SCL_REG PORTC
#	define SDA_REG PORTC
#else
#	error "Device SCL and SDA Pins not defined"
#endif



#endif /* TWI_PINS_H_ */