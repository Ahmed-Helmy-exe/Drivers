/*
 * TEMP.c
 *
 * Created: 09/02/2022 12:52:29 م
 *  Author: Ahmed Helmy
 */ 

#include "TEMP_CFG.h"

#include "TEMP.h"



void Temp_sensor_init(void)
{
	ADC_INIT();
}

u16 Temp_sensor_read(void)
{
	u16 Digital_value ,  Analog_value  ,  temp  ;
	
	Digital_value = ADC_READ() ;
	
	Analog_value  = (Digital_value * 5000 ) / 1024;
	
	temp          = Analog_value/10;
	
	return temp;
}