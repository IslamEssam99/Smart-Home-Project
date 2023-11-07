/*
* DIO.c
*
* Created: 11/7/2023 4:11:19 am
*  Author: Islam Essam
*/


#ifndef ADC_DRIVER_H_
#define ADC_DRIVER_H_
#include "STD_Types.h"

/*
	Function Name        : ADC_vinit
	Function Returns     : void
	Function Arguments   : void
	Function Description : Initialize the ADC.
*/
void ADC_vinit(void);

/*
	Function Name        : ADC_u16Read
	Function Returns     : uint16
	Function Arguments   : void
	Function Description : Read the value which converted by the ADC.
*/
uint16 ADC_u16Read(void);

#endif /* ADC_DRIVER_H_ */