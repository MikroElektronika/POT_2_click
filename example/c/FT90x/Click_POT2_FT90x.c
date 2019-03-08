/*
Example for POT2 Click

    Date          : okt 2018.
    Author        : Katarina Perendic

Test configuration FT90x :
    
    MCU                : FT900
    Dev. Board         : EasyFT90x v7 
    FT90x Compiler ver : v2.3.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes LOG to print data that is read from ADC
- Application Initialization - Initialization ADC Init and sets ADC input channel
- Application Task - (code snippet) - Reads data from ADC and logs data to USBUART every 500 ms.

*/

#include "Click_POT2_types.h"
#include "Click_POT2_config.h"
#include "Click_POT2_adc.h"

void systemInit()
{
    mikrobus_logInit( _LOG_USBUART, 9600 );
    Delay_ms( 100 );
}

void applicationInit()
{
// ADC INIT
	pot2_adcSetInputChannel();
    pot2_adcInit();
    Delay_100ms();
}

void applicationTask()
{
	uint16_t ADC_value;
	char demoText[ 50 ];
	
    ADC_value = pot2_adcRead();
    
    WordToHex(ADC_value, demoText);
    mikrobus_logWrite(" ADC value: 0x", _LOG_TEXT);
    mikrobus_logWrite(demoText, _LOG_LINE);
    Delay_ms( 500 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
    	applicationTask();
    }
}
