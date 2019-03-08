#include "Click_POT2_types.h"


void pot2_adcInit()
{
    ADC_Init();	
}

void pot2_adcSetInputChannel()
{
   
}

uint32_t pot2_adcRead()
{
	uint32_t adcData;
	
    adcData = ADC_Read(7);
	return adcData;
}
