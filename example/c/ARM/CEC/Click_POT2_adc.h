#include "Click_POT2_types.h"


void pot2_adcInit()
{
    ADC1_Init();	
}

void pot2_adcSetInputChannel()
{
    ADC1_Set_Input_Channel(0x01);
}

uint32_t pot2_adcRead()
{
	uint32_t adcData;
	
    adcData = ADC1_Read(1);
	return adcData;
}
