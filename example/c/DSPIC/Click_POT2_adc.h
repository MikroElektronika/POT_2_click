#include "Click_POT2_types.h"


void pot2_adcInit()
{
    ADC1_Init_Advanced(_ADC_12bit, _ADC_INTERNAL_VREFL | _ADC_INTERNAL_VREFH);	
}

void pot2_adcSetInputChannel()
{
    
}

uint32_t pot2_adcRead()
{
	uint32_t adcData;
	
    adcData = ADC1_Read(8);
	return adcData;
}
