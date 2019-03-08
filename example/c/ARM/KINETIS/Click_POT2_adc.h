#include "Click_POT2_types.h"


void pot2_adcInit()
{
    ADC0_Init();	
}

void pot2_adcSetInputChannel()
{
    ADC0_Set_Input_Channel(_ADC_CHANNEL_12);
}

uint32_t pot2_adcRead()
{
	uint32_t adcData;
	
    adcData = ADC0_Read(12);
	return adcData;
}
