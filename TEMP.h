/*
 * TEMP.h
 *
 * Created: 09/02/2022 12:52:43 م
 *  Author: Ahmed Helmy
 */ 


#ifndef TEMP_H_
#define TEMP_H_

#include "ADC.h"

void Temp_sensor_init(void);

u16 Temp_sensor_read(void);


#endif /* TEMP_H_ */