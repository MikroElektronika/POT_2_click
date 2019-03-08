![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# POT2 Click

- **CIC Prefix**  : POT2
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : okt 2018.

---

### Software Support

We provide a library for the POT2 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2623/pot-2-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library contains the functions needed to start and read the ADC values.

Key functions :

- ``` void pot2_adcInit() ``` - ADC Init function
- ``` void pot2_adcSetInputChannel() ``` - ADC set input channel function
- ``` uint32_t pot2_adcRead() ``` - ADC read function

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes LOG to print data that is read from ADC
- Application Initialization - Initialization ADC Init and sets ADC input channel
- Application Task - (code snippet) - Reads data from ADC and logs data to USBUART every 500 ms.


```.c
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
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2623/pot-2-click) page.

Other mikroE Libraries used in the example:

- ADC

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
